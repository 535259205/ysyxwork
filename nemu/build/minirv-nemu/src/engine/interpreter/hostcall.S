#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"hostcall.c"
	.option nopic
	.text
	.section	.text.set_nemu_state,"ax",@progbits
	.align	2
	.globl	set_nemu_state
	.hidden	set_nemu_state
	.type	set_nemu_state, @function
set_nemu_state:
	lla	a5,nemu_state
	sw	a0,0(a5)
	sw	a1,4(a5)
	sw	a2,8(a5)
	ret
	.size	set_nemu_state, .-set_nemu_state
	.section	.rodata.invalid_inst.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"invalid opcode(PC = 0x%08x):\n\t%02x %02x %02x %02x %02x %02x %02x %02x ...\n\t%08x %08x...\n"
	.align	2
.LC1:
	.string	"There are two cases which will trigger this unexpected exception:\n1. The instruction at PC = 0x%08x is not implemented.\n2. Something is implemented incorrectly.\n"
	.align	2
.LC2:
	.string	"Find this PC(0x%08x) in the disassembling result to distinguish which case it is.\n\n"
	.align	2
.LC3:
	.string	"\033[1;31mIf it is the first case, see\n%s\nfor more details.\n\nIf it is the second case, remember:\n* The machine is always right!\n* Every line of untested code is always wrong!\n\n\033[0m"
	.section	.text.invalid_inst,"ax",@progbits
	.align	2
	.globl	invalid_inst
	.hidden	invalid_inst
	.type	invalid_inst, @function
invalid_inst:
	addi	sp,sp,-32
	li	a1,4
	sw	ra,28(sp)
	sw	s0,24(sp)
	sw	s1,20(sp)
	mv	s0,a0
	call	vaddr_ifetch
	mv	s1,a0
	li	a1,4
	addi	a0,s0,4
	call	vaddr_ifetch
	srli	a1,a0,16
	srli	t1,a0,24
	srli	a7,a0,8
	andi	a1,a1,0xff
	srli	a4,s1,16
	srli	a3,s1,8
	srli	a5,s1,24
	andi	a6,a0,0xff
	andi	a4,a4,0xff
	andi	a2,s1,0xff
	sw	t1,4(sp)
	andi	a7,a7,0xff
	andi	a3,a3,0xff
	sw	a0,12(sp)
	sw	s1,8(sp)
	sw	a1,0(sp)
	lla	a0,.LC0
	mv	a1,s0
	call	printf
	mv	a1,s0
	lla	a0,.LC1
	call	printf
	mv	a1,s0
	lla	a0,.LC2
	call	printf
	lla	a1,isa_logo
	lla	a0,.LC3
	call	printf
	lla	a5,nemu_state
	lw	ra,28(sp)
	li	a4,3
	sw	s0,4(a5)
	lw	s0,24(sp)
	sw	a4,0(a5)
	li	a4,-1
	sw	a4,8(a5)
	lw	s1,20(sp)
	addi	sp,sp,32
	jr	ra
	.size	invalid_inst, .-invalid_inst
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
