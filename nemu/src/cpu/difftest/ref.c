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

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>


//1. 内存拷贝
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  // 检查输入参数有效性
  if (buf == NULL) {
    printf("Error: difftest_memcpy: buf is NULL\n");
    return;
  }
  
  if(direction == DIFFTEST_TO_REF) { //npc->nemu
    uint8_t *src = (uint8_t *)buf;
    size_t copy_len = n;
    
    // 确保起始地址在物理内存范围内
    if (addr < CONFIG_MBASE) {
      printf("Error: difftest_memcpy: starting address 0x%08x is below CONFIG_MBASE 0x%08x\n", 
             (uint32_t)addr, (uint32_t)CONFIG_MBASE);
      return;
    }
    
    // 确保不超出 NEMU 的物理内存范围
    if (addr + copy_len > CONFIG_MBASE + CONFIG_MSIZE) {
      copy_len = CONFIG_MBASE + CONFIG_MSIZE - addr;
      printf("Warning: difftest_memcpy truncated to %zu bytes due to memory limit\n", copy_len);
    }
    
    for(size_t i = 0; i < copy_len; i++) {
      paddr_write(addr + i, 1, src[i]);
    }
  } else { //nemu->npc
    size_t copy_len = n;
    
    // 确保起始地址在物理内存范围内
    if (addr < CONFIG_MBASE) {
      printf("Error: difftest_memcpy: starting address 0x%08x is below CONFIG_MBASE 0x%08x\n", 
             (uint32_t)addr, (uint32_t)CONFIG_MBASE);
      return;
    }
    
    // 确保不超出 NEMU 的物理内存范围
    if (addr + copy_len > CONFIG_MBASE + CONFIG_MSIZE) {
      copy_len = CONFIG_MBASE + CONFIG_MSIZE - addr;
      printf("Warning: difftest_memcpy truncated to %zu bytes due to memory limit\n", copy_len);
    }
    
    memcpy(buf, guest_to_host(addr), copy_len);
  }
}

//2. 寄存器拷贝
//cpu 组成 uint32_t的32位宽 32个寄存器 然后是一个32位宽的PC寄存器
__EXPORT void difftest_regcpy(void *dut, bool direction) {
  if(direction == DIFFTEST_TO_REF)//npc->nemu
  {
    memcpy(&cpu, dut, sizeof(cpu));
  }
  else
  {
    memcpy(dut, &cpu, sizeof(cpu));
  }
  // assert(0);
}

//3. 执行n条指令
__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n);
  // assert(0);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}