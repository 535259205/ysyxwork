#include <iostream>
#include "../obj_dir/Vtop.h"
#include "verilated_vcd_c.h"
#include "verilated.h"
#include "stdio.h"

#define MAX_SIM_TIME 100000*20000



extern int ebreak_flag;
extern void mem_init(void);
extern int reg_a0;

int main(int argc, char **argv)
{
  Verilated::commandArgs(argc, argv);

  Vtop *dut = new Vtop(); 
  vluint64_t sim_time = 0;
  // Verilated::traceEverOn(true);
  // VerilatedVcdC *m_trace = new VerilatedVcdC();
  // dut->trace(m_trace, 5); //顶层类设置测试波形参数
  // m_trace->open("./waveform.vcd"); //设置波形写入的文件
  mem_init();
  while (sim_time < UINT64_MAX)
  {
    dut->clk=!dut->clk;
    dut->rst = 0;
    if (sim_time >= 16)
      dut->rst = 1;
    dut->eval();

    // m_trace->dump(sim_time); //将当前时间点的信号值写入波形文件
    if(ebreak_flag) break;
    sim_time++;
  }

  // m_trace->close();
  // delete m_trace;
  dut->final();
  delete dut;
  
  //0成功 1失败
  if(ebreak_flag && (reg_a0==0))
    return 0;
  else
    return 1;
}
