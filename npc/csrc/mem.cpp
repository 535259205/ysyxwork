#include <iostream>
#include "stdio.h"
#include "PMEM_ADDR.h"
#include <assert.h>
#include <cstdint>
#include "stdint.h"

#define MEM_SIZE (0x40000)
#define USE_MEM 2

#define ROM_BASE (0x20000000)
#define RAM_BASE (0x0f000000)

static uint32_t mem[MEM_SIZE];
static uint32_t rom[MEM_SIZE] = {0};
static uint32_t flash[0x10000] = {0};

extern void iringbuf_memadd(const char* Prefix, uint32_t addr, int len, uint32_t data);


extern "C" void flash_read(int32_t addr, int32_t *data) {

  *data = flash[addr>>2];
  *data = 0x12345678;

  printf("flash_read: addr=0x%08X, data=0x%08X\n", addr, *data);
  // *data = flash[addr>>2];
}
extern "C" void mrom_read(int32_t addr, int32_t *data) { 
  switch(addr &0x03)
  {
    case 0:
      *data = rom[(addr-ROM_BASE)>>2];
      break;
    default:
      *data  = rom[(addr-ROM_BASE)>>2];
    break;  
  }

}



uint32_t * mem_scan(uint32_t addr)
{
  uint32_t *tar_addr = &mem[0];
  return tar_addr;
}


uint32_t rom_read(uint32_t  addr)
{
  uint32_t tar_addr = (addr-ROM_BASE)>>2;
  if (tar_addr >= MEM_SIZE)
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
  fread(rom, sizeof(uint32_t), MEM_SIZE, fp);
  fclose(fp);
  #if USE_MEM==1
  rom[0x1220 / 4] = 0x100073;
  #elif USE_MEM==0
    rom[0x228 / 4] = 0x100073;
  #endif
  for (int i = 0; i < (MEM_SIZE);i++)
  {
    mem[i] = rom[i];
  }
  for (int i = 0; i < 0x10000;i++)
  {
    flash[i] = (uint32_t)i;
  }

  extern void difftest_cpymem(uint32_t *data, uint32_t len);
  extern void difftest_myinit(void);
  difftest_myinit();
  difftest_cpymem(rom, MEM_SIZE);
}