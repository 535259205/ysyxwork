#include <iostream>
#include "stdio.h"
#include "sdb.h"
#include "string.h"

#define BATCH_MODE

static uint32_t match_len;
extern struct SdbMatch match[];

int cmd_q(char *args)
{
    return -1;
}
int cmd_si(char *args)
{
    uint32_t n = strtol(args, NULL, 0);
    printf("si %d\n", n);
    extern int SimStep(uint32_t n);
    if(SimStep(n)==1){
        printf("ebreak\n");
        return -1;
    }
    return 0;
}
int cmd_info(char * args)
{
    struct SdbReg info;
    if(args[0] == 'r'){
        extern void ShowReg(void);
        ShowReg();
    }
    if(args[0] == 'i'){
        extern void iringbuf_showall(void);
        iringbuf_showall();
    }
    if(args[0] == 'm'){
        extern void iringbuf_memshow(void);
        iringbuf_memshow();
    }
    return 0;
}
int cmd_x(char * args)
{
    char *endptr;
    uint32_t num = strtol(args, &endptr, 0);
    endptr++;
    uint32_t addr = strtol(endptr, NULL, 0);
    extern uint32_t * mem_scan(uint32_t addr);
    uint32_t *tar_addr = mem_scan(addr);
    for(int i = 0;i<num;i++){
        printf("0x%08X = 0x%08X\n", addr+i*4, tar_addr[i]);
    }
    return 0;
}
int cmd_help(char * args)
{
    for(uint32_t i = 0; i < match_len; i++){
        printf("%4s = %s\n", match[i].cmd, match[i].help);
    }
    return 0;
}
int cmd_c(char * args)
{
    extern int SimStep(uint32_t n);
    if(SimStep(UINT32_MAX)==1){
        printf("ebreak\n");
        return -1;
    }
    return 0;
}
struct SdbMatch match[] = {
    {"q", "exit sdb", cmd_q},
    {"help", "print help", cmd_help},
    {"si", "step n instruction", cmd_si},
    {"info", "print info", cmd_info},
    {"x", "print memory", cmd_x},
    {"c", "continue", cmd_c},
};

void SdbRun(void)
{
    char cmd[128];
    char *cmd_n;
    char *args;

    #ifdef BATCH_MODE
    printf("batch mode\n");
    cmd_c(NULL);
    return;
    #endif

    match_len = sizeof(match) / sizeof(match[0]);
    while (1)
    {
        printf("sdb> ");
        if (fgets(cmd, sizeof(cmd), stdin) == NULL) {
            // 处理输入错误
            break;
        }
        
        cmd_n = strtok(cmd, " \n");
        if (cmd_n == NULL) {
            // 空命令，跳过
            continue;
        }
        
        args = strtok(NULL, " \n");
        
        for (uint32_t i = 0; i < match_len; i++) {
            if (strcmp(cmd_n, match[i].cmd) == 0) {
                if (match[i].func(args) == -1) {
                    return;
                }
                break;
            }
        }
    }
}