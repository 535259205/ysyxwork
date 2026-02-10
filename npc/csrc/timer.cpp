#include <iostream>
#include "stdio.h"
#include <time.h>
#include "PMEM_ADDR.h"
#include <cstdint>

struct timespec TimStart,TimEnd;


uint32_t timer_handle(uint32_t addr, int len)
{
    if(TimStart.tv_sec==NULL)
    {
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &TimStart);
        return 0;
    }
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &TimEnd);
    uint64_t usec = (TimEnd.tv_sec - TimStart.tv_sec)*1000000;
    if(addr == PTIME_BASE_ADDR)
      return usec&0xFFFFFFFF;
    else
      return usec>>32;
}