#include <am.h>
#include <klib-macros.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS


void putch(char ch) {
  volatile unsigned int * tx = (unsigned int *)(0x10000000);
  *tx = ch;
}

void halt(int code) {
  asm volatile("ebreak");
  while (1);
}
void mem_init(void)
{
  volatile int *_data_load_start;
  volatile int *_data_start;
  volatile int *_data_end;
  asm volatile("la %0, _data_load_start" : "=r"(_data_load_start));
  asm volatile("la %0, _data_start" : "=r"(_data_start));
  asm volatile("la %0, _data_end" : "=r"(_data_end));
  while(_data_start<_data_end)
  {
    *_data_start = *_data_load_start;
    //测试代码到时候可以删去
    if(*(_data_start)!=*(_data_load_start))
    {
      asm volatile("ebreak");
      while(1);
    }
    //
    
    _data_start++;
    _data_load_start++;
  }
}
void _trm_init()
{
  mem_init();
  int ret = main(mainargs);
  halt(ret);
}
