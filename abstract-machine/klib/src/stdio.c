#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdlib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

typedef int (*output_handler_t)(char, void*);

int putch_output_handler(char ch, void* unused) {
  putch(ch);
  return 1;
}

int buffer_output_handler(char ch, void* buffer) {
  char** buf_ptr = (char**)buffer;
  *(*buf_ptr)++ = ch;
  return 1;
}

// 输出带宽度/零填充的无符号整数
static int output_num_padded(output_handler_t fn, void *arg,
                             unsigned long num, int base, int width,
                             int zero_pad, int uppercase) {
  char buf[32];
  int len = 0;

  if (num == 0) {
    buf[len++] = '0';
  } else {
    unsigned long n = num;
    while (n > 0) {
      int d = (int)(n % base);
      buf[len++] = d < 10 ? '0' + d : (uppercase ? 'A' : 'a') + (d - 10);
      n /= base;
    }
    // 反转
    for (int i = 0, j = len - 1; i < j; i++, j--) {
      char tmp = buf[i]; buf[i] = buf[j]; buf[j] = tmp;
    }
  }

  int count = 0;
  char pad = zero_pad ? '0' : ' ';
  for (int i = len; i < width; i++) count += fn(pad, arg);
  for (int i = 0; i < len; i++)    count += fn(buf[i], arg);
  return count;
}

int msp(const char *fmt, va_list valist, output_handler_t output_func, void *output_arg) {
  int count = 0;

  while (*fmt != '\0') {
    if (*fmt != '%') {
      count += output_func(*fmt++, output_arg);
      continue;
    }
    fmt++; // skip '%'

    if (*fmt == '\0') {
      count += output_func('%', output_arg);
      break;
    }

    // 零填充标志
    int zero_pad = 0;
    if (*fmt == '0') { zero_pad = 1; fmt++; }

    // 宽度
    int width = 0;
    while (*fmt >= '0' && *fmt <= '9') {
      width = width * 10 + (*fmt - '0');
      fmt++;
    }

    // 长度修饰符: l / ll
    int is_long = 0;
    if (*fmt == 'l') { is_long = 1; fmt++; }
    if (*fmt == 'l') { is_long = 2; fmt++; } // ll

    switch (*fmt) {
      case '%':
        count += output_func('%', output_arg);
        break;
      case 'c': {
        int ch = va_arg(valist, int);
        if (width > 1) {
          for (int i = 1; i < width; i++) count += output_func(' ', output_arg);
        }
        count += output_func((char)ch, output_arg);
        break;
      }
      case 'd': {
        long d = is_long ? va_arg(valist, long) : va_arg(valist, int);
        if (d < 0) {
          count += output_func('-', output_arg);
          d = -d;
          if (width > 0) width--;
        }
        count += output_num_padded(output_func, output_arg, (unsigned long)d, 10, width, zero_pad, 0);
        break;
      }
      case 'u': {
        unsigned long u = is_long ? va_arg(valist, unsigned long) : va_arg(valist, unsigned int);
        count += output_num_padded(output_func, output_arg, u, 10, width, zero_pad, 0);
        break;
      }
      case 'o': {
        unsigned long o = is_long ? va_arg(valist, unsigned long) : va_arg(valist, unsigned int);
        count += output_num_padded(output_func, output_arg, o, 8, width, zero_pad, 0);
        break;
      }
      case 'x': {
        unsigned long x = is_long ? va_arg(valist, unsigned long) : va_arg(valist, unsigned int);
        count += output_num_padded(output_func, output_arg, x, 16, width, zero_pad, 0);
        break;
      }
      case 'X': {
        unsigned long x = is_long ? va_arg(valist, unsigned long) : va_arg(valist, unsigned int);
        count += output_num_padded(output_func, output_arg, x, 16, width, zero_pad, 1);
        break;
      }
      case 'p': {
        uintptr_t p = (uintptr_t)va_arg(valist, void *);
        count += output_func('0', output_arg);
        count += output_func('x', output_arg);
        count += output_num_padded(output_func, output_arg, (unsigned long)p, 16,
                                   width > 2 ? width - 2 : 0, 1, 0);
        break;
      }
      case 's': {
        char *s = va_arg(valist, char *);
        if (s == NULL) s = "(null)";
        int slen = 0;
        for (const char *p = s; *p; p++) slen++;
        for (int i = slen; i < width; i++) count += output_func(' ', output_arg);
        while (*s) count += output_func(*s++, output_arg);
        break;
      }
      default:
        count += output_func('%', output_arg);
        count += output_func(*fmt, output_arg);
        break;
    }
    fmt++;
  }

  return count;
}

int printf(const char *fmt, ...) {
  va_list valist;
  va_start(valist, fmt);
  int len = msp(fmt, valist, putch_output_handler, NULL);
  va_end(valist);
  return len;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int len = msp(fmt, ap, buffer_output_handler, &out);
  *out = '\0';
  return len;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list valist;
  va_start(valist, fmt);
  int len = msp(fmt, valist, buffer_output_handler, &out);
  *out = '\0';
  va_end(valist);
  return len;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
