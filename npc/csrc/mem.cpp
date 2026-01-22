#include <iostream>
#include "stdio.h"
#include "PMEM_ADDR.h"

#define MEM_SIZE (1024*1024*16)
#define USE_MEM 2

static uint32_t mem[MEM_SIZE];
static uint32_t rom[MEM_SIZE] = {0};

extern void iringbuf_memadd(const char* Prefix, uint32_t addr, int len, uint32_t data);

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
  iringbuf_memadd("mem_w", addr, len, data);

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
        extern uint32_t timer_handle(uint32_t addr, int len);
        return timer_handle(addr, len);
    }
    return 0;
}

extern "C"  int mem_r( int addr, int len)
{

  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= 1024*1024*16){
    uint32_t temp=pmem_r(addr, len);
    iringbuf_memadd("mem_r", addr, len, temp);
    return temp;
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
  iringbuf_memadd("mem_r", addr, len, tar_data);
  return tar_data;
}

uint32_t * mem_scan(uint32_t addr)
{
  uint32_t *tar_addr = &mem[(addr&0x7fffffff)>>2];
  return tar_addr;
}

extern "C"  int rom_r(int addr)
{
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= 1024*1024*16)
    return 0;
  return rom[tar_addr];
}

uint32_t rom_read(uint32_t  addr)
{
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= 1024*1024*16)
    exit(1);
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
  

  extern void difftest_cpymem(uint32_t *data, uint32_t len);
  extern void difftest_myinit(void);
  difftest_myinit();
  difftest_cpymem(rom, MEM_SIZE);
  //MEM_SIZE
}


