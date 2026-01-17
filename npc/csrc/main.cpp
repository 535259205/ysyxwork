#include <iostream>
#include "../obj_dir/Vtop.h"
#include "verilated_vcd_c.h"
#include "verilated.h"

#define USE_MEM 2
#define MAX_SIM_TIME 100000*20
uint32_t mem[1024*1024*16];
uint32_t rom[1024*1024*16] = {0};
int ebreak_flag = 0;

extern "C" void ebreak(int test)
{
  ebreak_flag = test;
}
extern "C" void mem_w( int data, int addr, int len)
{
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= 1024*1024*16)
    return;
  uint32_t data_temp=mem[tar_addr];
  uint32_t addrl=addr&0x3;
  uint32_t tar_data=data<<(8*(addrl));
  switch(addrl)
  {
    case 0:
      data_temp &= 0xffffff00;
      break;
    case 1:
      data_temp &= 0xffff00ff;
      break;
    case 2:
      data_temp &= 0xff00ffff;
      break;
    case 3:
      data_temp &= 0x00ffffff;
      break;
    default:
      break;
  }
  switch (len)
  {
    case 1:
      mem[tar_addr] = data_temp|tar_data;
      break;
    case 4:
      mem[tar_addr] = data;
      break;
    default:
      break;
  }
}

extern "C"  int mem_r( int addr, int len)
{
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= 1024*1024*16)
    return 0;
  uint32_t data_temp=mem[tar_addr];
  uint32_t addrl=addr&0x3;
  uint32_t tar_data;
  switch(len)
  {
    case 1:
      tar_data = (data_temp>>(8*(addrl)))&0xFF;
      break;
    case 4:
      tar_data = data_temp;
      break;
    default:
      break;
  }
  return tar_data;
}

extern "C"  int rom_r(uint32_t addr)
{
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= 1024*1024*16)
    return 0;
  return rom[tar_addr];
}

void mem_init(void)
{
  FILE *fp = NULL;
  #if USE_MEM==1
  fp = fopen("/home/ylqt/study/sEMU/normal/hex/mem.bin", "r");
  #elif USE_MEM==0
  fp = fopen("/home/ylqt/study/sEMU/normal/hex/sum.bin", "r");
  #else
  fp = fopen("/home/ylqt/study/YSYX_data/ysyx-workbench/npc/hex/test.bin", "r");
  #endif
  if (fp == NULL)
  {
      printf("\nERROR->open file failed\n");
      return;
  }
  fread(rom, sizeof(uint32_t), 16*1024*1024, fp);
  fclose(fp);
  #if USE_MEM==1
  rom[0x1220 / 4] = 0x100073;
  #elif USE_MEM==0
    rom[0x228 / 4] = 0x100073;
  #endif
  for (int i = 0; i < (16*1024*1024);i++)
  {
    mem[i] = rom[i];
  }

}

void show_info(void)
{
  for (int i = 0; i < 10;i++)
  {
    printf("mem[%d] = %d\n",i,mem[i]);
  }
}

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);

  Vtop *dut = new Vtop(); 
  vluint64_t sim_time = 0;
  Verilated::traceEverOn(true);
  VerilatedVcdC *m_trace = new VerilatedVcdC();
  dut->trace(m_trace, 5); //顶层类设置测试波形参数
  m_trace->open("./waveform.vcd"); //设置波形写入的文件

  mem_init();
  while (sim_time < MAX_SIM_TIME)
  {
    dut->clk=!dut->clk;
    dut->rst = 0;
    if (sim_time >= 16)
      dut->rst = 1;
    dut->eval();

    m_trace->dump(sim_time); //将当前时间点的信号值写入波形文件
    if(ebreak_flag) break;
    sim_time++;
  }

  m_trace->close();
  delete m_trace;
  dut->final();
  delete dut;

  //0成功 1失败
  return !ebreak_flag;
}
