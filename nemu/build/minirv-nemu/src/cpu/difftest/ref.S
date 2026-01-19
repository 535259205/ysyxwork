#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"ref.c"
	.option nopic
	.text
	.section	.rodata.difftest_memcpy.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/cpu/difftest/ref.c"
	.align	2
.LC1:
	.string	"Assertion fail at %s:%d\n"
	.section	.text.difftest_memcpy,"ax",@progbits
	.align	2
	.globl	difftest_memcpy
	.type	difftest_memcpy, @function
difftest_memcpy:
	addi	sp,sp,-16
	li	a2,22
	lla	a1,.LC0
	lla	a0,.LC1
	sw	ra,12(sp)
	call	printf
	li	a0,1
	call	halt
	.size	difftest_memcpy, .-difftest_memcpy
	.section	.text.difftest_regcpy,"ax",@progbits
	.align	2
	.globl	difftest_regcpy
	.type	difftest_regcpy, @function
difftest_regcpy:
	addi	sp,sp,-16
	li	a2,26
	lla	a1,.LC0
	lla	a0,.LC1
	sw	ra,12(sp)
	call	printf
	li	a0,1
	call	halt
	.size	difftest_regcpy, .-difftest_regcpy
	.section	.text.difftest_exec,"ax",@progbits
	.align	2
	.globl	difftest_exec
	.type	difftest_exec, @function
difftest_exec:
	addi	sp,sp,-16
	li	a2,30
	lla	a1,.LC0
	lla	a0,.LC1
	sw	ra,12(sp)
	call	printf
	li	a0,1
	call	halt
	.size	difftest_exec, .-difftest_exec
	.section	.text.difftest_raise_intr,"ax",@progbits
	.align	2
	.globl	difftest_raise_intr
	.type	difftest_raise_intr, @function
difftest_raise_intr:
	addi	sp,sp,-16
	li	a2,34
	lla	a1,.LC0
	lla	a0,.LC1
	sw	ra,12(sp)
	call	printf
	li	a0,1
	call	halt
	.size	difftest_raise_intr, .-difftest_raise_intr
	.section	.text.difftest_init,"ax",@progbits
	.align	2
	.globl	difftest_init
	.type	difftest_init, @function
difftest_init:
	addi	sp,sp,-16
	sw	ra,12(sp)
	call	init_mem
	lw	ra,12(sp)
	addi	sp,sp,16
	tail	init_isa
	.size	difftest_init, .-difftest_init
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
