#include <iostream>
#include "stdio.h"
#include "PMEM_ADDR.h"
#include <assert.h>
#include <cstdint>
#include "stdint.h"

#define MEM_SIZE (0x40000)
#define FLASH_SIZE (0x01000000)
#define SDRAM_SIZE (0x4000000>>2)

#define USE_MEM 2

#define ROM_BASE (0x30000000)
#define RAM_BASE (0x0f000000)
#define PSRAM_SIZE (0x8000000)

// static uint32_t mem[MEM_SIZE];
uint32_t rom[FLASH_SIZE] = {0};
// uint32_t flash[FLASH_SIZE] = {0};
static uint32_t psram[PSRAM_SIZE];
static uint32_t sdram[SDRAM_SIZE];

extern void iringbuf_memadd(const char* Prefix, uint32_t addr, int len, uint32_t data);


extern "C" void flash_read(int32_t addr, int32_t *data) {
    int32_t val = rom[addr];//注意 WORK 和STUDY不同
    // 字节序反转：将小端转换为大端
    *data = ((val >> 24) & 0xFF) |       // 最高字节移到最低位
            ((val >> 8) & 0xFF00) |      // 次高字节移到次低位
            ((val << 8) & 0xFF0000) |    // 次低字节移到次高位
            ((val << 24) & 0xFF000000);  // 最低字节移到最高位
    // *data = val;
    // printf("flash_read: addr = %x, data = %x\n", addr, *data);
}
extern "C" void mrom_read(int32_t addr, int32_t *data) {
  assert(0);

}

extern int32_t psram_api(int32_t addr, int32_t data, int32_t write,uint32_t *psram);
extern "C" int32_t psram_ctr(int32_t addr, int32_t data, int32_t write) {
  return psram_api(addr, data, write, psram);
}


extern int32_t sdram_api(int32_t addr, int32_t data, int32_t write,uint32_t *sdram);
extern "C" int32_t sdram_ctr(int32_t addr, uint32_t data, int32_t write){
  return sdram_api(addr, data, write,sdram);
}

uint32_t * mem_scan(uint32_t addr)
{
  // uint32_t *tar_addr = &mem[0];
  return 0;
}


uint32_t rom_read(uint32_t  addr)
{
  uint32_t tar_addr = (addr-ROM_BASE)>>2;
  if (tar_addr >= MEM_SIZE)
    exit(1);
  return rom[tar_addr];
}

void mem_init(const char * file)
{
  FILE *fp = NULL;
  #if USE_MEM==1
  fp = fopen("/home/ylqt/study/sEMU/normal/hex/mem.bin", "r");
  #elif USE_MEM==0
  fp = fopen("/home/ylqt/study/YSYX_data/ysyx-workbench/npc/hex/test.bin", "r");
  #else
  fp = fopen(file, "r");
  #endif
  if (fp == NULL)
  {
      printf("\nERROR->open file failed\n");
      return;
  }
  fread(rom, sizeof(uint32_t), FLASH_SIZE, fp);
  fclose(fp);
  #if USE_MEM==1
  rom[0x1220 / 4] = 0x100073;
  #elif USE_MEM==0
    rom[0x228 / 4] = 0x100073;
  #endif

  #ifndef USE_NVBOARD
  printf("diff_MEMCOPY\n");
  extern void difftest_cpymem(uint32_t *data, uint32_t len);
  extern void difftest_myinit(void);
  difftest_myinit();
  difftest_cpymem(rom, FLASH_SIZE);
  #endif
}