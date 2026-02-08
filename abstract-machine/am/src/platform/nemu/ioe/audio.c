#include <am.h>
#include <nemu.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)
#define AUDIO_SB_ADDR        AUDIO_SBUF_ADDR
#define CONFIG_SB_SIZE 0x10000

void __am_audio_init() {
  outl(AUDIO_INIT_ADDR, 1);
}

//RD
void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = false;
  outl(AUDIO_SBUF_SIZE_ADDR, cfg->bufsize);
}

//WR
void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);
  outl(AUDIO_INIT_ADDR, 1);
}

//RD
void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

//AUDIO_CONFIG 里面有buf_size
//WR
void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  // 计算音频数据长度
  static int cnt = 0;
  int len = ctl->buf.end - ctl->buf.start;

  for (int i = 0; i < len; i++)
  {
    // 通过MMIO写入音频数据到NEMU的音频缓冲区
    outb(AUDIO_SB_ADDR + (i + cnt) % CONFIG_SB_SIZE, ((uint8_t *)ctl->buf.start)[i]);
  }
  outl(AUDIO_SBUF_SIZE_ADDR, len);
  cnt+=len;
}
