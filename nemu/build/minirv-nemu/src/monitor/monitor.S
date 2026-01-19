#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"monitor.c"
	.option nopic
	.text
	.section	.rodata.am_init_monitor.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/monitor/monitor.c"
	.align	2
.LC1:
	.string	"\033[1;34m[%s:%d %s] img size = %ld\033[0m\n"
	.align	2
.LC2:
	.string	"\033[1;32mON\033[0m"
	.align	2
.LC3:
	.string	"\033[1;34m[%s:%d %s] Trace: %s\033[0m\n"
	.align	2
.LC4:
	.string	"\033[1;34m[%s:%d %s] If trace is enabled, a log file will be generated to record the trace. This may lead to a large log file. If it is not necessary, you can disable it in menuconfig\033[0m\n"
	.align	2
.LC5:
	.string	"Jan 19 2026"
	.align	2
.LC6:
	.string	"15:24:31"
	.align	2
.LC7:
	.string	"\033[1;34m[%s:%d %s] Build time: %s, %s\033[0m\n"
	.align	2
.LC8:
	.string	"\033[1;33m\033[1;41mriscv32\033[0m"
	.align	2
.LC9:
	.string	"Welcome to %s-NEMU!\n"
	.align	2
.LC10:
	.string	"For help, type \"help\"\n"
	.align	2
.LC11:
	.string	"\033[1;34m[%s:%d %s] Exercise: Please remove me in the source code and compile NEMU again.\033[0m\n"
	.section	.text.am_init_monitor,"ax",@progbits
	.align	2
	.globl	am_init_monitor
	.hidden	am_init_monitor
	.type	am_init_monitor, @function
am_init_monitor:
	addi	sp,sp,-16
	sw	s0,8(sp)
	sw	s1,4(sp)
	lla	s0,bin_end
	lla	s1,bin_start
	sw	ra,12(sp)
	sub	s0,s0,s1
	call	init_rand
	call	init_mem
	call	init_isa
	mv	a4,s0
	lla	a3,.LANCHOR0
	li	a2,149
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,-2147483648
	call	guest_to_host
	mv	a2,s0
	mv	a1,s1
	call	memcpy
	call	init_device
	lla	s0,.LANCHOR1
	lla	a4,.LC2
	mv	a3,s0
	li	a2,28
	lla	a1,.LC0
	lla	a0,.LC3
	call	printf
	mv	a3,s0
	li	a2,29
	lla	a1,.LC0
	lla	a0,.LC4
	call	printf
	mv	a3,s0
	li	a2,32
	lla	a5,.LC5
	lla	a4,.LC6
	lla	a1,.LC0
	lla	a0,.LC7
	call	printf
	lla	a1,.LC8
	lla	a0,.LC9
	call	printf
	lla	a0,.LC10
	call	printf
	mv	a3,s0
	lw	s0,8(sp)
	lw	ra,12(sp)
	lw	s1,4(sp)
	li	a2,35
	lla	a1,.LC0
	lla	a0,.LC11
	addi	sp,sp,16
	tail	printf
	.size	am_init_monitor, .-am_init_monitor
	.section	.rodata.__func__.1,"a"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	__func__.1, @object
	.size	__func__.1, 9
__func__.1:
	.string	"load_img"
	.section	.srodata.__func__.0,"a"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	__func__.0, @object
	.size	__func__.0, 8
__func__.0:
	.string	"welcome"
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
