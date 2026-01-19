#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"serial.c"
	.option nopic
	.text
	.section	.rodata.serial_io_handler.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/device/serial.c"
	.align	2
.LC1:
	.string	"Assertion fail at %s:%d\n"
	.align	2
.LC2:
	.string	"\033[1;31mdo not support read\033[0m\n"
	.align	2
.LC3:
	.string	"\033[1;31mdo not support offset = %d\033[0m\n"
	.section	.text.serial_io_handler,"ax",@progbits
	.align	2
	.type	serial_io_handler, @function
serial_io_handler:
	addi	sp,sp,-16
	sw	ra,12(sp)
	li	a5,1
	bne	a1,a5,.L8
	bne	a0,zero,.L3
	beq	a2,zero,.L4
	la a5, .LANCHOR0; lw a5, 0(a5);
	lw	ra,12(sp)
	lbu	a0,0(a5)
	addi	sp,sp,16
	tail	putch
.L8:
	li	a2,32
.L6:
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
.L4:
	lla	a0,.LC2
	call	printf
	call	assert_fail_msg
	li	a2,37
	j	.L6
.L3:
	mv	a1,a0
	lla	a0,.LC3
	call	printf
	call	assert_fail_msg
	li	a2,39
	j	.L6
	.size	serial_io_handler, .-serial_io_handler
	.section	.rodata.init_serial.str1.4,"aMS",@progbits,1
	.align	2
.LC4:
	.string	"serial"
	.section	.text.init_serial,"ax",@progbits
	.align	2
	.globl	init_serial
	.hidden	init_serial
	.type	init_serial, @function
init_serial:
	addi	sp,sp,-16
	li	a0,8
	sw	ra,12(sp)
	call	new_space
	lw	ra,12(sp)
	mv	a5,a0
	li	a1,-1610612736
	la a6, .LANCHOR0; sw a5, 0(a6);
	mv	a2,a0
	lla	a4,serial_io_handler
	li	a3,8
	addi	a1,a1,1016
	lla	a0,.LC4
	addi	sp,sp,16
	tail	add_mmio_map
	.size	init_serial, .-init_serial
	.section	.sbss.serial_base,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	serial_base, @object
	.size	serial_base, 4
serial_base:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
