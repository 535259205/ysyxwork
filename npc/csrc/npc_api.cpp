#include "stdint.h"
#include "PMEM_ADDR.h"
#include "stdio.h"
#define USE_DEBUG 0
#define MEM_SIZE (0x01000000)
// static uint32_t mem[MEM_SIZE];
// static uint32_t rom[MEM_SIZE] = {0};
extern uint32_t rom[];
extern "C" void mmio_w(int addr, int data, int len)
{
  if (addr == PUART_BASE_ADDR)
  {
    for (int i = 0; i < len; i++)
    {
      putchar(data >> (8 * i) & 0xFF);
    }
    }

}

extern "C" void mem_w( int data, int addr, int len)
{
//   iringbuf_memadd("mem_w", addr, len, data);
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= MEM_SIZE){
    // pmem_w(addr, data, len);
    printf("ERR: mem_w addr=0x%08x, len=%d\n", addr, len);
    return;
  }
  uint32_t data_temp=rom[tar_addr];
  uint32_t addrl=addr&0x3;
  uint32_t tar_data=data;
#if USE_DEBUG
  printf("mem_w addr=0x%08x, len=%d, data=0x%08x write\n", addr, len, data);
#endif
  
  // 根据长度和地址偏移设置不同的掩码
  if (len == 1) {
    // 单字节写入掩码
    switch(addrl)
    {
      case 0:
        data_temp &= 0xffffff00;
        tar_data  &= ~(0xffffff00);
        break;
      case 1:
        data_temp &= 0xffff00ff;
        tar_data  &= ~(0xffff00ff);
        break;
      case 2:
        data_temp &= 0xff00ffff;
        tar_data  &= ~(0xff00ffff);
        break;
      case 3:
        data_temp &= 0x00ffffff;
        tar_data  &= ~(0x00ffffff);
        break;
      default:
        break;
    }
  } else if (len == 2) {
    // 双字节写入掩码
    switch(addrl)
    {
      case 0:
        data_temp &= 0xffff0000;  // 保留高16位，修改低16位
        tar_data  &= ~(0xffff0000);
        break;
      case 1:
        data_temp &= 0xff0000ff;  // 保留第1和第4字节，修改中间2字节
        tar_data  &= ~(0xff0000ff);
        break;
      case 2:
        data_temp &= 0x0000ffff;  // 保留低16位，修改高16位
        tar_data  &= ~(0x0000ffff);
        break;
      case 3:
        // 跨4字节边界的2字节写入
        data_temp &= 0x00ffffff;
        tar_data  &= ~(0x00ffffff);
        break;
      default:
        break;
    }
  }
  
  switch (len)
  {
    case 1:
      rom[tar_addr] = data_temp|tar_data;
      break;
    case 2:
      rom[tar_addr] = data_temp|tar_data;
      break;
    case 4:
      rom[tar_addr] = data;
      break;
    default:
      break;
  }
}

extern "C" int mmio_r(int addr, int len)
{
    // if(addr == CLINT_BASE_ADDR+0XBFF8)
    // {
    //     // extern uint32_t timer_handle(uint32_t addr, int len);
    //     // return timer_handle(addr, len);
    // }
    return 0;
}

extern "C"  int mem_r( int addr, int len)
{
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= MEM_SIZE){
    // uint32_t temp=pmem_r(addr, len);
    // iringbuf_memadd("mio_r", addr, len, temp);
    // return temp;
    printf("ERR: mem_r addr=0x%08x, len=%d\n", addr, len);
    return 0;
  }
  uint32_t data_temp=rom[tar_addr];
  uint32_t addrl=addr&0x3;
  uint32_t tar_data=data_temp;
  switch(len)
  {
    case 1:
      tar_data = (data_temp>>(8*(addrl)))&0xFF;
      break;
    case 2:
      tar_data = (data_temp>>(8*(addrl)))&0xFFFF;
      break;
    case 4:
      tar_data = data_temp;
      break;
    default:
      break;
  }
  // iringbuf_memadd("mem_r", addr, len, tar_data);
#if USE_DEBUG
  printf("mem_r addr=0x%08x, len=%d, data=0x%08x\n", addr, len, tar_data);
#endif
  return tar_data;
}


extern "C"  int rom_r(int addr)
{
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= MEM_SIZE)
    return 0;
  return rom[tar_addr];
}



