#include <iostream>
#include "stdio.h"
#include "PMEM_ADDR.h"
#include <assert.h>
#include <cstdint>
#include "stdint.h"

#define MEM_SIZE (0x40000)
#define FLASH_SIZE (0x01000000>>2)
#define SDRAM_SIZE (0x10000)

#define USE_MEM 2

#define ROM_BASE (0x30000000)
#define RAM_BASE (0x0f000000)
#define PSRAM_SIZE (0x20000000>>2)

// static uint32_t mem[MEM_SIZE];
static uint32_t rom[FLASH_SIZE] = {0};
static uint32_t flash[FLASH_SIZE] = {0};
static uint32_t psram[PSRAM_SIZE];
static uint32_t sdram[SDRAM_SIZE];

extern void iringbuf_memadd(const char* Prefix, uint32_t addr, int len, uint32_t data);


extern "C" void flash_read(int32_t addr, int32_t *data) {

    int32_t val = rom[addr];
    // 字节序反转：将小端转换为大端
    *data = ((val >> 24) & 0xFF) |       // 最高字节移到最低位
            ((val >> 8) & 0xFF00) |      // 次高字节移到次低位
            ((val << 8) & 0xFF0000) |    // 次低字节移到次高位
            ((val << 24) & 0xFF000000);  // 最低字节移到最高位
}
extern "C" void mrom_read(int32_t addr, int32_t *data) {
  assert(0);
  switch (addr & 0x03)
  {
    case 0:
      *data = rom[(addr-ROM_BASE)>>2];
      break;
    default:
      *data  = rom[(addr-ROM_BASE)>>2];
    break;  
  }

}

extern "C" int32_t psram_ctr(int32_t addr, int32_t data, int32_t write) {
  if (write){
    switch(write&0xFF)
    {
      //写8bit 数据
    case 0x10:{
    {
      uint32_t word_addr = addr >> 2;     // 计算字地址
      uint32_t byte_offset = addr & 0x3;   // 获取低2位作为字节偏移
      uint32_t current_data = psram[word_addr]; // 读取当前值
      
      // 根据字节偏移修改对应位置的数据
      switch(byte_offset) {
        case 3: // 最低字节
          current_data = (current_data & 0xFFFFFF00) | (data & 0xFF);
          break;
        case 2: // 第二字节
          current_data = (current_data & 0xFFFF00FF) | ((data & 0xFF) << 8);
          break;
        case 1: // 第三字节
          current_data = (current_data & 0xFF00FFFF) | ((data & 0xFF) << 16);
          break;
        case 0: // 最高字节
          current_data = (current_data & 0x00FFFFFF) | ((data & 0xFF) << 24);
          break;
      }
      
      psram[word_addr] = current_data; // 写回修改后的值
    }
      break;
    }
    //写16bit数据
    case 0x12:{
      uint32_t word_addr = addr >> 2;     // 计算字地址
      uint32_t byte_offset = addr & 0x3;   // 获取低2位作为字节偏移
      uint32_t current_data = psram[word_addr]; // 读取当前值
      uint16_t half_word_data = data & 0xFFFF; // 只取低16位数据
      
      // 根据字节偏移修改对应位置的半字
      switch(byte_offset) {
        case 2: // 低半字
          current_data = (current_data & 0xFFFF0000) | half_word_data;
          break;
        case 0: // 高半字
          current_data = (current_data & 0x0000FFFF) | (half_word_data << 16);
          break;
        default: // 非对齐地址，不支持
          printf("ERROR: psram_ctr: unaligned 16-bit write at addr=0x%08X\n", addr);
          break;
      }
      
      psram[word_addr] = current_data; // 写回修改后的值
      break;
    }
      //写32bit数据
    case 0x16:{
      psram[addr>>2] = data;
      break;
    default:
      printf("ERROR: psram_ctr: addr=0x%08X, data=0x%08X, write=%d\n", addr, data, write);
      break;
    }

    }

    // printf("psram_ctr: addr=0x%08X, data=0x%08X, write=%d\n", addr, data, write);
  }
  else{
    uint32_t r_data;
    r_data = psram[addr>>2];
    // printf("psram_ctr: addr=0x%08X, read=0x%08X\n", addr, r_data);
    return r_data;
  }

  return 0;
}

extern "C" int32_t sdram_ctr(int32_t addr, int32_t data, int32_t write){
  uint32_t r_data=0;
  if(write==256){
    r_data=sdram[addr];
    printf("sdram_ctr: addr=0x%08X, read=0x%08X,write=%d\n", addr, r_data,write);
  }else
  {
    switch(write&0xFF){
      case 0x02:
      sdram[addr] = (sdram[addr]&0xFF00) | (data & 0xFF);
      break;
      case 0x01:
      sdram[addr] = (sdram[addr]&0x00FF) | (data << 8);
      break;
      case 0x00:
      sdram[addr] =data;
      break;
    }
    printf("sdram_ctr: addr=0x%08X, data=0x%08X, write=%d\n", addr, data, write);
  }
  return r_data;
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
  fread(rom, sizeof(uint32_t), FLASH_SIZE, fp);
  fclose(fp);
  #if USE_MEM==1
  rom[0x1220 / 4] = 0x100073;
  #elif USE_MEM==0
    rom[0x228 / 4] = 0x100073;
  #endif

  extern void difftest_cpymem(uint32_t *data, uint32_t len);
  extern void difftest_myinit(void);
  difftest_myinit();
  difftest_cpymem(rom, FLASH_SIZE);
}