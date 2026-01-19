#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"map.c"
	.option nopic
	.text
	.section	.rodata.check_bound.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"\033[1;31maddress (0x%08x) is out of bound at pc = 0x%08x\033[0m\n"
	.align	2
.LC1:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/device/io/map.c"
	.align	2
.LC2:
	.string	"Assertion fail at %s:%d\n"
	.align	2
.LC3:
	.string	"\033[1;31maddress (0x%08x) is out of bound {%s} [0x%08x, 0x%08x] at pc = 0x%08x\033[0m\n"
	.section	.text.check_bound,"ax",@progbits
	.align	2
	.type	check_bound, @function
check_bound:
	addi	sp,sp,-16
	sw	ra,12(sp)
	sw	s0,8(sp)
	sw	s1,4(sp)
	beq	a0,zero,.L9
	lw	a4,8(a0)
	lw	a3,4(a0)
	mv	s0,a0
	mv	s1,a1
	bltu	a4,a1,.L3
	bgeu	a1,a3,.L1
.L3:
	lw	a2,0(s0)
	la a5, cpu+128; lw a5, 0(a5);
	mv	a1,s1
	lla	a0,.LC3
	call	printf
	call	assert_fail_msg
	lw	a5,8(s0)
	bltu	a5,s1,.L5
	lw	a5,4(s0)
	bgtu	a5,s1,.L5
.L1:
	lw	ra,12(sp)
	lw	s0,8(sp)
	lw	s1,4(sp)
	addi	sp,sp,16
	jr	ra
.L5:
	li	a2,39
.L7:
	lla	a1,.LC1
	lla	a0,.LC2
	call	printf
	li	a0,1
	call	halt
.L9:
	la a2, cpu+128; lw a2, 0(a2);
	lla	a0,.LC0
	call	printf
	call	assert_fail_msg
	li	a2,37
	j	.L7
	.size	check_bound, .-check_bound
	.section	.text.new_space,"ax",@progbits
	.align	2
	.globl	new_space
	.hidden	new_space
	.type	new_space, @function
new_space:
	lla	a4,.LANCHOR0
	li	a5,4096
	lw	a3,0(a4)
	addi	a5,a5,-1
	add	a0,a0,a5
	li	a5,-4096
	and	a0,a0,a5
	add	a0,a3,a0
	la a5, .LANCHOR1; lw a5, 0(a5);
	sw	a0,0(a4)
	sub	a0,a0,a5
	li	a5,33554432
	bge	a0,a5,.L15
	mv	a0,a3
	ret
.L15:
	addi	sp,sp,-16
	li	a2,31
	lla	a1,.LC1
	lla	a0,.LC2
	sw	ra,12(sp)
	call	printf
	li	a0,1
	call	halt
	.size	new_space, .-new_space
	.section	.text.init_map,"ax",@progbits
	.align	2
	.globl	init_map
	.hidden	init_map
	.type	init_map, @function
init_map:
	addi	sp,sp,-16
	li	a0,33554432
	sw	ra,12(sp)
	call	malloc
	la a5, .LANCHOR1; sw a0, 0(a5);
	beq	a0,zero,.L19
	lw	ra,12(sp)
	la a5, .LANCHOR0; sw a0, 0(a5);
	addi	sp,sp,16
	jr	ra
.L19:
	li	a2,51
	lla	a1,.LC1
	lla	a0,.LC2
	call	printf
	li	a0,1
	call	halt
	.size	init_map, .-init_map
	.section	.rodata.map_read.str1.4,"aMS",@progbits,1
	.align	2
.LC4:
	.string	"/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/include/memory/host.h"
	.section	.text.map_read,"ax",@progbits
	.align	2
	.globl	map_read
	.hidden	map_read
	.type	map_read, @function
map_read:
	addi	sp,sp,-16
	sw	ra,12(sp)
	sw	s0,8(sp)
	sw	s1,4(sp)
	sw	s2,0(sp)
	addi	a4,a1,-1
	li	a5,7
	bgtu	a4,a5,.L31
	mv	s2,a0
	mv	s1,a1
	mv	a1,a0
	mv	a0,a2
	mv	s0,a2
	call	check_bound
	lw	a4,4(s0)
	lw	a5,16(s0)
	sub	s2,s2,a4
	beq	a5,zero,.L22
	li	a2,0
	mv	a1,s1
	mv	a0,s2
	jalr	a5
.L22:
	lw	a5,12(s0)
	li	a4,2
	add	a5,a5,s2
	beq	s1,a4,.L23
	li	a4,4
	beq	s1,a4,.L24
	li	a4,1
	beq	s1,a4,.L32
	li	a2,27
	lla	a1,.LC4
	lla	a0,.LC2
	call	printf
	li	a0,1
	call	halt
.L23:
	lhu	s1,0(a5)
.L26:
	lw	a0,0(s0)
	call	dtrace_add
	lw	ra,12(sp)
	lw	s0,8(sp)
	lw	s2,0(sp)
	mv	a0,s1
	lw	s1,4(sp)
	addi	sp,sp,16
	jr	ra
.L32:
	lbu	s1,0(a5)
	j	.L26
.L24:
	lw	s1,0(a5)
	j	.L26
.L31:
	li	a2,59
	lla	a1,.LC1
	lla	a0,.LC2
	call	printf
	li	a0,1
	call	halt
	.size	map_read, .-map_read
	.section	.text.map_write,"ax",@progbits
	.align	2
	.globl	map_write
	.hidden	map_write
	.type	map_write, @function
map_write:
	addi	sp,sp,-32
	sw	ra,28(sp)
	sw	s0,24(sp)
	sw	s1,20(sp)
	sw	s2,16(sp)
	sw	s3,12(sp)
	addi	a4,a1,-1
	li	a5,7
	bgtu	a4,a5,.L44
	mv	s2,a0
	mv	s1,a1
	mv	a1,a0
	mv	a0,a3
	mv	s0,a3
	mv	s3,a2
	call	check_bound
	lw	a3,4(s0)
	lw	a5,12(s0)
	li	a4,2
	sub	a0,s2,a3
	add	a5,a5,a0
	beq	s1,a4,.L35
	li	a4,4
	beq	s1,a4,.L36
	li	a4,1
	beq	s1,a4,.L45
	li	a2,37
	lla	a1,.LC4
	lla	a0,.LC2
	call	printf
	li	a0,1
	call	halt
.L35:
	sh	s3,0(a5)
.L38:
	lw	a5,16(s0)
	beq	a5,zero,.L39
	li	a2,1
	mv	a1,s1
	jalr	a5
.L39:
	lw	a0,0(s0)
	lw	s0,24(sp)
	lw	ra,28(sp)
	lw	s1,20(sp)
	lw	s2,16(sp)
	lw	s3,12(sp)
	addi	sp,sp,32
	tail	dtrace_add
.L45:
	sb	s3,0(a5)
	j	.L38
.L36:
	sw	s3,0(a5)
	j	.L38
.L44:
	li	a2,69
	lla	a1,.LC1
	lla	a0,.LC2
	call	printf
	li	a0,1
	call	halt
	.size	map_write, .-map_write
	.section	.sbss.io_space,"aw",@nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	io_space, @object
	.size	io_space, 4
io_space:
	.zero	4
	.section	.sbss.p_space,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	p_space, @object
	.size	p_space, 4
p_space:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
