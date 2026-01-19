#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"timer.c"
	.option nopic
	.text
	.section	.rodata.rtc_io_handler.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/device/timer.c"
	.align	2
.LC1:
	.string	"Assertion fail at %s:%d\n"
	.section	.text.rtc_io_handler,"ax",@progbits
	.align	2
	.type	rtc_io_handler, @function
rtc_io_handler:
	addi	sp,sp,-16
	sw	ra,12(sp)
	andi	a0,a0,-5
	beq	a0,zero,.L2
	li	a2,23
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
.L2:
	beq	a2,zero,.L6
	lw	ra,12(sp)
	addi	sp,sp,16
	jr	ra
.L6:
	call	get_time
	lw	ra,12(sp)
	la a5, .LANCHOR0; lw a5, 0(a5);
	sw	a0,0(a5)
	sw	a1,4(a5)
	addi	sp,sp,16
	jr	ra
	.size	rtc_io_handler, .-rtc_io_handler
	.section	.rodata.init_timer.str1.4,"aMS",@progbits,1
	.align	2
.LC2:
	.string	"rtc"
	.section	.text.init_timer,"ax",@progbits
	.align	2
	.globl	init_timer
	.hidden	init_timer
	.type	init_timer, @function
init_timer:
	addi	sp,sp,-16
	li	a0,8
	sw	ra,12(sp)
	call	new_space
	lw	ra,12(sp)
	mv	a5,a0
	li	a1,-1610612736
	la a6, .LANCHOR0; sw a5, 0(a6);
	mv	a2,a0
	lla	a4,rtc_io_handler
	li	a3,8
	addi	a1,a1,72
	lla	a0,.LC2
	addi	sp,sp,16
	tail	add_mmio_map
	.size	init_timer, .-init_timer
	.section	.sbss.rtc_port_base,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	rtc_port_base, @object
	.size	rtc_port_base, 4
rtc_port_base:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
