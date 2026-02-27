#include <iostream>
#include "stdio.h"
#include "sdb.h"

int ebreak_flag = 0;
volatile uint32_t DebugBuf[2048]={0};
//0-31 GRP 寄存器
//32   PC  寄存器
volatile int step_flag = 0;

extern "C" void SimStep1(int step_data)
{
    step_flag++;
}
void change_step_flag(int step_data)
{
    step_flag = step_data;
}

extern "C" void ebreak(int test)
{
  ebreak_flag = test;
}
extern "C" void debug(int addr , int data)
{
  if(addr >= 0 && addr < 2048)
    DebugBuf[addr] = (uint32_t)data;
  else
    printf("debug: addr 0x%08X out of range\n", addr);
}

void info_reg(struct SdbReg * info){
  for(int i = 0;i<32;i++){
    info->reg[i] = DebugBuf[i];
  }
  info->pc = DebugBuf[32];
  info->npc = DebugBuf[33];
  info->inst = DebugBuf[34];

  info->mtvec = DebugBuf[35];
  info->mcause = DebugBuf[36];
  info->mstatus = DebugBuf[37];
  info->mepc = DebugBuf[38];
  info->cycle_l = DebugBuf[39];
  info->cycle_h = DebugBuf[40];
}
void ShowReg(void)
{
  struct SdbReg info;
  info_reg(&info);
  printf("pc  = 0x%08X\n", info.pc);
  printf("npc = 0x%08X\n", info.npc);
  printf("cod = 0x%08X\n", info.inst);
  printf("mtvec = 0x%08X\n", info.mtvec);
  printf("mcause = 0x%08X\n", info.mcause);
  printf("mstatus = 0x%08X\n", info.mstatus);
  printf("mepc = 0x%08X\n", info.mepc);
  for(int i = 0;i<32;i++){
    printf("x%2d = 0x%08X\n", i, info.reg[i]);
  }
}
