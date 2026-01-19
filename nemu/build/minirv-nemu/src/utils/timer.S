#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"timer.c"
	.option nopic
	.text
	.section	.text.get_time,"ax",@progbits
	.align	2
	.globl	get_time
	.hidden	get_time
	.type	get_time, @function
get_time:
	addi	sp,sp,-32
	sw	s0,24(sp)
	lla	s0,.LANCHOR0
	lw	a5,0(s0)
	lw	a4,4(s0)
	sw	ra,28(sp)
	or	a5,a5,a4
	beq	a5,zero,.L6
.L2:
	addi	a1,sp,8
	li	a0,6
	call	ioe_read
	lw	a1,8(sp)
	lw	a0,0(s0)
	lw	a4,4(s0)
	lw	a5,12(sp)
	lw	ra,28(sp)
	lw	s0,24(sp)
	sub	a0,a1,a0
	sgtu	a1,a0,a1
	sub	a5,a5,a4
	sub	a1,a5,a1
	addi	sp,sp,32
	jr	ra
.L6:
	addi	a1,sp,8
	li	a0,6
	call	ioe_read
	lw	a4,8(sp)
	lw	a5,12(sp)
	sw	a4,0(s0)
	sw	a5,4(s0)
	j	.L2
	.size	get_time, .-get_time
	.section	.text.init_rand,"ax",@progbits
	.align	2
	.globl	init_rand
	.hidden	init_rand
	.type	init_rand, @function
init_rand:
	addi	sp,sp,-32
	li	a0,6
	addi	a1,sp,8
	sw	ra,28(sp)
	call	ioe_read
	lw	a0,8(sp)
	lw	ra,28(sp)
	addi	sp,sp,32
	tail	srand
	.size	init_rand, .-init_rand
	.section	.sbss.boot_time,"aw",@nobits
	.align	3
	.set	.LANCHOR0,. + 0
	.type	boot_time, @object
	.size	boot_time, 8
boot_time:
	.zero	8
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
