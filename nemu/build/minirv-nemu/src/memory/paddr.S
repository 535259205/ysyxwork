#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"paddr.c"
	.option nopic
	.text
	.section	.text.guest_to_host,"ax",@progbits
	.align	2
	.globl	guest_to_host
	.hidden	guest_to_host
	.type	guest_to_host, @function
guest_to_host:
	li	a5,-2147483648
	add	a0,a0,a5
	la a5, .LANCHOR0; lw a5, 0(a5);
	add	a0,a5,a0
	ret
	.size	guest_to_host, .-guest_to_host
	.section	.text.host_to_guest,"ax",@progbits
	.align	2
	.globl	host_to_guest
	.hidden	host_to_guest
	.type	host_to_guest, @function
host_to_guest:
	la a5, .LANCHOR0; lw a5, 0(a5);
	sub	a0,a0,a5
	li	a5,-2147483648
	add	a0,a0,a5
	ret
	.size	host_to_guest, .-host_to_guest
	.section	.rodata.init_mem.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/memory/paddr.c"
	.align	2
.LC1:
	.string	"Assertion fail at %s:%d\n"
	.align	2
.LC2:
	.string	"\033[1;34m[%s:%d %s] physical memory area [0x%08x, 0x%08x]\033[0m\n"
	.section	.text.init_mem,"ax",@progbits
	.align	2
	.globl	init_mem
	.hidden	init_mem
	.type	init_mem, @function
init_mem:
	addi	sp,sp,-16
	li	a0,134217728
	sw	ra,12(sp)
	call	malloc
	la a5, .LANCHOR0; sw a0, 0(a5);
	beq	a0,zero,.L7
	lw	ra,12(sp)
	li	a5,-2013265920
	addi	a5,a5,-1
	li	a4,-2147483648
	lla	a3,.LANCHOR1
	li	a2,50
	lla	a1,.LC0
	lla	a0,.LC2
	addi	sp,sp,16
	tail	printf
.L7:
	li	a2,47
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
	.size	init_mem, .-init_mem
	.section	.rodata.paddr_read.str1.4,"aMS",@progbits,1
	.align	2
.LC3:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/include/memory/host.h"
	.section	.text.paddr_read,"ax",@progbits
	.align	2
	.globl	paddr_read
	.hidden	paddr_read
	.type	paddr_read, @function
paddr_read:
	li	a5,-2147483648
	add	a4,a0,a5
	li	a3,134217728
	bgeu	a4,a3,.L9
	la a3, .LANCHOR0; lw a3, 0(a3);
	li	a2,2
	add	a3,a3,a4
	beq	a1,a2,.L10
	li	a4,4
	beq	a1,a4,.L11
	li	a4,1
	beq	a1,a4,.L16
	addi	sp,sp,-16
	li	a2,27
	lla	a1,.LC3
	lla	a0,.LC1
	sw	ra,12(sp)
	call	printf
	li	a0,1
	call	halt
.L16:
	lbu	a0,0(a3)
	ret
.L11:
	lw	a0,0(a3)
	ret
.L10:
	lhu	a0,0(a3)
	ret
.L9:
	tail	mmio_read
	.size	paddr_read, .-paddr_read
	.section	.text.paddr_write,"ax",@progbits
	.align	2
	.globl	paddr_write
	.hidden	paddr_write
	.type	paddr_write, @function
paddr_write:
	li	a5,-2147483648
	add	a4,a0,a5
	li	a6,134217728
	bgeu	a4,a6,.L18
	mv	a5,a1
	mv	a3,a2
	li	a1,2
	la a2, .LANCHOR0; lw a2, 0(a2);
	add	a2,a2,a4
	beq	a5,a1,.L19
	li	a4,4
	beq	a5,a4,.L20
	li	a4,1
	beq	a5,a4,.L25
	addi	sp,sp,-16
	li	a2,37
	lla	a1,.LC3
	lla	a0,.LC1
	sw	ra,12(sp)
	call	printf
	li	a0,1
	call	halt
.L25:
	sb	a3,0(a2)
	ret
.L20:
	sw	a3,0(a2)
	ret
.L19:
	sh	a3,0(a2)
	ret
.L18:
	tail	mmio_write
	.size	paddr_write, .-paddr_write
	.section	.rodata.__func__.0,"a"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	__func__.0, @object
	.size	__func__.0, 9
__func__.0:
	.string	"init_mem"
	.section	.sbss.pmem,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	pmem, @object
	.size	pmem, 4
pmem:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
