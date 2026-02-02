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
word_t isa_raise_intr(word_t NO, vaddr_t epc)
{
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   待办事项：使用“NO”（终端编号）触发中断/异常。然后返回中断/异常向量的地址。
    将当前PC值保存到mepc寄存器
    在mcause寄存器中设置异常号
    从mtvec寄存器中取出异常入口地址
    跳转到异常入口地址
   */
  cpu.mcause = NO;
  cpu.mepc = epc;
  #ifdef CONFIG_ETRACE
  extern void etrace_add_intr(word_t intr_no, vaddr_t epc, vaddr_t mtvec);
  etrace_add_intr(NO, epc, cpu.mtvec);
  #endif

  return cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
