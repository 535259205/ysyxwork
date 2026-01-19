#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"vga.c"
	.option nopic
	.text
	.section	.text.vga_update_screen,"ax",@progbits
	.align	2
	.globl	vga_update_screen
	.hidden	vga_update_screen
	.type	vga_update_screen, @function
vga_update_screen:
	addi	sp,sp,-64
	sw	s0,56(sp)
	lla	s0,.LANCHOR0
	lw	a5,0(s0)
	sw	ra,60(sp)
	lw	a5,4(a5)
	bne	a5,zero,.L8
	lw	ra,60(sp)
	lw	s0,56(sp)
	addi	sp,sp,64
	jr	ra
.L8:
	addi	a1,sp,8
	la a5, .LANCHOR1; lw a5, 0(a5);
	li	a0,9
	sw	a5,32(sp)
	sw	zero,24(sp)
	sw	zero,28(sp)
	call	ioe_read
	lw	a5,12(sp)
	addi	a1,sp,8
	li	a0,9
	sw	a5,36(sp)
	call	ioe_read
	lw	a5,16(sp)
	addi	a1,sp,24
	li	a0,11
	sw	a5,40(sp)
	li	a5,1
	sb	a5,44(sp)
	call	ioe_write
	lw	a5,0(s0)
	lw	ra,60(sp)
	lw	s0,56(sp)
	sw	zero,4(a5)
	addi	sp,sp,64
	jr	ra
	.size	vga_update_screen, .-vga_update_screen
	.section	.rodata.init_vga.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"vgactl"
	.globl	__mulsi3
	.align	2
.LC1:
	.string	"vmem"
	.section	.text.init_vga,"ax",@progbits
	.align	2
	.globl	init_vga
	.hidden	init_vga
	.type	init_vga, @function
init_vga:
	addi	sp,sp,-32
	li	a0,8
	sw	ra,28(sp)
	sw	s0,24(sp)
	sw	s1,20(sp)
	sw	s2,16(sp)
	call	new_space
	mv	a5,a0
	lla	s1,.LANCHOR0
	mv	a1,sp
	li	a0,9
	sw	a5,0(s1)
	call	ioe_read
	mv	a1,sp
	li	a0,9
	lw	s0,4(sp)
	call	ioe_read
	lw	a4,8(sp)
	lw	a2,0(s1)
	slli	a5,s0,16
	or	a5,a5,a4
	li	a1,-1610612736
	sw	a5,0(a2)
	li	a4,0
	li	a3,8
	lla	a0,.LC0
	addi	a1,a1,256
	call	add_mmio_map
	mv	a1,sp
	li	a0,9
	call	ioe_read
	mv	a1,sp
	li	a0,9
	lw	s0,4(sp)
	call	ioe_read
	lw	a1,8(sp)
	mv	a0,s0
	lla	s1,.LANCHOR1
	call	__mulsi3
	slli	a0,a0,2
	call	new_space
	mv	s0,a0
	mv	a1,sp
	li	a0,9
	sw	s0,0(s1)
	call	ioe_read
	mv	a1,sp
	li	a0,9
	lw	s2,4(sp)
	call	ioe_read
	lw	a1,8(sp)
	mv	a0,s2
	call	__mulsi3
	mv	a2,s0
	slli	a3,a0,2
	li	a4,0
	li	a1,-1593835520
	lla	a0,.LC1
	call	add_mmio_map
	mv	a1,sp
	li	a0,9
	lw	s0,0(s1)
	call	ioe_read
	mv	a1,sp
	li	a0,9
	lw	s1,4(sp)
	call	ioe_read
	lw	a1,8(sp)
	mv	a0,s1
	call	__mulsi3
	slli	a2,a0,2
	mv	a0,s0
	lw	s0,24(sp)
	lw	ra,28(sp)
	lw	s1,20(sp)
	lw	s2,16(sp)
	li	a1,0
	addi	sp,sp,32
	tail	memset
	.size	init_vga, .-init_vga
	.section	.sbss.vgactl_port_base,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	vgactl_port_base, @object
	.size	vgactl_port_base, 4
vgactl_port_base:
	.zero	4
	.section	.sbss.vmem,"aw",@nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	vmem, @object
	.size	vmem, 4
vmem:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
