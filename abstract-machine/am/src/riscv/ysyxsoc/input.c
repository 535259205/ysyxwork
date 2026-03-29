#include <am.h>

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  volatile char *keybrd_reg = (volatile char *)0x10011000;
  volatile unsigned char temp = *keybrd_reg;
  kbd->keydown = 1;
  kbd->keycode = temp;
//做内部译码
  // kbd->keydown = 0;
  // kbd->keycode = 0;
}
