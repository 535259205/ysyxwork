.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  /* 2. 复制.data段：从MROM(LMA)到SRAM(VMA) */
  la t0, _main_address  /* 源地址：.data在MROM的起始（LMA）AT */
  la t1, _data_start  /* 目的地址：.data在SRAM的起始（VMA） */
  la t2, _data_end    /* .data在SRAM的结束地址 */
  mv t0, zero
  mv t1, zero
  mv t2, zero

# copy_data:
#   /* 若源地址 >= 目的结束地址，复制完成 */
#   bge a1, a2, clear_bss
#   /* 按字复制（4字节），适配大多数场景，也可按字节/半字 */
#   lw t0, 0(a0)
#   sw t0, 0(a1)
#   /* 地址自增4 */
#   addi a0, a0, 4
#   addi a1, a1, 4
#   j copy_data

#   /* 3. 清零.bss段（关键细节：未初始化全局变量必须置0） */
# clear_bss:
#   la a0, _bss_start       /* .bss起始地址 */
#   la a1, _bss_end         /* .bss结束地址 */
#   li t0, 0                 /* 清零值 */

# clear_loop:
#   bge a0, a1, enter_main   /* 清零完成则进入main */
#   sw t0, 0(a0)             /* 按字清零 */
#   addi a0, a0, 4
#   j clear_loop

enter_main:
  call _trm_init

.size _start, . - _start
