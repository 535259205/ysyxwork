#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"port-io.c"
	.option nopic
	.text
	.section	.rodata.add_pio_map.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/device/io/port-io.c"
	.align	2
.LC1:
	.string	"Assertion fail at %s:%d\n"
	.align	2
.LC2:
	.string	"\033[1;34m[%s:%d %s] Add port-io map '%s' at [0x%08x, 0x%08x]\033[0m\n"
	.section	.text.add_pio_map,"ax",@progbits
	.align	2
	.globl	add_pio_map
	.hidden	add_pio_map
	.type	add_pio_map, @function
add_pio_map:
	addi	sp,sp,-16
	sw	s0,8(sp)
	lla	s0,.LANCHOR0
	lw	a7,0(s0)
	sw	ra,12(sp)
	li	a6,15
	bgt	a7,a6,.L7
	mv	t3,a4
	add	a6,a1,a3
	li	a4,65536
	mv	a5,a1
	bgeu	a6,a4,.L8
	slli	a3,a7,2
	add	a3,a3,a7
	slli	a3,a3,2
	lla	a7,.LANCHOR1
	add	a7,a7,a3
	mv	t1,a0
	mv	t4,a2
	addi	a6,a6,-1
	mv	a4,a0
	sw	a5,4(a7)
	lla	a3,.LANCHOR2
	li	a2,30
	lla	a1,.LC0
	lla	a0,.LC2
	sw	t1,0(a7)
	sw	a6,8(a7)
	sw	t4,12(a7)
	sw	t3,16(a7)
	call	printf
	lw	a5,0(s0)
	lw	ra,12(sp)
	addi	a5,a5,1
	sw	a5,0(s0)
	lw	s0,8(sp)
	addi	sp,sp,16
	jr	ra
.L7:
	li	a2,26
.L5:
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
.L8:
	li	a2,27
	j	.L5
	.size	add_pio_map, .-add_pio_map
	.section	.text.pio_read,"ax",@progbits
	.align	2
	.globl	pio_read
	.hidden	pio_read
	.type	pio_read, @function
pio_read:
	addi	sp,sp,-16
	sw	ra,12(sp)
	add	a4,a0,a1
	li	a5,65536
	li	a2,38
	bge	a4,a5,.L17
	la a3, .LANCHOR0; lw a3, 0(a3);
	ble	a3,zero,.L11
	lla	a2,.LANCHOR1
	li	a5,0
.L14:
	lw	a4,4(a2)
	bltu	a0,a4,.L12
	lw	a4,8(a2)
	bgtu	a0,a4,.L12
	lw	ra,12(sp)
	addi	sp,sp,16
	tail	map_read
.L12:
	addi	a5,a5,1
	addi	a2,a2,20
	bne	a3,a5,.L14
.L11:
	li	a2,40
.L17:
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
	.size	pio_read, .-pio_read
	.section	.text.pio_write,"ax",@progbits
	.align	2
	.globl	pio_write
	.hidden	pio_write
	.type	pio_write, @function
pio_write:
	addi	sp,sp,-16
	sw	ra,12(sp)
	add	a4,a0,a1
	li	a5,65536
	bge	a4,a5,.L27
	la a6, .LANCHOR0; lw a6, 0(a6);
	ble	a6,zero,.L20
	lla	a3,.LANCHOR1
	li	a5,0
.L23:
	lw	a4,4(a3)
	bltu	a0,a4,.L21
	lw	a4,8(a3)
	bgtu	a0,a4,.L21
	lw	ra,12(sp)
	addi	sp,sp,16
	tail	map_write
.L21:
	addi	a5,a5,1
	addi	a3,a3,20
	bne	a6,a5,.L23
.L20:
	li	a2,47
.L26:
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
.L27:
	li	a2,45
	j	.L26
	.size	pio_write, .-pio_write
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
	.size	__func__.0, 12
__func__.0:
	.string	"add_pio_map"
	.section	.sbss.nr_map,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	nr_map, @object
	.size	nr_map, 4
nr_map:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
