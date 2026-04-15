#include "sdb.h"
#include <cstdint>

#ifdef HAVE_DIFFTEST

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include <cstdio>

extern "C" {
__EXPORT void difftest_exec(uint64_t n);
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction);
__EXPORT void difftest_regcpy(void *dut, bool direction);
__EXPORT void difftest_init(int port);
}

static CPU_state cpu_dut = {};
static CPU_state cpu_ref = {};//用于接收NEMU的数据
static uint32_t cpu_temp[sizeof(CPU_state)] = {};


void difftest_reg_init(void)
{
    cpu_ref.pc = RESET_VECTOR;
    cpu_ref.mtvec = RESET_VECTOR;   // 设置中断向量表基地址
    cpu_ref.mstatus = 0x00001800;   // MPP=11 (machine mode), MIE=0 (禁用中断)
    cpu_ref.mcause = 0x0B;    // 无异常/中断
    cpu_ref.mepc = 0x00000000;      // 异常返回地址
    cpu_ref.cycle = 0;              // 时钟周期计数器
    difftest_regcpy(&cpu_ref.gpr[0], DIFFTEST_TO_REF);
}

//1代表相同 0 代表不同
int difftest_comp(struct SdbReg *info)
{
    int flag = 1;
    for (int i = 0; i < 32; i++)
    {
        if(cpu_ref.gpr[i]!=info->reg[i]){ // 使用 -> 访问指针成员
            printf("reg %d diff: 0x%x != 0x%x\n", i, cpu_ref.gpr[i], info->reg[i]);
            printf("pc diff: 0x%x != 0x%x\n", cpu_ref.pc, info->pc);
            flag = 0;
        }
    }
    if(cpu_ref.pc!=info->pc){ // 使用 -> 访问指针成员
        printf("pc diff: 0x%x != 0x%x\n", cpu_ref.pc, info->pc);
        flag = 0;
    }
    if(cpu_ref.mstatus!=info->mstatus){ // 使用 -> 访问指针成员
        printf("mstatus diff: 0x%x != 0x%x\n", cpu_ref.mstatus, info->mstatus);
        flag = 0;
    }
    if(cpu_ref.mcause!=info->mcause){ // 使用 -> 访问指针成员
        printf("mcause diff: 0x%x != 0x%x\n", cpu_ref.mcause, info->mcause);
               flag = 0;
    }
    if(cpu_ref.mepc!=info->mepc){ // 使用 -> 访问指针成员
        printf("mepc diff: 0x%x != 0x%x\n", cpu_ref.mepc, info->mepc);
        flag = 0;
    }
    if(cpu_ref.mtvec!=info->mtvec){ // 使用 -> 访问指针成员
        printf("mtvec diff: 0x%x != 0x%x\n", cpu_ref.mtvec, info->mtvec);
        flag = 0;
    }




    return flag;
}

//1代表相同 0 代表不同
int difftest_exec_reg(struct SdbReg *info)
{
    static int temp = 0;
    if(temp<=0)
    {
        temp++;
        return 1;
    }

    static int all_count = 0;

    difftest_regcpy(&cpu_ref.gpr[0], DIFFTEST_TO_DUT);

    // 寄存器判断 - 注意使用指针访问 为0代表报错
    if(!difftest_comp(info)){
        extern void iringbuf_showall();
        extern void iringbuf_memshow();
        iringbuf_showall();
        iringbuf_memshow();
        printf("all_count: %d\n", all_count);
        return 0;
    }

    difftest_exec(1);
    all_count++;
    return 1;
}


void difftest_cpymem(uint32_t * data,uint32_t len)
{
    difftest_memcpy(CONFIG_MBASE, (uint32_t *)data, len*4, DIFFTEST_TO_REF);
}
void difftest_myinit(void)
{
    difftest_init(0);
}

#else
// NEMU 不可用时的空实现
void difftest_reg_init(void) {}
int difftest_comp(struct SdbReg *info) { (void)info; return 1; }
int difftest_exec_reg(struct SdbReg *info) { (void)info; return 1; }
void difftest_cpymem(uint32_t * data, uint32_t len) { (void)data; (void)len; }
void difftest_myinit(void) {}

#endif
