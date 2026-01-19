#include "/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"device.c"
	.option nopic
	.text
	.section	.text.device_update,"ax",@progbits
	.align	2
	.globl	device_update
	.hidden	device_update
	.type	device_update, @function
device_update:
	addi	sp,sp,-16
	sw	ra,12(sp)
	call	get_time
	lla	a3,.LANCHOR0
	lw	a5,0(a3)
	lw	a4,4(a3)
	sub	a5,a0,a5
	sgtu	a2,a5,a0
	sub	a4,a1,a4
	bne	a4,a2,.L4
	li	a4,16384
	addi	a4,a4,281
	bgtu	a5,a4,.L4
	lw	ra,12(sp)
	addi	sp,sp,16
	jr	ra
.L4:
	lw	ra,12(sp)
	sw	a0,0(a3)
	sw	a1,4(a3)
	addi	sp,sp,16
	tail	vga_update_screen
	.size	device_update, .-device_update
	.section	.text.sdl_clear_event_queue,"ax",@progbits
	.align	2
	.globl	sdl_clear_event_queue
	.hidden	sdl_clear_event_queue
	.type	sdl_clear_event_queue, @function
sdl_clear_event_queue:
	ret
	.size	sdl_clear_event_queue, .-sdl_clear_event_queue
	.section	.text.init_device,"ax",@progbits
	.align	2
	.globl	init_device
	.hidden	init_device
	.type	init_device, @function
init_device:
	addi	sp,sp,-16
	sw	ra,12(sp)
	call	ioe_init
	call	init_map
	call	init_serial
	call	init_timer
	call	init_vga
	lw	ra,12(sp)
	addi	sp,sp,16
	tail	init_i8042
	.size	init_device, .-init_device
	.section	.sbss.last.0,"aw",@nobits
	.align	3
	.set	.LANCHOR0,. + 0
	.type	last.0, @object
	.size	last.0, 8
last.0:
	.zero	8
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
