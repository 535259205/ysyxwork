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

