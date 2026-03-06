#include "stdio.h"
#include "string.h"
#include "common.h"
#include "stdint.h"

#define IS_POWER_OF_TWO(x) (((x) > 0) && !((x) & ((x) - 1)))
#define CACHE_MODE 3
#if CACHE_MODE==1
//使用直接映射缓存
#elif CACHE_MODE==2
//使用全相联缓存
#elif CACHE_MODE==3
//使用组相联缓存
#else
#error "错误:不支持的缓存模式"
#endif

#define CACHE_X_LEN 4
#define CACHE_Y_LEN 4
#define CACHE_GROUP 4

#if !IS_POWER_OF_TWO(CACHE_X_LEN)
#error "错误:CACHE_X_LEN 必须是2的幂! 比如2/4/8/16"
#endif
#if !IS_POWER_OF_TWO(CACHE_Y_LEN)
#error "错误:CACHE_Y_LEN 必须是2的幂! 比如2/4/8/16"
#endif
#if !IS_POWER_OF_TWO(CACHE_GROUP)
#error "错误:CACHE_GROUP 必须是2的幂! 比如2/4/8/16"
#endif


uint32_t no_cnt=0;
void cache_add_M3(uint32_t pc)
{
    static uint32_t tag[CACHE_GROUP];
    static uint32_t tag_index;
    int i;
    uint32_t logx = __builtin_ctz(CACHE_X_LEN);
    uint32_t logy=__builtin_ctz(CACHE_Y_LEN);
    uint32_t real_pc=pc>>2;
    uint32_t now_tag;
    now_tag = real_pc>>(logx+logy);

    for(i=0;i<CACHE_GROUP;i++)
    {
        if(tag[i]==now_tag)
        {
            break;
        }
    }
    if(i==(CACHE_GROUP))
    {
        tag[tag_index]=now_tag;
        tag_index=(tag_index+1)%CACHE_GROUP;
        no_cnt++;
    }
}


void cache_add_M2(uint32_t pc)
{
    static uint32_t tag[CACHE_Y_LEN];
    static uint32_t tag_index = 0;
    int i;

    uint32_t logx = __builtin_ctz(CACHE_X_LEN);
    uint32_t real_pc=pc>>2;
    uint32_t now_tag;
    now_tag = real_pc>>(logx);

    for(i=0;i<CACHE_Y_LEN;i++)
    {
        if(tag[i]==now_tag)
        {
            break;
        }
    }
    if(i==(CACHE_Y_LEN))
    {
        tag[tag_index]=now_tag;
        tag_index=(tag_index+1)%CACHE_Y_LEN;
        no_cnt++;
    }
}

void cache_add(uint32_t pc)
{
    #if CACHE_MODE==2
    cache_add_M2(pc);
    #elif CACHE_MODE==3
    cache_add_M3(pc);
    return;
    #endif

    int i;
    static uint32_t tag;
    static uint8_t cache_valid[CACHE_Y_LEN];
    uint32_t logx = __builtin_ctz(CACHE_X_LEN);
    uint32_t logy=__builtin_ctz(CACHE_Y_LEN);
    uint32_t now_tag,now_index;
    now_tag = pc >> 2;
    now_index = (now_tag >> (logx)) & (CACHE_Y_LEN - 1);
    now_tag = now_tag>>(logy+logx);

    if(now_tag!=tag)
    {
        for (i = 0; i < CACHE_Y_LEN; i++)
            cache_valid[i] = 0;
        tag=now_tag;
    }
    if(!cache_valid[now_index]){
        cache_valid[now_index] = 1;
        no_cnt++;
    }
}
void show_cache()
{
    printf("cache: no_cnt=%d\n",no_cnt);
}