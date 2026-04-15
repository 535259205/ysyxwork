.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  /* FSBL 阶段 SDRAM 可能尚未就绪，临时使用 SRAM 顶部作为栈
   * SRAM: 0x0f000000, 8K => 顶部 = 0x0f002000 */
  li sp, 0x0f002000
  call _trm_init          /* _trm_init = FSBL 入口，后续会跳入 SSBL */

.size _start, . - _start
