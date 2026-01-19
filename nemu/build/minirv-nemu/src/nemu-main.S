#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"nemu-main.c"
	.option nopic
	.text
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-16
	sw	ra,12(sp)
	call	am_init_monitor
	call	engine_start
	lw	ra,12(sp)
	addi	sp,sp,16
	tail	is_exit_status_bad
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
