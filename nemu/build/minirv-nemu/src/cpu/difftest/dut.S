#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"dut.c"
	.option nopic
	.text
	.section	.text.init_difftest,"ax",@progbits
	.align	2
	.globl	init_difftest
	.hidden	init_difftest
	.type	init_difftest, @function
init_difftest:
	ret
	.size	init_difftest, .-init_difftest
	.hidden	ref_difftest_raise_intr
	.globl	ref_difftest_raise_intr
	.hidden	ref_difftest_exec
	.globl	ref_difftest_exec
	.hidden	ref_difftest_regcpy
	.globl	ref_difftest_regcpy
	.hidden	ref_difftest_memcpy
	.globl	ref_difftest_memcpy
	.section	.sbss.ref_difftest_exec,"aw",@nobits
	.align	2
	.type	ref_difftest_exec, @object
	.size	ref_difftest_exec, 4
ref_difftest_exec:
	.zero	4
	.section	.sbss.ref_difftest_memcpy,"aw",@nobits
	.align	2
	.type	ref_difftest_memcpy, @object
	.size	ref_difftest_memcpy, 4
ref_difftest_memcpy:
	.zero	4
	.section	.sbss.ref_difftest_raise_intr,"aw",@nobits
	.align	2
	.type	ref_difftest_raise_intr, @object
	.size	ref_difftest_raise_intr, 4
ref_difftest_raise_intr:
	.zero	4
	.section	.sbss.ref_difftest_regcpy,"aw",@nobits
	.align	2
	.type	ref_difftest_regcpy, @object
	.size	ref_difftest_regcpy, 4
ref_difftest_regcpy:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
