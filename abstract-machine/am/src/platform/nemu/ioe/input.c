#include <am.h>
#include <nemu.h>
#define KEYDOWN_MASK 0x8000



void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t code = inl(KBD_ADDR);//读取键盘状态寄存器
  kbd->keydown = !!(code & KEYDOWN_MASK);//转换位标准的bool 1bit 数据 本质逻辑不变 最高位为按下标志位
  kbd->keycode = code & ~KEYDOWN_MASK;  //按键的编码
}
