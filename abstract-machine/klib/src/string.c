#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  int i = 0;
  while(*s != '\0'){
    i++;
    s++;
  }
  return i;
}

char *strcpy(char *dst, const char *src) {
  char *ret = dst;
  while(*src != '\0'){
    *dst = *src;
    dst++;
    src++;
  }
  *dst = '\0';
  return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *ret = dst;  // 保存起始地址
  while(n-- > 0){
    if(*src != '\0'){
      *dst = *src;
      src++;
    } else {
      *dst = '\0';  // 用'\0'填充剩余空间
    }
    dst++;
  }
  return ret;  // 返回起始地址
}

char *strcat(char *dst, const char *src) {
  char *ret = dst;
  while(*dst != '\0'){
    dst++;
  }
  while(*src != '\0'){
    *dst = *src;
    dst++;
    src++;
  }
  *dst = '\0';
  return ret;
}

int strcmp(const char *s1, const char *s2) {
  while(*s1 == *s2){
    if(*s1 == '\0'){
      return 0;
    }
    s1++;
    s2++;
  }
  return (int)(*s1 - *s2);
}

int strncmp(const char *s1, const char *s2, size_t n) {
  
  while(n-- > 0){
    if(*s1 == *s2){
      if(*s1 == '\0'){
        return 0;
      }
      s1++;
      s2++;
    }
    else{
      return (int)(*s1 - *s2);
    }
  }
  return 0;
}

void *memset(void *s, int c, size_t n) {
  char *s_ = s;
  while(n-- > 0){
    *s_++ = (char)c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  char *dst_ = dst;
  const char *src_ = src;
  
  if (dst_ < src_) {
    // 目标地址在源地址之前，从前往后复制
    while(n-- > 0){
      *dst_++ = *src_++;
    }
  } else if (dst_ > src_) {
    // 目标地址在源地址之后，从后往前复制
    dst_ += n - 1;
    src_ += n - 1;
    while(n-- > 0){
      *dst_-- = *src_--;
    }
  }
  // 地址相同，不需要复制
  
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  char *out_ = out;
  const char *in_ = in;
  while(n-- > 0){
    *out_++ = *in_++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *s1_ = s1;
  const unsigned char *s2_ = s2;
  while(n-- > 0){
    if(*s1_ != *s2_){
      return (int)(*s1_ - *s2_);
    }
    s1_++;
    s2_++;
  }
  return 0;
}

#endif
