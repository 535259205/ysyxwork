#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"mmu.c"
	.option nopic
	.text
	.section	.text.isa_mmu_translate,"ax",@progbits
	.align	2
	.globl	isa_mmu_translate
	.hidden	isa_mmu_translate
	.type	isa_mmu_translate, @function
isa_mmu_translate:
	li	a0,1
	ret
	.size	isa_mmu_translate, .-isa_mmu_translate
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
