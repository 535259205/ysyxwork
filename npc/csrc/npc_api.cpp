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


extern void mem_w_api( int data, int addr, int len,uint32_t * rom);
extern "C" void mem_w( int data, int addr, int len)
{
  mem_w_api(data, addr, len, rom);
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

extern int32_t mem_r_api( int addr, int len,uint32_t * rom);
extern "C"  int mem_r( int addr, int len)
{
  return mem_r_api(addr, len, rom);
}


extern "C"  int rom_r(int addr)
{
  uint32_t tar_addr = (addr&0x7fffffff)>>2;
  if (tar_addr >= MEM_SIZE)
    return 0;
  return rom[tar_addr];
}



