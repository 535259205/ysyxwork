#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"init.c"
	.option nopic
	.text
	.section	.text.init_isa,"ax",@progbits
	.align	2
	.globl	init_isa
	.hidden	init_isa
	.type	init_isa, @function
init_isa:
	addi	sp,sp,-16
	li	a0,-2147483648
	sw	ra,12(sp)
	call	guest_to_host
	li	a2,20
	lla	a1,.LANCHOR0
	call	memcpy
	lw	ra,12(sp)
	lla	a5,cpu
	li	a4,-2147483648
	sw	a4,128(a5)
	sw	zero,0(a5)
	addi	sp,sp,16
	jr	ra
	.size	init_isa, .-init_isa
	.section	.rodata.img,"a"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	img, @object
	.size	img, 20
img:
	.word	663
	.word	165923
	.word	16958723
	.word	1048691
	.word	-559038737
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
