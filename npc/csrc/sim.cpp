#include <iostream>
#include "../obj_dir/Vtop.h"
#include "verilated_vcd_c.h"
#include "verilated.h"
#include "stdio.h"
#include "sdb.h"

#define USE_WAVE1 1
#define SHOW_LIMIT 10
#define USE_ITRACE 1

Vtop *dut = new Vtop(); 
vluint64_t sim_time = 0;
VerilatedVcdC *m_trace = new VerilatedVcdC();

extern int ebreak_flag;

int SimStep(uint32_t n)
{
    for(uint32_t i = 0; i < n; i++){
        for(int j = 0;j<2;j++){
            dut->clk=!dut->clk;
            dut->eval();
            #if USE_WAVE1
            m_trace->dump(sim_time); //将当前时间点的信号值写入波形文件
            #endif
            sim_time++;
        }
        extern void info_reg(struct SdbReg * info);
        extern void DisasmEncode(uint32_t address,uint32_t len);
        struct SdbReg infoa;
        info_reg(&infoa);
        DisasmEncode(infoa.pc,1);
        if(n<=SHOW_LIMIT){
            extern void iringbuf_shownow(void);
            iringbuf_shownow();
        }
        extern void FtraceScan(struct SdbReg *_this);
        FtraceScan(&infoa);

        if(ebreak_flag){
            return 1;
        }

    }
    return 0;
}

void SimInit(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
#if USE_WAVE1
    Verilated::traceEverOn(true);
    dut->trace(m_trace, 5); //顶层类设置测试波形参数
    m_trace->open("./waveform.vcd"); //设置波形写入的文件
#endif
    //设备复位
    for(int i=0;i<=16;i++){
        dut->clk=!dut->clk;
        dut->rst = 0;
        if (sim_time >= 16)
            dut->rst = 1;
        dut->eval();
#if USE_WAVE1
        m_trace->dump(sim_time); //将当前时间点的信号值写入波形文件
#endif
        sim_time++;
    }
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