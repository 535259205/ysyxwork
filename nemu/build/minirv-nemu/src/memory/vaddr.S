#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"vaddr.c"
	.option nopic
	.text
	.section	.text.vaddr_ifetch,"ax",@progbits
	.align	2
	.globl	vaddr_ifetch
	.hidden	vaddr_ifetch
	.type	vaddr_ifetch, @function
vaddr_ifetch:
	tail	paddr_read
	.size	vaddr_ifetch, .-vaddr_ifetch
	.section	.text.vaddr_read,"ax",@progbits
	.align	2
	.globl	vaddr_read
	.hidden	vaddr_read
	.type	vaddr_read, @function
vaddr_read:
	tail	paddr_read
	.size	vaddr_read, .-vaddr_read
	.section	.text.vaddr_write,"ax",@progbits
	.align	2
	.globl	vaddr_write
	.hidden	vaddr_write
	.type	vaddr_write, @function
vaddr_write:
	tail	paddr_write
	.size	vaddr_write, .-vaddr_write
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
