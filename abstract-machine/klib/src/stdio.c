#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdlib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// 辅助函数：将数字转换为字符并通过输出函数处理
int output_num(int (*output_func)(char, void*), void *output_arg, unsigned int num, int base) {
  int count = 0;
  if (num == 0) {
    count += output_func('0', output_arg);
    return count;
  }
  
  // 使用递归将数字转换为字符（从高位到低位）
  unsigned int high = num / base;
  if (high > 0) {
    count += output_num(output_func, output_arg, high, base);
  }
  
  // 根据基数转换为对应的字符
  char digit = num % base;
  if (digit < 10) {
    count += output_func('0' + digit, output_arg);
  } else {
    count += output_func('a' + (digit - 10), output_arg);  // 十六进制小写字母
  }
  return count;
}

// 输出处理函数类型定义：接收一个字符和输出参数，返回已输出的字符数
typedef int (*output_handler_t)(char, void*);

// 直接输出字符到控制台的处理函数
int putch_output_handler(char ch, void* unused) {
  putch(ch);
  return 1;
}

// 将字符写入缓冲区的处理函数（使用双重指针版本）
int buffer_output_handler(char ch, void* buffer) {
  char** buf_ptr = (char**)buffer;
  *(*buf_ptr)++ = ch;  // 写入字符并移动指针
  return 1;
}

// msp函数：使用函数指针方式处理输出，适配printf和sprintf

int msp(const char *fmt, va_list valist, output_handler_t output_func, void *output_arg) {
  int count = 0;
  
  while (*fmt != '\0') {
    if (*fmt == '%') {
      fmt++;
      
      // 检查是否到达字符串末尾
      if (*fmt == '\0') {
        // 单独的%在字符串结尾，输出%
        count += output_func('%', output_arg);
        break;
      }
      
      // 处理格式说明符
      switch (*fmt) {
        case '%': {
          // %% -> 输出一个%
          count += output_func('%', output_arg);
          fmt++;
          break;
        }
        case 'c': {
          // %c -> 输出一个字符
          int ch = va_arg(valist, int);  // 注意：char在可变参数中会被提升为int
          count += output_func((char)ch, output_arg);
          fmt++;
          break;
        }
        case 'd': {
          int d = va_arg(valist, int);
          // 处理负数
          if (d < 0) {
            count += output_func('-', output_arg);
            d = -d;
          }
          // 处理0的情况
          count += output_num(output_func, output_arg, (unsigned int)d, 10);
          fmt++;  // 移动到下一个格式字符
          break;
        }
        case 'o': {
          // %o -> 输出无符号八进制数
          unsigned int o = va_arg(valist, unsigned int);
          count += output_num(output_func, output_arg, o, 8);
          fmt++;
          break;
        }
        case 'x': {
          // %x -> 输出无符号十六进制数（小写）
          unsigned int x = va_arg(valist, unsigned int);
          count += output_num(output_func, output_arg, x, 16);
          fmt++;
          break;
        }
        case 's': {
          char *s = va_arg(valist, char *);
          fmt++;
          if (s != NULL) {
            // 逐个字符输出
            while (*s != '\0') {
              count += output_func(*s++, output_arg);
            }
          }
          break;
        }
        default: {
          // %后跟非格式字符 -> 输出%和该字符
          count += output_func('%', output_arg);
          count += output_func(*fmt++, output_arg);
          break;
        }
      }
    } else {
      count += output_func(*fmt++, output_arg);
    }
  }
  
  return count;  // 返回输出的字符数
}

int printf(const char *fmt, ...) {
  va_list valist;
  va_start(valist, fmt);
  
  int len = msp(fmt, valist, putch_output_handler, NULL);
  
  va_end(valist);
  return len; // 返回输出的字符数
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  return __builtin_sprintf(out, fmt, ap);
}

int sprintf(char *out, const char *fmt, ...) {
  va_list valist;
  va_start(valist, fmt);
  
  int len = msp(fmt, valist, buffer_output_handler, &out);
  
  // 添加字符串终止符
  *out = '\0';
  va_end(valist);
  
  return len;  // 返回输出的字符数
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif