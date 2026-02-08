#include <am.h>
#include <nemu.h>
//为什么？
#define SYNC_ADDR (VGACTL_ADDR + 4)
int gpu_w;
int gpu_h;
void __am_gpu_init()
{
  AM_GPU_CONFIG_T info = io_read(AM_GPU_CONFIG);
  int i;
  //获取配置信息
  gpu_w = info.width;                            // TODO: get the correct width 
  gpu_h = info.height;                           // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR; // 设置地址ADDR
  //初始化显存
  for (i = 0; i < gpu_w * gpu_h; i++)
    fb[i] = 0;
  //刷新地址
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t vga_ctl = inl(VGACTL_ADDR);
  int width = vga_ctl >> 16;
  int height = vga_ctl & 0xffff;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = width * height * 4 // 每个像素4字节
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x, y; void *pixels; int w, h;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  x = ctl->x;
  y = ctl->y;
  w = ctl->w;
  h = ctl->h;
  pixels = ctl->pixels;
  int i, j;
  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      uint32_t pixel = ((uint32_t *)pixels)[i * w + j];
      fb[(y + i) * gpu_w + (x + j)] = pixel;
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
