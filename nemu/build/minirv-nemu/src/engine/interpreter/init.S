#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"init.c"
	.option nopic
	.text
	.section	.text.engine_start,"ax",@progbits
	.align	2
	.globl	engine_start
	.hidden	engine_start
	.type	engine_start, @function
engine_start:
	li	a0,-1
	li	a1,-1
	tail	cpu_exec
	.size	engine_start, .-engine_start
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
