#ifndef SDB_H_
#define SDB_H_

struct SdbMatch{
    const char * cmd;
    const char *help;
    int (*func)(char *args);
};

struct SdbReg{
    uint32_t reg[32];
    uint32_t pc;
    uint32_t npc;
    uint32_t inst;

    uint32_t mtvec;    //中断向量表基地址
    uint32_t mcause;  //中断类型（原因）
    uint32_t mstatus; //状态寄存器
    uint32_t mepc;    //中断指针
    uint32_t cycle_l;   //时钟周期计数器
    uint32_t cycle_h;   //时钟周期计数器高32位
};

#endif

