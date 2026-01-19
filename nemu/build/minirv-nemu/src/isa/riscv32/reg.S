#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"reg.c"
	.option nopic
	.text
	.section	.rodata.isa_reg_display.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"Registers:\n"
	.align	2
.LC1:
	.string	"%s\t0x%08x\n"
	.section	.text.isa_reg_display,"ax",@progbits
	.align	2
	.globl	isa_reg_display
	.hidden	isa_reg_display
	.type	isa_reg_display, @function
isa_reg_display:
	addi	sp,sp,-32
	lla	a0,.LC0
	sw	s0,24(sp)
	sw	s1,20(sp)
	sw	s2,16(sp)
	sw	s3,12(sp)
	sw	ra,28(sp)
	lla	s0,.LANCHOR0
	call	printf
	lla	s1,cpu
	lla	s3,.LANCHOR0+128
	lla	s2,.LC1
.L2:
	lw	a2,0(s1)
	lw	a1,0(s0)
	mv	a0,s2
	addi	s0,s0,4
	call	printf
	addi	s1,s1,4
	bne	s0,s3,.L2
	lw	ra,28(sp)
	lw	s0,24(sp)
	lw	s1,20(sp)
	lw	s2,16(sp)
	lw	s3,12(sp)
	addi	sp,sp,32
	jr	ra
	.size	isa_reg_display, .-isa_reg_display
	.section	.text.isa_reg_str2val,"ax",@progbits
	.align	2
	.globl	isa_reg_str2val
	.hidden	isa_reg_str2val
	.type	isa_reg_str2val, @function
isa_reg_str2val:
	addi	sp,sp,-32
	sw	s0,24(sp)
	sw	s1,20(sp)
	sw	s2,16(sp)
	sw	s3,12(sp)
	sw	s4,8(sp)
	sw	ra,28(sp)
	mv	s2,a0
	mv	s4,a1
	lla	s1,.LANCHOR0
	li	s0,0
	li	s3,32
	j	.L9
.L7:
	addi	s0,s0,1
	beq	s0,s3,.L12
.L9:
	lw	a0,0(s1)
	mv	a1,s2
	addi	s1,s1,4
	call	strcmp
	bne	a0,zero,.L7
	slli	s0,s0,2
	lla	a5,cpu
	add	a5,a5,s0
	lw	ra,28(sp)
	lw	s0,24(sp)
	lw	a0,0(a5)
	li	a5,1
	sb	a5,0(s4)
	lw	s1,20(sp)
	lw	s2,16(sp)
	lw	s3,12(sp)
	lw	s4,8(sp)
	addi	sp,sp,32
	jr	ra
.L12:
	lw	ra,28(sp)
	lw	s0,24(sp)
	sb	zero,0(s4)
	lw	s1,20(sp)
	lw	s2,16(sp)
	lw	s3,12(sp)
	lw	s4,8(sp)
	li	a0,0
	addi	sp,sp,32
	jr	ra
	.size	isa_reg_str2val, .-isa_reg_str2val
	.hidden	regs
	.globl	regs
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align	2
.LC2:
	.string	"$0"
	.align	2
.LC3:
	.string	"ra"
	.align	2
.LC4:
	.string	"sp"
	.align	2
.LC5:
	.string	"gp"
	.align	2
.LC6:
	.string	"tp"
	.align	2
.LC7:
	.string	"t0"
	.align	2
.LC8:
	.string	"t1"
	.align	2
.LC9:
	.string	"t2"
	.align	2
.LC10:
	.string	"s0"
	.align	2
.LC11:
	.string	"s1"
	.align	2
.LC12:
	.string	"a0"
	.align	2
.LC13:
	.string	"a1"
	.align	2
.LC14:
	.string	"a2"
	.align	2
.LC15:
	.string	"a3"
	.align	2
.LC16:
	.string	"a4"
	.align	2
.LC17:
	.string	"a5"
	.align	2
.LC18:
	.string	"a6"
	.align	2
.LC19:
	.string	"a7"
	.align	2
.LC20:
	.string	"s2"
	.align	2
.LC21:
	.string	"s3"
	.align	2
.LC22:
	.string	"s4"
	.align	2
.LC23:
	.string	"s5"
	.align	2
.LC24:
	.string	"s6"
	.align	2
.LC25:
	.string	"s7"
	.align	2
.LC26:
	.string	"s8"
	.align	2
.LC27:
	.string	"s9"
	.align	2
.LC28:
	.string	"s10"
	.align	2
.LC29:
	.string	"s11"
	.align	2
.LC30:
	.string	"t3"
	.align	2
.LC31:
	.string	"t4"
	.align	2
.LC32:
	.string	"t5"
	.align	2
.LC33:
	.string	"t6"
	.section	.data.regs,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	regs, @object
	.size	regs, 128
regs:
	.word	.LC2
	.word	.LC3
	.word	.LC4
	.word	.LC5
	.word	.LC6
	.word	.LC7
	.word	.LC8
	.word	.LC9
	.word	.LC10
	.word	.LC11
	.word	.LC12
	.word	.LC13
	.word	.LC14
	.word	.LC15
	.word	.LC16
	.word	.LC17
	.word	.LC18
	.word	.LC19
	.word	.LC20
	.word	.LC21
	.word	.LC22
	.word	.LC23
	.word	.LC24
	.word	.LC25
	.word	.LC26
	.word	.LC27
	.word	.LC28
	.word	.LC29
	.word	.LC30
	.word	.LC31
	.word	.LC32
	.word	.LC33
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
