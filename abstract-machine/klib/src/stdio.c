#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdlib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list valist;
  va_start(valist, fmt);
  
  char *out_start = out;  // 保存输出起始地址，用于计算输出长度
  
  while (*fmt != '\0') {
    if (*fmt == '%') {
      fmt++;
      if (*fmt == '\0') {
        *out++ = '%';  // 孤立的%，直接输出
        break;
      }
      
      switch (*fmt) {
        case 'd':
          {
            int d = va_arg(valist, int);
            char buf[32];
            int index = 0;
            int is_negative = 0;
            
            // 处理负数
            if (d < 0) {
              is_negative = 1;
              d = -d;
            }
            
            // 处理0的情况
            if (d == 0) {
              buf[index++] = '0';
            } else {
              // 将数字转换为字符（逆序）
              while (d != 0) {
                buf[index++] = '0' + (d % 10);
                d /= 10;
              }
            }
            
            // 添加负号
            if (is_negative) {
              buf[index++] = '-';
            }
            
            // 反转字符串并复制到输出
            for (int i = index - 1; i >= 0; i--) {
              *out++ = buf[i];
            }
            fmt++;  // 移动到下一个格式字符
          }
          break;
        case 's':
          {
            char *s = va_arg(valist, char *);
            fmt++;
            if (s != NULL) {
              // 逐个字符复制
              while (*s != '\0') {
                *out++ = *s++;
              }
            } else {
              // 处理NULL指针
              const char *null_str = "(null)";
              while (*null_str != '\0') {
                *out++ = *null_str++;
              }
            }
          }
          break;
        default:
          //直接输出%和该字符
          *out++ = '%';
          *out++ = *fmt++;
          break;
      }
    } else {

      *out++ = *fmt++;
    }
  }
  
  *out = '\0';  // 添加字符串终止符
  va_end(valist);
  
  return out - out_start;  // 返回输出的字符数
}



int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif