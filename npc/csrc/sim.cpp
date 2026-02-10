#include <iostream>
#include "../obj_dir/VysyxSoCFull.h"
#include "verilated_vcd_c.h"
#include "verilated.h"
#include "stdio.h"
#include "sdb.h"

#define USE_WAVE1 1
#define SHOW_LIMIT 10
#define USE_ITRACE 0
#define USE_FTRACE 0
#define USE_DIFFTEST 0

VysyxSoCFull *dut = new VysyxSoCFull(); 
vluint64_t sim_time = 0;
VerilatedVcdC *m_trace = new VerilatedVcdC();

extern int ebreak_flag;
static struct SdbReg infoa;

static volatile int step_flag = 0;
extern "C" void SimStep1(int step_data)
{
    step_flag++;
}
int SimStep(uint32_t n)
{
    for(uint32_t i = 0; i < n; i++){
        extern void info_reg(struct SdbReg * info);
        extern void DisasmEncode(uint32_t address,uint32_t len);
        info_reg(&infoa);
        DisasmEncode(infoa.pc,1);
        if(n<=SHOW_LIMIT){
            extern void iringbuf_shownow(void);
            iringbuf_shownow();
        }
        #if USE_FTRACE
        extern void FtraceScan(struct SdbReg *info);
        FtraceScan(&infoa);
        #endif

        //差分测试运行一步
        
        #if USE_DIFFTEST
        extern int difftest_exec_reg(struct SdbReg *info);
        if(!difftest_exec_reg(&infoa)){//此时报错
            return 1;
        }
        #endif

        static int count=0;
        count++;
        if (ebreak_flag)
        {
            printf("ebreak_flag is set at count %d\n", count);
            return 1;
        }
        for(;;){
            for(int j=0;j<2;j++)
            {
            dut->clock=!dut->clock;
            dut->eval();
            
            #if USE_WAVE1
            m_trace->dump(sim_time); //将当前时间点的信号值写入波形文件
            sim_time++;
            #endif
            }
            if(step_flag==1)
            {
                step_flag--;
                break;
            }
        }
    }
    return 0;
}

void SimInit(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
#if USE_WAVE1
    Verilated::traceEverOn(true);
    dut->trace(m_trace, 1); //顶层类设置测试波形参数
    m_trace->open("./waveform.vcd"); //设置波形写入的文件
#endif
    //初始化difftest寄存器
    #if USE_DIFFTEST
    extern void difftest_reg_init(void);
    difftest_reg_init();
    #endif

    //设备复位
//     for(int i=0;i<=16;i++){
//         dut->clock=!dut->clock;
//         dut->reset = 1;
//         if (sim_time >= 15)
//             dut->reset = 0;
//         dut->eval();
// #if USE_WAVE1
//         m_trace->dump(sim_time); //将当前时间点的信号值写入波形文件
// #endif
//         sim_time++;
//     }
}

void SimEnd(void)
{
#if USE_WAVE1
    m_trace->close();
#endif
    delete m_trace;
    dut->final();
    delete dut;
}