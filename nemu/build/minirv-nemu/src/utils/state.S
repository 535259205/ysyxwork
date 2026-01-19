#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"state.c"
	.option nopic
	.text
	.section	.text.is_exit_status_bad,"ax",@progbits
	.align	2
	.globl	is_exit_status_bad
	.hidden	is_exit_status_bad
	.type	is_exit_status_bad, @function
is_exit_status_bad:
	lla	a4,.LANCHOR0
	lw	a5,0(a4)
	li	a3,2
	addi	a0,a5,-4
	seqz	a0,a0
	bne	a5,a3,.L3
	lw	a0,8(a4)
	seqz	a0,a0
.L3:
	xori	a0,a0,1
	ret
	.size	is_exit_status_bad, .-is_exit_status_bad
	.hidden	nemu_state
	.globl	nemu_state
	.section	.data.nemu_state,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	nemu_state, @object
	.size	nemu_state, 12
nemu_state:
	.word	1
	.zero	8
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
