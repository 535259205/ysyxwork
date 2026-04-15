#include <am.h>
#include <klib-macros.h>

extern char _heap_start,_heap_end;
extern int main(const char *args);

extern char _pmem_start;

Area heap = RANGE(&_heap_start, &_heap_end);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

extern void uart_putch(char ch);
void putch(char ch)
{
  uart_putch(ch);
}
extern char uart_getch(void);
char getch(void)
{
  return uart_getch();
}

void halt(int code) {
  asm volatile("ebreak");
  while (1);
}

/* ================================================================
 * SSBL: Second Stage Bootloader
 * 由 FSBL 复制到 SRAM (0x0f000000) 后在此执行
 * 负责把主程序 (.text/.data) 从 FLASH 搬运到 SDRAM
 * ================================================================ */

__attribute__((section(".ssbl")))
static void ssbl_word_copy(uintptr_t src, uintptr_t dst, uintptr_t end) {
  uintptr_t *s = (uintptr_t *)src;
  uintptr_t *d = (uintptr_t *)dst;
  while (d <= (uintptr_t *)end)
    *d++ = *s++;
  asm volatile("fence.i" ::: "memory");
}

__attribute__((section(".ssbl")))
void ssbl_main(void) {
  volatile uintptr_t text_load, text_start, text_end;
  volatile uintptr_t data_load, data_start, data_end;
  volatile uintptr_t bss_start, bss_end;

  /* 1. 搬运代码段 (.text/.rodata) FLASH → SDRAM_CODE */
  asm volatile("la %0, _text_load_start" : "=r"(text_load));
  asm volatile("la %0, _text_start"      : "=r"(text_start));
  asm volatile("la %0, _text_end"        : "=r"(text_end));
  ssbl_word_copy(text_load, text_start, text_end);

  /* 2. 搬运数据段 (.data) FLASH → SDRAM */
  asm volatile("la %0, _data_load_start" : "=r"(data_load));
  asm volatile("la %0, _data_start"      : "=r"(data_start));
  asm volatile("la %0, _data_end"        : "=r"(data_end));
  ssbl_word_copy(data_load, data_start, data_end);

  /* 3. 清零 BSS 段 */
  asm volatile("la %0, _bss_start" : "=r"(bss_start));
  asm volatile("la %0, _bss_end"   : "=r"(bss_end));
  uintptr_t *p = (uintptr_t *)bss_start;
  while (p < (uintptr_t *)bss_end)
    *p++ = 0;

  /* 4. 切换栈指针到 SDRAM（主程序正式栈），然后跳转 real_main */
  asm volatile("la sp, _stack_pointer");
  extern void real_main(void);
  real_main();
}

/* ================================================================
 * FSBL: First Stage Bootloader
 * 直接在 FLASH 中执行，负责把 SSBL 从 FLASH 复制到 SRAM
 * ================================================================ */

__attribute__((section(".fsbl")))
static void fsbl_copy_ssbl(void) {
  volatile uintptr_t ssbl_load, ssbl_start, ssbl_end;
  asm volatile("la %0, _ssbl_load_start" : "=r"(ssbl_load));
  asm volatile("la %0, _ssbl_start"      : "=r"(ssbl_start));
  asm volatile("la %0, _ssbl_end"        : "=r"(ssbl_end));

  uintptr_t *src = (uintptr_t *)ssbl_load;
  uintptr_t *dst = (uintptr_t *)ssbl_start;
  while (dst < (uintptr_t *)ssbl_end)
    *dst++ = *src++;

  // asm volatile("fence"   ::: "memory");
  asm volatile("fence.i" ::: "memory");
}

/* real_main 在 .text 段（SDRAM_CODE），SSBL 完成搬运后跳过来执行 */
void real_main(void) {
  extern void uart_init(void);
  uart_init();
  int ret = main(mainargs);
  halt(ret);
}

__attribute__((section(".fsbl")))
void _trm_init(void) {
  /* FSBL: 把 SSBL 从 FLASH 搬到 SRAM */
  fsbl_copy_ssbl();
  /* 跳转到 SSBL（现在运行在 SRAM 里，速度快得多） */
  ssbl_main();
}
