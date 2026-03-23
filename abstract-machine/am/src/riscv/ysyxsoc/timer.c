#include <am.h>
#include "stdint.h"
#include <assert.h>
void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  // unsigned int *data1 = (unsigned int *)0x02000000;
  // unsigned int *data2 = (unsigned int *)0x02000004;
  // uptime->us = *data2|((uint64_t)(*data1)<<32);
  // uptime->us = *data1;
  uptime->us = 0;
  // uptime->us = 0xFFFFFFFFFFFFFFFF;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
