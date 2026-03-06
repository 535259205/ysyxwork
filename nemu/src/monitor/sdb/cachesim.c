#include "stdio.h"
#include "string.h"
#include "common.h"
#include "stdint.h"

#define IS_POWER_OF_TWO(x) (((x) > 0) && !((x) & ((x) - 1)))

#define CACHE_X_LEN 4
#define CACHE_Y_LEN 4

#if !IS_POWER_OF_TWO(CACHE_X_LEN)
#error "错误:CACHE_X_LEN 必须是2的幂! 比如2/4/8/16"
#endif
#if !IS_POWER_OF_TWO(CACHE_Y_LEN)
#error "错误:CACHE_Y_LEN 必须是2的幂! 比如2/4/8/16"
#endif

uint32_t cache_valid[CACHE_Y_LEN];

uint32_t no_cnt=0;
uint32_t tag;

void cache_add(uint32_t pc)
{
    int i;
    uint32_t logx = __builtin_ctz(CACHE_X_LEN);
    uint32_t logy=__builtin_ctz(CACHE_Y_LEN);
    uint32_t now_tag,now_offset,now_index;
    now_tag = pc >> 2;
    now_offset = now_tag&(CACHE_X_LEN-1);
    now_offset = now_offset;
    now_index = (now_tag >> (logx)) & (CACHE_Y_LEN - 1);
    now_tag = now_tag>>(logy+logx);

    if(now_tag!=tag)
    {
        for (i = 0; i < CACHE_Y_LEN; i++)
            cache_valid[i] = 0;
        no_cnt++;
        cache_valid[now_index] = 1;
        tag=now_tag;
    }else if(!cache_valid[now_index]){
        cache_valid[now_index] = 1;
        no_cnt++;
    }
}
void show_cache()
{
    printf("cache: no_cnt=%d\n",no_cnt);
}