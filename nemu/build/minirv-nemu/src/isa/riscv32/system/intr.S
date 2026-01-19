#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"intr.c"
	.option nopic
	.text
	.section	.text.isa_raise_intr,"ax",@progbits
	.align	2
	.globl	isa_raise_intr
	.hidden	isa_raise_intr
	.type	isa_raise_intr, @function
isa_raise_intr:
	li	a0,0
	ret
	.size	isa_raise_intr, .-isa_raise_intr
	.section	.text.isa_query_intr,"ax",@progbits
	.align	2
	.globl	isa_query_intr
	.hidden	isa_query_intr
	.type	isa_query_intr, @function
isa_query_intr:
	li	a0,-1
	ret
	.size	isa_query_intr, .-isa_query_intr
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
