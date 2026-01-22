#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include "sdb.h"

extern "C" {
__EXPORT void difftest_exec(uint64_t n);
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction);
__EXPORT void difftest_regcpy(void *dut, bool direction);
__EXPORT void difftest_init(int port);
}
//怎么写？每运行一次比较一下寄存器？如果是内存操作去比较内存否则比较寄存器
//如果寄存器出现差异就报错？
//报错从哪里报错？ NPC里面吗？ 还是NEMU里面？
//

//1代表相同 0 代表不同
void difftest_reg_init(void)
{
    uint32_t temp[33]={0};
    temp[32] = 0x80000000;
    difftest_regcpy(temp, DIFFTEST_TO_REF);

}
int difftest_exec_reg(struct SdbReg info)
{
    uint32_t temp[33]={0};
    difftest_exec(1);
    difftest_regcpy(temp, DIFFTEST_TO_DUT);

    for (int i = 0; i < 32; i++)
    {
        if(temp[i]!=info.reg[i]){
            printf("reg %d diff: 0x%x != 0x%x\n", i, temp[i], info.reg[i]);
            printf("pc diff: 0x%x\n", temp[32]);
            return 0;
        }
    }

    if(temp[32]!=info.pc){
        printf("pc diff: 0x%x != 0x%x\n", temp[32], info.pc);
        return 0;
    }
    return 1;
}
void difftest_cpymem(uint32_t * data,uint32_t len)
{
    difftest_memcpy(CONFIG_MBASE, (uint32_t *)data, len, DIFFTEST_TO_REF);
}
void difftest_myinit(void)
{
    difftest_init(0);
}