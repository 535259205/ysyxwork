#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include "common.h"
#include <cpu/decode.h>

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

int JudgeFun(Decode *_this,uint32_t fun_index,uint32_t scanENTER_flag)
{
    // uint32_t pc = _this->pc;
    uint32_t dnpc = _this->dnpc;
    uint32_t snpc = _this->snpc;
    uint32_t func_start = symtab[fun_index].st_value;
    uint32_t func_end = func_start + symtab[fun_index].st_size;
    //没有发生跳转
    if(snpc==dnpc)
    {
        return FT_NONE;
    }
    //函数内部if跳转也会被判断为跳转
    //如果函数递归调用怎么办？就是本函数中又再次调用本函数这个逻辑不会被判断跳入但是实际应该是要跳入的
    //所以要设计栈来保存这些东西
    if(dnpc == func_start)
    {
        stack[top++] = fun_index;
        return FT_ENTER;
    }
    //跳出要判断就是跳出的地址是不是也是一个函数如果是函数的话就不算跳出
    //原因：main在前面然后上一个入栈的也是main所有main会出去
    //应该先判断所有的判断是否有跳入如果有的话结束主函数   如果没有的话再检查是否有跳出如果有的话就跳出
    if(top>0 && stack[top-1]==fun_index &&(scanENTER_flag==0))
    {
        if(!(dnpc>func_start && dnpc<func_end))
        {
        top--;
        return FT_EXIT;//跳出
        }
    }
    

    return FT_NONE;
}
//////////////有BUG不太对 按照资料的示例来讲recursion 应该到达起始顶峰的时候是call f1 后ret f0的
void FtraceScan(Decode *_this)
{
    // 解析符号表，查找函数符号
    if (symtab != NULL && strtab != NULL) {
        for (int i = 0; i < symtab_num; i++) {
            const char *sym_name = strtab + symtab[i].st_name;
            // 检查符号是否是函数
            unsigned char sym_type = ELF32_ST_TYPE(symtab[i].st_info);
            if (sym_type == STT_FUNC && sym_name[0] != '\0') {
                int flag = 0, j = 0;

                flag=JudgeFun(_this,i,1);
                if(flag == FT_NONE)
                {
                    continue;
                }
                printf("0x%08X: ",_this->pc);
                for( ;j<top;j++)
                {
                    printf(" ");
                }
                printf("call [%s]\n", sym_name);
                return;
            }
        }
    }

    if (symtab != NULL && strtab != NULL) {
        for (int i = 0; i < symtab_num; i++) {
            const char *sym_name = strtab + symtab[i].st_name;
            // 检查符号是否是函数
            unsigned char sym_type = ELF32_ST_TYPE(symtab[i].st_info);
            if (sym_type == STT_FUNC && sym_name[0] != '\0') {
                int flag = 0, j = 0;

                flag=JudgeFun(_this,i,0);
                if(flag == FT_NONE)
                {
                    continue;
                }
                j = -1;
                printf("0x%08X: ",_this->pc);
                for (; j < top; j++)
                {
                    printf(" ");
                }
                printf("ret  [%s]\n", sym_name);
            }
        }
    }
}

