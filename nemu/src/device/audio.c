/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>
#include <device/map.h>
#include <SDL2/SDL.h>

enum {
  reg_freq,
  reg_channels,
  reg_samples,
  reg_sbuf_size,
  reg_init,
  reg_count,
  nr_reg
};

static uint8_t *sbuf = NULL;
static uint32_t *audio_base = NULL;
static uint32_t play_pos = 0;
static uint32_t buf_size = 0;
// SDL音频回调函数，用于实际播放音频数据
static void audio_callback(void *userdata, uint8_t *stream, int len) {
  // 如果没有音频数据可播放，直接返回
  if (audio_base[reg_count] == 0){
    SDL_PauseAudio(1);
    return;
  } 

  // 复制音频数据到SDL流
  memcpy(stream, (sbuf + play_pos), len);
  
  // 更新播放位置
  play_pos += len;
  play_pos %= CONFIG_SB_SIZE;
  audio_base[reg_count]-=len;
}

static void audio_io_handler(uint32_t offset, int len, bool is_write) {

  switch(offset>>2)
  {
    case reg_freq:
    case reg_channels:
    case reg_samples:
        // printf("channels=%d\n",audio_base[reg_channels]);
        // printf("samples=%d\n",audio_base[reg_samples]);
        // printf("freq=%d\n",audio_base[reg_freq]);
      break;
    case reg_init:
        SDL_AudioSpec s = {};
        s.format = AUDIO_S16SYS;  // 假设系统中音频数据的格式总是使用16位有符号数来表示
        s.userdata = NULL;        // 不使用
        s.callback = audio_callback;  // 设置音频回调函数

        s.channels = audio_base[reg_channels];
        s.samples = audio_base[reg_samples];
        s.freq = audio_base[reg_freq];
        if (audio_base[reg_channels] == 0 || audio_base[reg_samples] == 0 || audio_base[reg_freq] == 0) {
          return;
        }

        SDL_InitSubSystem(SDL_INIT_AUDIO);
        if (SDL_OpenAudio(&s, NULL) < 0) {
          printf("SDL_OpenAudio failed: %s\n", SDL_GetError());
          break;
        }
        SDL_PauseAudio(0);
        printf("channels=%d\n",audio_base[reg_channels]);
        printf("samples=%d\n",audio_base[reg_samples]);
        printf("freq=%d\n",audio_base[reg_freq]);
        // audio_base[reg_count] += audio_base[reg_samples]*4;
        break;
    case reg_count:
        // printf("count=%d\n",audio_base[reg_count]);
      break;
    case reg_sbuf_size:
      if (is_write) {
        // 更新缓冲区大小并重置播放位置
        SDL_PauseAudio(0);
        audio_base[reg_count] += audio_base[reg_samples]*4;
        // printf("start %d,%d\n",audio_base[reg_count],play_pos);

      }
      break;
    case nr_reg:
      printf("reg=%d\n",audio_base[nr_reg]);
      break;
  }
}

void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("audio", CONFIG_AUDIO_CTL_PORT, audio_base, space_size, audio_io_handler);
#else
  add_mmio_map("audio", CONFIG_AUDIO_CTL_MMIO, audio_base, space_size, audio_io_handler);
#endif

  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);
  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);
  // 初始化状态
  audio_base[reg_count] = 0;
  play_pos = 0;
  buf_size = 0;
}
