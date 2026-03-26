#include "stdio.h"
#include "stdint.h"

#define USE_DEBUG 0

int32_t sdram_api(int32_t addr, int32_t data, int32_t write,uint32_t *sdram){
  uint32_t r_data=0;
  // printf("sdram_ctr: addr=0x%08X\n", addr);
  if (write & 0x80000000)
  {
    r_data=sdram[addr>>2];
    #if USE_DEBUG
    printf("sdram_ctr: addr=0x%08X, read=0x%08X,read_flag=0x%08X\n", addr, r_data, write);
    #endif
  }
  else
  {
    uint8_t mask = write & 0x0F;  // 只取低4位作为掩码
    uint32_t new_data = sdram[addr>>2];

    // 根据掩码逐字节处理
    if (!(mask & 0x01)) {  // 第0个字节 (LSB)
      new_data = (new_data & 0xFFFFFF00) | (data & 0x000000FF);
    }
    if (!(mask & 0x02)) {  // 第1个字节
      new_data = (new_data & 0xFFFF00FF) | (data & 0x0000FF00);
    }
    if (!(mask & 0x04)) {  // 第2个字节
      new_data = (new_data & 0xFF00FFFF) | (data & 0x00FF0000);
    }
    if (!(mask & 0x08)) {  // 第3个字节 (MSB)
      new_data = (new_data & 0x00FFFFFF) | (data & 0xFF000000);
    }

    sdram[addr>>2] = new_data;
    #if USE_DEBUG
    printf("sdram_ctr: addr=0x%08X, data=0x%08X,write_data=0x%08X, write=%d\n", addr, data, new_data, write);
    #endif
    // printf("now:0x%08X\n",sdram[addr>>2]);
  }
  return r_data;
}

int32_t psram_api(int32_t addr, int32_t data, int32_t write,uint32_t *psram){
  if (write){
    // printf("psram_write: addr=0x%08X, data=0x%08X, write=0x%02X\n", addr, data, write);
    switch(write&0xFF)
    {
      //写8bit 数据
    case 0x10:{
    {
      uint32_t word_addr = addr >> 2;     // 计算字地址
      uint32_t byte_offset = addr & 0x3;   // 获取低2位作为字节偏移
      uint32_t current_data = psram[word_addr]; // 读取当前值
      data = (data >> 24)&0xFF;
      // 根据字节偏移修改对应位置的数据
      switch(byte_offset) {
        case 0: // 最低字节
          current_data = (current_data & 0xFFFFFF00) | (data & 0xFF);
          break;
        case 1: // 第二字节
          current_data = (current_data & 0xFFFF00FF) | ((data & 0xFF) << 8);
          break;
        case 2: // 第三字节
          current_data = (current_data & 0xFF00FFFF) | ((data & 0xFF) << 16);
          break;
        case 3: // 最高字节
          current_data = (current_data & 0x00FFFFFF) | ((data & 0xFF) << 24);
          break;
      }
      
      psram[word_addr] = current_data; // 写回修改后的值
      // printf("addr = 0x%08X  data = 0x%08X current_data = 0x%08X write = %d\n", addr, data,current_data,write);

    }
      break;
    }
    //写16bit数据
    case 0x12:{
      uint32_t word_addr = addr >> 2;     // 计算字地址
      uint32_t byte_offset = addr & 0x3;   // 获取低2位作为字节偏移
      uint32_t current_data = psram[word_addr]; // 读取当前值
      data = (data >> 16)&0xFFFF;

      // 根据字节偏移修改对应位置的半
      switch(byte_offset) {
        case 0: 
          current_data = (current_data & 0xFFFF0000) | data;
          break;
        case 2: 
          current_data = (current_data & 0x0000FFFF) | data<<16;
          break;
        default: // 非对齐地址，不支持
          printf("ERROR: psram_ctr: unaligned 16-bit write at addr=0x%08X\n", addr);
          break;
      }
      
      psram[word_addr] = current_data; // 写回修改后的值
      // printf("addr = 0x%08X  data = 0x%08X current_data = 0x%08X,write = %d\n", addr, data,current_data,write);
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
  }
  else{
    uint32_t r_data;
    r_data = psram[addr>>2];
    // printf("psram_read: addr=0x%08X, data=0x%08X\n", addr, r_data);
    return r_data;
  }

  return 0;
}