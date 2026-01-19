#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"intr.c"
	.option nopic
	.text
	.section	.text.dev_raise_intr,"ax",@progbits
	.align	2
	.globl	dev_raise_intr
	.hidden	dev_raise_intr
	.type	dev_raise_intr, @function
dev_raise_intr:
	ret
	.size	dev_raise_intr, .-dev_raise_intr
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
