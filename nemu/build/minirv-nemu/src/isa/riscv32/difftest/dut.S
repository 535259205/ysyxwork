#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"dut.c"
	.option nopic
	.text
	.section	.text.isa_difftest_checkregs,"ax",@progbits
	.align	2
	.globl	isa_difftest_checkregs
	.hidden	isa_difftest_checkregs
	.type	isa_difftest_checkregs, @function
isa_difftest_checkregs:
	li	a0,0
	ret
	.size	isa_difftest_checkregs, .-isa_difftest_checkregs
	.section	.text.isa_difftest_attach,"ax",@progbits
	.align	2
	.globl	isa_difftest_attach
	.hidden	isa_difftest_attach
	.type	isa_difftest_attach, @function
isa_difftest_attach:
	ret
	.size	isa_difftest_attach, .-isa_difftest_attach
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
