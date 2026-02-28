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

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

// CSR 寄存器地址
#define CSR_CYCLE 0x0
#define CSR_MTVEC 0x305
#define CSR_MCAUSE 0x342
#define CSR_MSTATUS 0x300
#define CSR_MEPC 0x341
// 实现__lshrdi3函数用于对接nemu运行nemu
long long __lshrdi3(long long a, int b) {
  if (b >= 64) return 0;
  if (b == 0) return a;
  return (unsigned long long)a >> b;
}

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J,TYPE_R,TYPE_B, TYPE_CSR,
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | \
                           (BITS(i, 19, 12) << 12) | \
                           (BITS(i, 20, 20) << 11) | \
                           (BITS(i, 30, 21) << 1); } while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | \
                           (BITS(i, 7, 7) << 11) | \
                           (BITS(i, 30, 25) << 5) | \
                           (BITS(i, 11, 8) << 1); } while(0)
// #define immCSR() do { *imm = (BITS(i, 19, 15)); } while(0)
#define immCSR() do { *imm = (BITS(i, 31, 20)); } while(0)

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:                   immJ(); break; 
    case TYPE_R: src1R(); src2R();         break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_CSR: src1R();*src2 = (uint32_t)rs1;immCSR();break; // src2是imm[4:0] src1是rs1  imm是csrp[11:0]
    case TYPE_N: break;
    default: panic("unsupported type = %d", type);
  }
}
//__VA_ARGS__ 为传入的可变参数 这里是自定义函数
static int decode_exec(Decode *s) {
  s->dnpc = s->snpc;//设置动态PC地址

#define INSTPAT_INST(s) ((s)->isa.inst)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  int rd = 0; \
  word_t src1 = 0, src2 = 0, imm = 0; \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1 - src2);
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1 & src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(rd) = src1 << (src2&0x1F));
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(rd) = src1 >> (src2&0x1F));
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(rd) = SEXT(src1,32) >> (src2&0x1F));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = (int32_t)src1 < (int32_t)src2);
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) =((uint32_t)src1) < ((uint32_t)src2));

  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul   , R, R(rd) =src1*src2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh  , R, R(rd) =(SEXT(src1,32)*SEXT(src2,32))>>32);
  INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu, R, R(rd) =(SEXT(src1,32)*src2)>>32);
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu , R, R(rd) =(((uint64_t)src1)*(uint64_t)src2)>>32);

  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div   , R, R(rd) = (src2 == 0 ? -1 : 
  ((int32_t)src1 == 0x80000000 && (int32_t)src2 == -1 ? 0x80000000 : 
  (int32_t)src1 / (int32_t)src2)));
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu  , R, R(rd) =(src2==0?UINT32_MAX:(uint32_t)src1/(uint32_t)src2));
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem   , R, R(rd) = (src2 == 0 ? src1 : 
  ((int32_t)src1 == 0x80000000 && (int32_t)src2 == -1 ? 0 : 
  (int32_t)src1 % (int32_t)src2)));
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu  , R, R(rd) =(src2==0?src1:(uint32_t)src1%(uint32_t)src2));



  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + imm);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1 ^ imm);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(rd) = src1 | imm);
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1 & imm);
  INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = src1 << imm);
  INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli   , I, R(rd) = src1 >> imm);
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I, R(rd) = SEXT(src1,32) >> imm);
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(rd) = ((int32_t)src1) < ((int32_t)imm));
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = ((uint32_t)src1) < ((uint32_t)imm));

  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1), 8));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2), 16));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm, 4));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1)&0xFF);
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2)&0xFFFF);
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(rd) = s->pc + 4; s->dnpc = (src1 + imm)&~3);
  //ECALL指令

  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));

  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq, B, if((int32_t)src1 == (int32_t)src2) s->dnpc = s->pc + imm;);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne, B, if((int32_t)src1 != (int32_t)src2) s->dnpc = s->pc + imm;);
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt, B, if((int32_t)src1 < (int32_t)src2) s->dnpc = s->pc + imm;);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge, B, if((int32_t)src1 >= (int32_t)src2) s->dnpc = s->pc + imm;);
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu, B, if(((uint32_t)src1) < (uint32_t)src2) s->dnpc = s->pc + imm;);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu, B, if(((uint32_t)src1) >= (uint32_t)src2) s->dnpc = s->pc + imm;);

  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui  , U, R(rd) =imm);




  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(rd) = s->pc + 4; s->dnpc = s->pc + imm);

  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall, CSR, {
    s->dnpc = isa_raise_intr(cpu.mcause, s->pc);

    }); // 进入中断地址
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , CSR, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  //同步异常+4 异步异常（外部中断不+4）
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret , CSR, s->dnpc = (cpu.mepc));//返回被打断处的程序继续运行
  
  // CSRRW CSR读写指令
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , CSR, { 
    word_t *csr = NULL;
    switch(imm) {
      case CSR_CYCLE: csr = &cpu.cycle; break;
      case CSR_MTVEC: csr = &cpu.mtvec; break;
      case CSR_MCAUSE: csr = &cpu.mcause; break;
      case CSR_MSTATUS: csr = &cpu.mstatus; break;
      case CSR_MEPC: csr = &cpu.mepc; break;
      default: panic("Unsupported CSR register: 0x%x", imm);
    }
    word_t tmp = *csr;
    // cycle寄存器是只读的，忽略写入操作
    if (imm != CSR_CYCLE) {
      *csr = src1;
    }
    if (rd != 0) R(rd) = tmp; 
  });
  
  // CSRRS 读取并设置位操作
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , CSR, { 
    word_t *csr = NULL;
    switch(imm) {
      case CSR_CYCLE: csr = &cpu.cycle; break;
      case CSR_MTVEC: csr = &cpu.mtvec; break;
      case CSR_MCAUSE: csr = &cpu.mcause; break;
      case CSR_MSTATUS: csr = &cpu.mstatus; break;
      case CSR_MEPC: csr = &cpu.mepc; break;
      default: panic("Unsupported CSR register: 0x%x", imm);
    }
    word_t tmp = *csr;
    // cycle寄存器是只读的，忽略位设置操作
    if (imm != CSR_CYCLE ) {
      *csr |= src1;
    }
    if (rd != 0) R(rd) = tmp;
  });
  // CSRRC 读并清除位指令
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , CSR, { 
    word_t *csr = NULL;
    switch(imm) {
      case CSR_CYCLE: csr = &cpu.cycle; break;
      case CSR_MTVEC: csr = &cpu.mtvec; break;
      case CSR_MCAUSE: csr = &cpu.mcause; break;
      case CSR_MSTATUS: csr = &cpu.mstatus; break;
      case CSR_MEPC: csr = &cpu.mepc; break;
      default: panic("Unsupported CSR register: 0x%x", imm);
    }
    word_t tmp = *csr;
    // cycle寄存器是只读的，忽略位清除操作
    if (imm != CSR_CYCLE) {
      *csr &= ~src1;
    }
    if (rd != 0) R(rd) = tmp;
  });  
    // CSRRWI 立即数读写指令
  INSTPAT("??????? ????? ????? 101 ????? 11100 11", csrrwi , CSR, { 
    word_t *csr = NULL;
    switch(imm) {
      case CSR_CYCLE: csr = &cpu.cycle; break;
      case CSR_MTVEC: csr = &cpu.mtvec; break;
      case CSR_MCAUSE: csr = &cpu.mcause; break;
      case CSR_MSTATUS: csr = &cpu.mstatus; break;
      case CSR_MEPC: csr = &cpu.mepc; break;
      default: panic("Unsupported CSR register: 0x%x", imm);
    }
    word_t tmp = *csr;
    // cycle寄存器是只读的，忽略位清除操作
    if (imm != CSR_CYCLE) {
      *csr = src2;
    }
    if (rd != 0) R(rd) = tmp;
  });  

    // CSRRSI 立即数并设置位命令
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrsi , CSR, { 
    word_t *csr = NULL;
    switch(imm) {
      case CSR_CYCLE: csr = &cpu.cycle; break;
      case CSR_MTVEC: csr = &cpu.mtvec; break;
      case CSR_MCAUSE: csr = &cpu.mcause; break;
      case CSR_MSTATUS: csr = &cpu.mstatus; break;
      case CSR_MEPC: csr = &cpu.mepc; break;
      default: panic("Unsupported CSR register: 0x%x", imm);
    }
    word_t tmp = *csr;
    // cycle寄存器是只读的，忽略位清除操作
    if (imm != CSR_CYCLE) {
      *csr = tmp|src2;
    }
    if (rd != 0) R(rd) = tmp;
  });  
    // CSRRCI 立即数读并清除位命令
  INSTPAT("??????? ????? ????? 111 ????? 11100 11", csrrci , CSR, { 
    word_t *csr = NULL;
    switch(imm) {
      case CSR_CYCLE: csr = &cpu.cycle; break;
      case CSR_MTVEC: csr = &cpu.mtvec; break;
      case CSR_MCAUSE: csr = &cpu.mcause; break;
      case CSR_MSTATUS: csr = &cpu.mstatus; break;
      case CSR_MEPC: csr = &cpu.mepc; break;
      default: panic("Unsupported CSR register: 0x%x", imm);
    }
    word_t tmp = *csr;
    // cycle寄存器是只读的，忽略位清除操作
    if (imm != CSR_CYCLE) {
      *csr = tmp&(~src2);
    }
    if (rd != 0) R(rd) = tmp;
  });  

  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst = inst_fetch(&s->snpc, 4);//取指令和PC+4
  return decode_exec(s);
}
