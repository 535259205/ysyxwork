#include <am.h>
#include <klib-macros.h>

extern char _heap_start,_heap_end;
int main(const char *args);

extern char _pmem_start;
// #define PMEM_SIZE (128 * 1024 * 1024)

// #define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

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
__attribute__((section(".boot"))) 
void boot_cpy(uintptr_t src_addr, uintptr_t dst_addr, uintptr_t data_end) {
  uintptr_t *src = (uintptr_t *)src_addr;
  uintptr_t *dst = (uintptr_t *)dst_addr;
  while(dst<=((uintptr_t *)data_end))
  {
    *dst++ = *src++;

  }
    asm volatile("fence.i" ::: "memory");
    // asm volatile("fence" ::: "memory");
}

// 初始化数据段（全局变量到RAM里面）
__attribute__((section(".boot"))) 
void mem_init(void)
{
  volatile uintptr_t data_load_start;
  volatile uintptr_t data_start;
  volatile uintptr_t data_end;
  asm volatile("la %0, _data_load_start" : "=r"(data_load_start));
  asm volatile("la %0, _data_start" : "=r"(data_start));
  asm volatile("la %0, _data_end" : "=r"(data_end));
  boot_cpy(data_load_start, data_start, data_end);
}

__attribute__((section(".boot"))) 
void flash_to_sdram(void)
{
  volatile uintptr_t text_start;
  volatile uintptr_t text_end;
  volatile uintptr_t text_load_start;

  // 加载正确的符号地址
  asm volatile("la %0, _text_start" : "=r"(text_start));
  asm volatile("la %0, _text_end" : "=r"(text_end));
  asm volatile("la %0, _text_load_start" : "=r"(text_load_start));
  
  
  // 搬运代码段和只读数据段到 SRAM
  boot_cpy(text_load_start, text_start, text_end);
}

extern void uart_init(void);


void real_main(void)
{
  uart_init();
  mem_init();
  int ret = main(mainargs);
  halt(ret);
}

__attribute__((section(".boot"))) 
void _trm_init()
{
  flash_to_sdram();
  real_main();
  // mem_init();
  // uart_init();
  // putch('>');
  // putch('\n');
  // int ret = main(mainargs);
  // halt(ret);
}