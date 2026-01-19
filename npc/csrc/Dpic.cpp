#include <iostream>
#include "../obj_dir/Vtop.h"
#include "verilated_vcd_c.h"
#include "verilated.h"
#include "PMEM_ADDR.h"
#include "stdio.h"
#include <time.h>   // 微秒级

#define USE_MEM 2

uint32_t mem[1024*1024*16];
uint32_t rom[1024*1024*16] = {0};
int ebreak_flag = 0;
int reg_a0 = 1;
struct timespec TimStart,TimEnd;

extern "C" void ebreak(int test)
{
  ebreak_flag = test;
}
extern "C" void debug(int addr , int data)
{
  if(addr == 0x00000000)
  {
    reg_a0 = data;
  }
}

void pmem_w(uint32_t addr, uint32_t data, int len)
{
    if(addr == PUART_BASE_ADDR)
    {
        for(int i=0;i<len;i++)
        {
            putchar(data>>(8*i)&0xFF);
        }
    }

}

extern "C" void mem_w( int data, int addr, int len)
{
  // printf("mem_w: data=0x%08x, addr=0x%08x, len=%d\n", data, addr, len);
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= 1024*1024*16){
    pmem_w(addr, data, len);
    return;
  }
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

uint32_t pmem_r(uint32_t addr, int len)
{
    if(addr == PTIME_BASE_ADDR || addr == PTIME_BASE_ADDR+4)
    {
      clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &TimEnd);
      uint64_t usec = (TimEnd.tv_sec - TimStart.tv_sec)*1000000;
      if(addr == PTIME_BASE_ADDR)
        return usec&0xFFFFFFFF;
      else
        return usec>>32;
    }
    return 0;
}

extern "C"  int mem_r( int addr, int len)
{
  // printf("    mem_r: addr=0x%08x, len=%d\n", addr, len);
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= 1024*1024*16){
    return pmem_r(addr, len);
  }
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
  //计时开始
  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &TimStart);

}

