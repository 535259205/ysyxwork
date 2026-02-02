#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include "sdb.h"

static int fd;
static struct stat file_stat;
static void *elf_base = NULL;       // 映射到内存的ELF文件基地址
static Elf32_Ehdr *ehdr = NULL;     // 32位ELF文件头
static Elf32_Shdr *shdr = NULL;     // 32位节区头
static char *shstrtab = NULL;       // 节区名字符串表
static Elf32_Sym *symtab = NULL;    // 符号表
static char *strtab = NULL;         // 字符串表
static int symtab_size = 0;         // 符号表大小
static int symtab_num = 0;          // 符号表条目数量

//////////////////////
static uint32_t stack[1024];//用于保存函数调用的地址
static int top = 0;

int FtraceInit(char * elf_file) {
    fd = open(elf_file, O_RDONLY);
    if(fd < 0)
    {
        perror("open");
        return -1;
    }
    // 获取文件大小
    if(fstat(fd, &file_stat) < 0)
    {
        perror("fstat");
        close(fd);
        return -1;
    }
    // 映射ELF文件到内存
    elf_base = mmap(NULL, file_stat.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
    if(elf_base == MAP_FAILED)
    {
        perror("mmap");
        close(fd);
        return -1;
    }
    
    ehdr = (Elf32_Ehdr *)elf_base;
    
    // 定位节区表和节区名字符串表
    shdr = (Elf32_Shdr *)(elf_base + ehdr->e_shoff);
    shstrtab = (char *)(elf_base + shdr[ehdr->e_shstrndx].sh_offset);

    // 遍历所有节区，找到符号表和字符串表
    printf("===== Section Info =====\n");
    for (int i = 0; i < ehdr->e_shnum; i++) {
        const char *sec_name = shstrtab + shdr[i].sh_name;
        
        printf("Section %2d: %-40s | Type: %4d | Size: %8lu | Addr: 0x%lx\n",
               i,
               sec_name,
               shdr[i].sh_type,
               (unsigned long)shdr[i].sh_size,
               (unsigned long)shdr[i].sh_addr);
        
        // 找到符号表节区
        if (shdr[i].sh_type == SHT_SYMTAB) {
            symtab = (Elf32_Sym *)(elf_base + shdr[i].sh_offset);
            symtab_size = shdr[i].sh_size;
            symtab_num = symtab_size / sizeof(Elf32_Sym);
            
            // 找到对应的字符串表
            int strtab_idx = shdr[i].sh_link;
            strtab = (char *)(elf_base + shdr[strtab_idx].sh_offset);
        }
    }

    // 解析符号表，查找函数符号
    if (symtab != NULL && strtab != NULL) {
        printf("\n===== Function Symbols =====\n");
        printf("%-20s | Address | Size\n", "Function Name");
        printf("----------------------------------------\n");
        
        for (int i = 0; i < symtab_num; i++) {
            const char *sym_name = strtab + symtab[i].st_name;
            
            // 检查符号是否是函数
            unsigned char sym_type = ELF32_ST_TYPE(symtab[i].st_info);
            
            if (sym_type == STT_FUNC && sym_name[0] != '\0') {
                printf("%-20s | 0x%08lx |0x%08lx\n", 
                       sym_name, 
                       (unsigned long)symtab[i].st_value,
                       (unsigned long)symtab[i].st_size);
            }
        }
    }

    // munmap(elf_base, file_stat.st_size); // 解除内存映射
    // close(fd);
    return 0;
}

enum FtraceType
{
    FT_NONE = 0,
    FT_ENTER = 1,
    FT_EXIT = 2,
};

int JudgeFun(struct SdbReg *_this,uint32_t fun_index)
{
    uint32_t dnpc = _this->npc;
    uint32_t pc= _this->pc;
    uint32_t func_start = symtab[fun_index].st_value;
    uint32_t func_end = func_start + symtab[fun_index].st_size;
    uint32_t inst = _this->inst;
    //函数调用 jal/jalr ra
    if((((inst&0xFFF)==0xEF)|| ((inst&0x7FFF)==0xE7))&& ((dnpc>=func_start && dnpc<func_end)))
    {
        stack[top++] = fun_index;
        return FT_ENTER;
    }
    //函数跳出
    if(inst==0x00008067 && ((pc>func_start && pc<func_end)))
    {
        top--;
        return FT_EXIT;//跳出
    }

    return FT_NONE;
}
void FtraceScan(struct SdbReg *_this)
{
    uint32_t dnpc = _this->npc;
    uint32_t snpc = _this->pc;
    if(snpc == dnpc)//没有发生跳转操作
    {
        return;
    }
    // 解析符号表，查找函数符号
    if (symtab != NULL && strtab != NULL) {
        for (int i = 0; i < symtab_num; i++) {
            const char *sym_name = strtab + symtab[i].st_name;
            // 检查符号是否是函数
            unsigned char sym_type = ELF32_ST_TYPE(symtab[i].st_info);
            if (sym_type == STT_FUNC && sym_name[0] != '\0') {
                int flag = 0, j = 0;

                flag=JudgeFun(_this,i);
                if(flag == FT_NONE)
                {
                    continue;
                }
                printf("0x%08X: ",_this->pc);
                for( ;j<top;j++)
                {
                    printf(" ");
                }
                if(flag == FT_ENTER)
                printf("call [%s]\n", sym_name);
                else if(flag == FT_EXIT)
                printf("ret  [%s]\n", sym_name);
                return;
            }
        }
    }
}

