#include <iostream>
#include "verilated_vcd_c.h"
#include "verilated.h"
#include "Vtop.h"

#define MAX_SIM_TIME 10

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);

  Vtop *dut = new Vtop(); 
  vluint64_t sim_time = 0;
  Verilated::traceEverOn(true);
  VerilatedVcdC *m_trace = new VerilatedVcdC();
  dut->trace(m_trace, 1); //顶层类设置测试波形参数
  m_trace->open("./waveform.vcd"); //设置波形写入的文件
  
  while (sim_time < MAX_SIM_TIME) {
    dut->a=sim_time&0x01;
    dut->b=(sim_time>>1)&0x01;
    dut->eval();

    m_trace->dump(sim_time); //将当前时间点的信号值写入波形文件

    sim_time++;
  }
  m_trace->close();
  delete m_trace;
  dut->final();
  delete dut;
  return 0;
}
