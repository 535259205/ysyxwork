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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  // 检查通用寄存器
  for(int i=0; i<MUXDEF(CONFIG_RVE,16,32); i++) {
    if(ref_r->gpr[i] != cpu.gpr[i]) {
      printf("reg %s diff: ref 0x%08x, dut 0x%08x\n", reg_name(i), ref_r->gpr[i], cpu.gpr[i]);
      return false;
    }
  }
  
  // 检查程序计数器
  if(ref_r->pc != pc) {
    printf("pc diff: ref 0x%08x, dut 0x%08x\n", ref_r->pc, pc);
    return false;
  }
  
  // 检查CSR寄存器
  if(ref_r->mtvec != cpu.mtvec) {
    printf("mtvec diff: ref 0x%08x, dut 0x%08x\n", ref_r->mtvec, cpu.mtvec);
    return false;
  }
  
  if(ref_r->mcause != cpu.mcause) {
    printf("mcause diff: ref 0x%08x, dut 0x%08x\n", ref_r->mcause, cpu.mcause);
    return false;
  }
  
  if(ref_r->mstatus != cpu.mstatus) {
    printf("mstatus diff: ref 0x%08x, dut 0x%08x\n", ref_r->mstatus, cpu.mstatus);
    return false;
  }
  
  if(ref_r->mepc != cpu.mepc) {
    printf("mepc diff: ref 0x%08x, dut 0x%08x\n", ref_r->mepc, cpu.mepc);
    return false;
  }
  
  if(ref_r->cycle != cpu.cycle) {
    printf("cycle diff: ref 0x%08x, dut 0x%08x\n", ref_r->cycle, cpu.cycle);
    return false;
  }
  
  return true;
}

void isa_difftest_attach() {
}