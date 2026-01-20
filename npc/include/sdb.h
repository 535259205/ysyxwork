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
};

#endif
