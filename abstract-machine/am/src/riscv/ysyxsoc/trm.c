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

void halt(int code) {
  asm volatile("ebreak");
  while (1);
}
void mem_init(void)
{
  volatile int *data_load_start;
  volatile int *data_start;
  volatile int *data_end;
  asm volatile("la %0, _data_load_start" : "=r"(data_load_start));
  asm volatile("la %0, _data_start" : "=r"(data_start));
  asm volatile("la %0, _data_end" : "=r"(data_end));
  while(data_start<=data_end)
  {
    *data_start = *data_load_start;
    //测试代码到时候可以删去
    if(*(data_start)!=*(data_load_start))
    {
      halt(0);
    }    
    //
    data_start++;
    data_load_start++;
  }
}

extern void uart_init(void);
void _trm_init()
{
  mem_init();
  uart_init();
  int ret = main(mainargs);
  halt(ret);
}
