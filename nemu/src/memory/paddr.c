/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

static uint8_t sram[0x4000] = {0};
#define SRAM_BASE 0x0f000000
void sram_write(paddr_t addr, int len, word_t data) {
  // printf("sram_write: addr = " FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data);
  host_write(&sram[addr - SRAM_BASE], len, data);
}
word_t sram_read(paddr_t addr, int len) {
  // printf("sram_read : addr = " FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, host_read(&sram[addr - SRAM_BASE], len));
  return host_read(&sram[addr - SRAM_BASE], len);
}

#define UART_BASE 0x10000000
static inline bool in_sram(paddr_t addr) {
  return addr >= SRAM_BASE && addr < SRAM_BASE + 0x4000;
}
static inline bool in_uart(paddr_t addr) {
  return addr >= UART_BASE && addr < UART_BASE + 0x1fff;
}
#define PSRAM_BASE 0xA0000000
#define PSRAM_SIZE 0x04000000
static uint8_t psram[PSRAM_SIZE] = {0};

static inline bool in_psram(paddr_t addr) {
  return addr >= PSRAM_BASE && addr < PSRAM_BASE + PSRAM_SIZE;
}
word_t psram_read(paddr_t addr, int len) {
  return host_read(&psram[addr - PSRAM_BASE], len);
}
// static void psram_write(paddr_t addr, int len, word_t data) {
//   host_write(&psram[addr - PSRAM_BASE], len, data);
// }


word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr)))
  {
    word_t ret = pmem_read(addr, len);
    #if CONFIG_WATCHPOINT
    extern void iringbuf_memadd(const char *Prefix, vaddr_t addr, int len, word_t data);
    iringbuf_memadd("Rmem", addr, len, ret);
    #endif
    return ret;
  }
  // else if (likely(in_sram(addr)))
  // {
  //   return sram_read(addr, len);
  // }
  // else if (likely(in_psram(addr)))
  // {
  //   return psram_read(addr, len);
  // }
  // else if(likely(in_uart(addr)))
  // {
  //   return 0;
  // }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {

  if (likely(in_pmem(addr)))
  {
    #if CONFIG_WATCHPOINT
    extern void iringbuf_memadd(const char *Prefix, vaddr_t addr, int len, word_t data);
    iringbuf_memadd("Wmem", addr, len, data);
    #endif
    pmem_write(addr, len, data);
    return;
  }
  // else if (likely(in_sram(addr)))
  // {
  //   sram_write(addr, len, data);
  //   return;
  // }else if (likely(in_psram(addr)))
  // {
  //   psram_write(addr, len, data);
  //   return;
  // }
  // else if(likely(in_uart(addr)))
  // {
  //   return;
  // }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
