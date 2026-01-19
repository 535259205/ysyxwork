#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"mmio.c"
	.option nopic
	.text
	.section	.rodata.add_mmio_map.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/device/io/mmio.c"
	.align	2
.LC1:
	.string	"Assertion fail at %s:%d\n"
	.align	2
.LC2:
	.string	"pmem"
	.align	2
.LC3:
	.string	"\033[1;31mMMIO region %s@[0x%08x, 0x%08x] is overlapped with %s@[0x%08x, 0x%08x]\033[0m\n"
	.align	2
.LC4:
	.string	"\033[1;34m[%s:%d %s] Add mmio map '%s' at [0x%08x, 0x%08x]\033[0m\n"
	.section	.text.add_mmio_map,"ax",@progbits
	.align	2
	.globl	add_mmio_map
	.hidden	add_mmio_map
	.type	add_mmio_map, @function
add_mmio_map:
	addi	sp,sp,-16
	sw	s0,8(sp)
	lla	s0,.LANCHOR0
	lw	t3,0(s0)
	sw	ra,12(sp)
	li	a5,15
	bgt	t3,a5,.L14
	mv	t1,a1
	li	a1,-2147483648
	add	a5,t1,a3
	mv	t0,a4
	add	a3,t1,a1
	li	a4,134217728
	mv	t5,a0
	addi	t4,a5,-1
	bltu	a3,a4,.L3
	not	a1,a1
	add	a5,a5,a1
	bltu	a5,a4,.L3
	mv	t6,a2
	lla	a3,.LANCHOR1+4
	li	a7,0
	ble	t3,zero,.L5
.L7:
	lw	a6,4(a3)
	bltu	a6,t1,.L6
	lw	a5,0(a3)
	bleu	a5,t4,.L15
.L6:
	addi	a7,a7,1
	addi	a3,a3,20
	bne	t3,a7,.L7
.L5:
	slli	a5,t3,2
	add	a5,a5,t3
	slli	a5,a5,2
	lla	a7,.LANCHOR1
	add	a7,a7,a5
	mv	a6,t4
	mv	a5,t1
	mv	a4,t5
	lla	a3,.LANCHOR2
	li	a2,50
	lla	a1,.LC0
	lla	a0,.LC4
	sw	t5,0(a7)
	sw	t1,4(a7)
	sw	t4,8(a7)
	sw	t6,12(a7)
	sw	t0,16(a7)
	call	printf
	lw	a5,0(s0)
	lw	ra,12(sp)
	addi	a5,a5,1
	sw	a5,0(s0)
	lw	s0,8(sp)
	addi	sp,sp,16
	jr	ra
.L15:
	slli	a4,a7,2
	add	a4,a4,a7
	slli	a4,a4,2
	lla	a3,.LANCHOR1
	add	a4,a3,a4
	lw	a4,0(a4)
.L12:
	mv	a2,t1
	mv	a3,t4
	mv	a1,t5
	lla	a0,.LC3
	call	printf
	call	assert_fail_msg
	li	a2,31
.L11:
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
.L3:
	li	a6,-2013265920
	addi	a6,a6,-1
	li	a5,-2147483648
	lla	a4,.LC2
	j	.L12
.L14:
	li	a2,37
	j	.L11
	.size	add_mmio_map, .-add_mmio_map
	.section	.text.mmio_read,"ax",@progbits
	.align	2
	.globl	mmio_read
	.hidden	mmio_read
	.type	mmio_read, @function
mmio_read:
	la a6, .LANCHOR0; lw a6, 0(a6);
	ble	a6,zero,.L20
	lla	a5,.LANCHOR1
	li	a4,0
.L19:
	lw	a3,4(a5)
	addi	a4,a4,1
	mv	a2,a5
	bltu	a0,a3,.L18
	lw	a3,8(a5)
	bgtu	a0,a3,.L18
	tail	map_read
.L18:
	addi	a5,a5,20
	bne	a6,a4,.L19
.L20:
	li	a2,0
	tail	map_read
	.size	mmio_read, .-mmio_read
	.section	.text.mmio_write,"ax",@progbits
	.align	2
	.globl	mmio_write
	.hidden	mmio_write
	.type	mmio_write, @function
mmio_write:
	la a7, .LANCHOR0; lw a7, 0(a7);
	ble	a7,zero,.L26
	lla	a5,.LANCHOR1
	li	a4,0
.L25:
	lw	a6,4(a5)
	addi	a4,a4,1
	mv	a3,a5
	bltu	a0,a6,.L24
	lw	a6,8(a5)
	bgtu	a0,a6,.L24
	tail	map_write
.L24:
	addi	a5,a5,20
	bne	a7,a4,.L25
.L26:
	li	a3,0
	tail	map_write
	.size	mmio_write, .-mmio_write
	.section	.bss.maps,"aw",@nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	maps, @object
	.size	maps, 320
maps:
	.zero	320
	.section	.rodata.__func__.0,"a"
	.align	2
	.set	.LANCHOR2,. + 0
	.type	__func__.0, @object
	.size	__func__.0, 13
__func__.0:
	.string	"add_mmio_map"
	.section	.sbss.nr_map,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	nr_map, @object
	.size	nr_map, 4
nr_map:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
