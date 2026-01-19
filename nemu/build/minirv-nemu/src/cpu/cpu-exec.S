#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"cpu-exec.c"
	.option nopic
	.text
	.section	.rodata.statistic.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/cpu/cpu-exec.c"
	.align	2
.LC1:
	.string	"\033[1;34m[%s:%d %s] host time spent = %llu us\033[0m\n"
	.align	2
.LC2:
	.string	"\033[1;34m[%s:%d %s] total guest instructions = %llu\033[0m\n"
	.globl	__udivdi3
	.align	2
.LC3:
	.string	"\033[1;34m[%s:%d %s] simulation frequency = %llu inst/s\033[0m\n"
	.align	2
.LC4:
	.string	"\033[1;34m[%s:%d %s] Finish running in less than 1 us and can not calculate the simulation frequency\033[0m\n"
	.section	.text.statistic,"ax",@progbits
	.align	2
	.type	statistic, @function
statistic:
	addi	sp,sp,-16
	sw	s0,8(sp)
	lla	s0,.LANCHOR0
	lw	a4,0(s0)
	lw	a5,4(s0)
	lla	a3,.LANCHOR1
	li	a2,101
	lla	a1,.LC0
	lla	a0,.LC1
	sw	ra,12(sp)
	sw	s1,4(sp)
	call	printf
	lla	s1,.LANCHOR2
	lw	a5,4(s1)
	lw	a4,0(s1)
	lla	a3,.LANCHOR1
	li	a2,102
	lla	a1,.LC0
	lla	a0,.LC2
	call	printf
	lw	a2,0(s0)
	lw	a3,4(s0)
	or	a5,a2,a3
	beq	a5,zero,.L2
	lw	a0,0(s1)
	lw	a7,4(s1)
	slli	a1,a0,5
	srli	a6,a0,27
	slli	a5,a7,5
	sub	a4,a1,a0
	or	a5,a6,a5
	sub	a5,a5,a7
	sgtu	a1,a4,a1
	sub	a1,a5,a1
	srli	t1,a4,26
	slli	a6,a4,6
	slli	a5,a1,6
	sub	a4,a6,a4
	or	a5,t1,a5
	sgtu	a6,a4,a6
	sub	a5,a5,a1
	sub	a5,a5,a6
	slli	a1,a4,3
	slli	a5,a5,3
	srli	a4,a4,29
	add	a0,a1,a0
	or	a5,a4,a5
	add	a5,a5,a7
	sltu	a1,a0,a1
	add	a1,a1,a5
	slli	a1,a1,6
	srli	a5,a0,26
	or	a1,a5,a1
	slli	a0,a0,6
	call	__udivdi3
	lw	s0,8(sp)
	lw	ra,12(sp)
	lw	s1,4(sp)
	mv	a4,a0
	mv	a5,a1
	lla	a3,.LANCHOR1
	li	a2,103
	lla	a1,.LC0
	lla	a0,.LC3
	addi	sp,sp,16
	tail	printf
.L2:
	lw	s0,8(sp)
	lw	ra,12(sp)
	lw	s1,4(sp)
	lla	a3,.LANCHOR1
	li	a2,104
	lla	a1,.LC0
	lla	a0,.LC4
	addi	sp,sp,16
	tail	printf
	.size	statistic, .-statistic
	.section	.text.assert_fail_msg,"ax",@progbits
	.align	2
	.globl	assert_fail_msg
	.hidden	assert_fail_msg
	.type	assert_fail_msg, @function
assert_fail_msg:
	addi	sp,sp,-16
	sw	ra,12(sp)
	call	isa_reg_display
	lw	ra,12(sp)
	addi	sp,sp,16
	tail	statistic
	.size	assert_fail_msg, .-assert_fail_msg
	.section	.rodata.cpu_exec.str1.4,"aMS",@progbits,1
	.align	2
.LC5:
	.string	"\033[1;31mHIT BAD TRAP\033[0m"
	.align	2
.LC6:
	.string	"\033[1;31mABORT\033[0m"
	.align	2
.LC7:
	.string	"\033[1;32mHIT GOOD TRAP\033[0m"
	.align	2
.LC8:
	.string	"Program execution has ended. To restart the program, exit NEMU and run again.\n"
	.align	2
.LC9:
	.string	"\033[1;34m[%s:%d %s] nemu: %s at pc = 0x%08x\033[0m\n"
	.section	.text.cpu_exec,"ax",@progbits
	.align	2
	.globl	cpu_exec
	.hidden	cpu_exec
	.type	cpu_exec, @function
cpu_exec:
	addi	sp,sp,-48
	sw	s4,24(sp)
	lla	s4,nemu_state
	lw	a5,0(s4)
	sw	ra,44(sp)
	sw	s0,40(sp)
	sw	s1,36(sp)
	sw	s2,32(sp)
	sw	s3,28(sp)
	sw	s5,20(sp)
	sw	s6,16(sp)
	addi	a5,a5,-2
	li	a4,2
	bgtu	a5,a4,.L9
	lw	s0,40(sp)
	lw	ra,44(sp)
	lw	s1,36(sp)
	lw	s2,32(sp)
	lw	s3,28(sp)
	lw	s4,24(sp)
	lw	s5,20(sp)
	lw	s6,16(sp)
	lla	a0,.LC8
	addi	sp,sp,48
	tail	printf
.L9:
	mv	s0,a0
	mv	s2,a1
	la a5, nemu_state; sw zero, 0(a5);
	call	get_time
	or	a5,s0,s2
	mv	s5,a0
	mv	s6,a1
	beq	a5,zero,.L10
	lla	s3,.LANCHOR3
	lla	s1,.LANCHOR2
	j	.L12
.L27:
	call	device_update
	seqz	a5,s0
	sub	s2,s2,a5
	addi	s0,s0,-1
	or	a5,s0,s2
	beq	a5,zero,.L10
.L12:
	lw	a5,128(s3)
	mv	a0,sp
	sw	a5,0(sp)
	sw	a5,4(sp)
	call	isa_exec_once
	lw	a5,0(s1)
	lw	a2,4(s1)
	lw	a3,0(s4)
	addi	a4,a5,1
	sltu	a5,a4,a5
	add	a5,a5,a2
	lw	a2,8(sp)
	sw	a4,0(s1)
	sw	a5,4(s1)
	sw	a2,128(s3)
	beq	a3,zero,.L27
.L10:
	call	get_time
	lla	a4,.LANCHOR0
	lw	a2,0(a4)
	lw	a5,4(a4)
	lw	a3,0(s4)
	sub	s5,a2,s5
	sgtu	a2,s5,a2
	sub	a5,a5,s6
	add	a0,s5,a0
	sub	a5,a5,a2
	add	a5,a5,a1
	sltu	s5,a0,s5
	add	s5,s5,a5
	sw	a0,0(a4)
	sw	s5,4(a4)
	li	a5,3
	bgt	a3,a5,.L13
	li	a4,1
	bgt	a3,a4,.L14
	bne	a3,zero,.L8
	sw	a4,0(s4)
.L8:
	lw	ra,44(sp)
	lw	s0,40(sp)
	lw	s1,36(sp)
	lw	s2,32(sp)
	lw	s3,28(sp)
	lw	s4,24(sp)
	lw	s5,20(sp)
	lw	s6,16(sp)
	addi	sp,sp,48
	jr	ra
.L13:
	li	a5,4
	bne	a3,a5,.L8
.L17:
	lw	s0,40(sp)
	lw	ra,44(sp)
	lw	s1,36(sp)
	lw	s2,32(sp)
	lw	s3,28(sp)
	lw	s4,24(sp)
	lw	s5,20(sp)
	lw	s6,16(sp)
	addi	sp,sp,48
	tail	statistic
.L14:
	lla	a4,.LC6
	beq	a3,a5,.L18
	lw	a5,8(s4)
	lla	a4,.LC7
	bne	a5,zero,.L28
.L18:
	lw	a5,4(s4)
	lla	a3,.LANCHOR4
	li	a2,134
	lla	a1,.LC0
	lla	a0,.LC9
	call	printf
	j	.L17
.L28:
	lla	a4,.LC5
	j	.L18
	.size	cpu_exec, .-cpu_exec
	.hidden	g_nr_guest_inst
	.globl	g_nr_guest_inst
	.hidden	cpu
	.globl	cpu
	.section	.bss.cpu,"aw",@nobits
	.align	2
	.set	.LANCHOR3,. + 0
	.type	cpu, @object
	.size	cpu, 132
cpu:
	.zero	132
	.section	.rodata.__func__.0,"a"
	.align	2
	.set	.LANCHOR4,. + 0
	.type	__func__.0, @object
	.size	__func__.0, 9
__func__.0:
	.string	"cpu_exec"
	.section	.rodata.__func__.1,"a"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	__func__.1, @object
	.size	__func__.1, 10
__func__.1:
	.string	"statistic"
	.section	.sbss.g_nr_guest_inst,"aw",@nobits
	.align	3
	.set	.LANCHOR2,. + 0
	.type	g_nr_guest_inst, @object
	.size	g_nr_guest_inst, 8
g_nr_guest_inst:
	.zero	8
	.section	.sbss.g_timer,"aw",@nobits
	.align	3
	.set	.LANCHOR0,. + 0
	.type	g_timer, @object
	.size	g_timer, 8
g_timer:
	.zero	8
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
