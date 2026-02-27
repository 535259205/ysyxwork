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

void boot_cpy(uint32_t src_addr, uint32_t dst_addr, uint32_t data_end) {
  uint32_t *src = (uint32_t *)src_addr;
  uint32_t *dst = (uint32_t *)dst_addr;
  while(dst<=((uint32_t *)data_end))
  {
    *dst++ = *src++;
  }
}

void boot_cpy2(uint32_t src_addr, uint32_t dst_addr, uint32_t data_end) {
  uint32_t *src = (uint32_t *)src_addr;
  uint32_t *dst = (uint32_t *)dst_addr;
  while(src<=((uint32_t *)data_end))
  {
    *dst++ = *src++;
  }
}

// 初始化数据段（全局变量到RAM里面）
void mem_init(void)
{
  volatile int data_load_start;
  volatile int data_start;
  volatile int data_end;
  asm volatile("la %0, _data_load_start" : "=r"(data_load_start));
  asm volatile("la %0, _data_start" : "=r"(data_start));
  asm volatile("la %0, _data_end" : "=r"(data_end));
  boot_cpy((uint32_t)data_load_start, (uint32_t)data_start, (uint32_t)data_end);
}


void flash_to_sram(void)
{
  volatile uint32_t text_start;
  volatile uint32_t text_end;
  volatile uint32_t rodata_start;
  volatile uint32_t rodata_end;
  volatile uint32_t main_address;
  
  // 加载正确的符号地址
  asm volatile("la %0, _text_start" : "=r"(text_start));
  asm volatile("la %0, _text_end" : "=r"(text_end));
  asm volatile("la %0, _rodata_start" : "=r"(rodata_start));
  asm volatile("la %0, _rodata_end" : "=r"(rodata_end));
  asm volatile("la %0, _main_address" : "=r"(main_address));
  
  // 计算 SRAM 中的目标地址
  uint32_t sram_text_start = 0x0f000000;
  uint32_t sram_rodata_start = sram_text_start + (rodata_start - text_start);
  uint32_t sram_main_address = sram_text_start + (main_address - text_start);
  
  // 搬运代码段和只读数据段到 SRAM
  boot_cpy2(text_start, sram_text_start, text_end);
  boot_cpy2(rodata_start, sram_rodata_start, rodata_end);
  
  // 跳转到 SRAM 中的 main 函数，不返回
asm volatile("jr %0\n" : : "r"(sram_main_address));

}

extern void uart_init(void);
void _trm_init()
{
  mem_init();
  uart_init();
  // flash_to_sram();
  int ret = main(mainargs);
  halt(ret);
}
