#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"keyboard.c"
	.option nopic
	.text
	.section	.rodata.i8042_data_io_handler.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/device/keyboard.c"
	.align	2
.LC1:
	.string	"Assertion fail at %s:%d\n"
	.section	.text.i8042_data_io_handler,"ax",@progbits
	.align	2
	.type	i8042_data_io_handler, @function
i8042_data_io_handler:
	addi	sp,sp,-32
	sw	ra,28(sp)
	sw	s0,24(sp)
	bne	a2,zero,.L7
	bne	a0,zero,.L8
	addi	a1,sp,8
	li	a0,8
	la s0, .LANCHOR0; lw s0, 0(s0);
	call	ioe_read
	lbu	a5,8(sp)
	lw	a4,12(sp)
	lw	ra,28(sp)
	slli	a5,a5,15
	or	a5,a5,a4
	sw	a5,0(s0)
	lw	s0,24(sp)
	addi	sp,sp,32
	jr	ra
.L7:
	li	a2,86
.L5:
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
.L8:
	li	a2,87
	j	.L5
	.size	i8042_data_io_handler, .-i8042_data_io_handler
	.section	.rodata.init_i8042.str1.4,"aMS",@progbits,1
	.align	2
.LC2:
	.string	"keyboard"
	.section	.text.init_i8042,"ax",@progbits
	.align	2
	.globl	init_i8042
	.hidden	init_i8042
	.type	init_i8042, @function
init_i8042:
	addi	sp,sp,-16
	li	a0,4
	sw	ra,12(sp)
	call	new_space
	lw	ra,12(sp)
	mv	a5,a0
	sw	zero,0(a0)
	li	a1,-1610612736
	la a6, .LANCHOR0; sw a5, 0(a6);
	mv	a2,a0
	lla	a4,i8042_data_io_handler
	li	a3,4
	addi	a1,a1,96
	lla	a0,.LC2
	addi	sp,sp,16
	tail	add_mmio_map
	.size	init_i8042, .-init_i8042
	.section	.sbss.i8042_data_port_base,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	i8042_data_port_base, @object
	.size	i8042_data_port_base, 4
i8042_data_port_base:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
