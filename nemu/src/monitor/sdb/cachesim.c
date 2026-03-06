#include "stdio.h"
#include "string.h"
#include "common.h"
#include "stdint.h"

#define IS_POWER_OF_TWO(x) (((x) > 0) && !((x) & ((x) - 1)))
#define CACHE_MODE 1 // 1: 直接映射, 2: 全相联, 3: 组相联
#define SET_ASSOCIATIVE_WAYS 2 // 组相联的路数

#if CACHE_MODE==1
//使用直接映射缓存
#elif CACHE_MODE==2
//使用全相联缓存
#elif CACHE_MODE==3
//使用组相联缓存
#else
#error "错误:不支持的缓存模式"
#endif

#define CACHE_X_LEN 4 // 块大小
#define CACHE_Y_LEN 4 // 缓存大小

#if !IS_POWER_OF_TWO(CACHE_X_LEN)
#error "错误:CACHE_X_LEN 必须是2的幂! 比如2/4/8/16"
#endif
#if !IS_POWER_OF_TWO(CACHE_Y_LEN)
#error "错误:CACHE_Y_LEN 必须是2的幂! 比如2/4/8/16"
#endif

// 缓存结构
#if CACHE_MODE == 1 || CACHE_MODE == 3
uint32_t cache_valid[CACHE_Y_LEN];
uint32_t cache_tags[CACHE_Y_LEN];
#elif CACHE_MODE == 2
uint32_t cache_valid[CACHE_Y_LEN];
uint32_t cache_tags[CACHE_Y_LEN];
#endif

// 组相联缓存的组信息
#if CACHE_MODE == 3
#define SET_COUNT (CACHE_Y_LEN / SET_ASSOCIATIVE_WAYS)
#endif

uint32_t no_cnt=0; // 未命中次数
uint32_t hit_cnt=0; // 命中次数

void cache_add(uint32_t pc)
{
    uint32_t logx = __builtin_ctz(CACHE_X_LEN);
    uint32_t now_tag;
    
    now_tag = pc >> 2;
    // now_offset 暂时未使用，注释掉避免警告
    // uint32_t now_offset = now_tag & (CACHE_X_LEN - 1);
    
#if CACHE_MODE == 1 // 直接映射
    uint32_t now_index;
    now_index = (now_tag >> logx) & (CACHE_Y_LEN - 1);
    now_tag = now_tag >> (logx + __builtin_ctz(CACHE_Y_LEN));
    
    if (cache_valid[now_index] && cache_tags[now_index] == now_tag) {
        hit_cnt++;
    } else {
        no_cnt++;
        cache_valid[now_index] = 1;
        cache_tags[now_index] = now_tag;
    }
    
#elif CACHE_MODE == 2 // 全相联
    int i, found;
    now_tag = now_tag >> logx;
    found = 0;
    
    for (i = 0; i < CACHE_Y_LEN; i++) {
        if (cache_valid[i] && cache_tags[i] == now_tag) {
            hit_cnt++;
            found = 1;
            break;
        }
    }
    
    if (!found) {
        no_cnt++;
        // 简单的替换策略：找到第一个无效的位置，否则替换第一个
        for (i = 0; i < CACHE_Y_LEN; i++) {
            if (!cache_valid[i]) {
                cache_valid[i] = 1;
                cache_tags[i] = now_tag;
                break;
            }
        }
        if (i == CACHE_Y_LEN) {
            // 所有位置都有效，替换第一个
            cache_tags[0] = now_tag;
        }
    }
    
#elif CACHE_MODE == 3 // 组相联
    int found;
    uint32_t now_index, set_index, way_index;
    set_index = (now_tag >> logx) & (SET_COUNT - 1);
    now_tag = now_tag >> (logx + __builtin_ctz(SET_COUNT));
    found = 0;
    
    // 在组内查找
    for (way_index = 0; way_index < SET_ASSOCIATIVE_WAYS; way_index++) {
        now_index = set_index * SET_ASSOCIATIVE_WAYS + way_index;
        if (cache_valid[now_index] && cache_tags[now_index] == now_tag) {
            hit_cnt++;
            found = 1;
            break;
        }
    }
    
    if (!found) {
        no_cnt++;
        // 在组内找到第一个无效的位置，否则替换第一个
        for (way_index = 0; way_index < SET_ASSOCIATIVE_WAYS; way_index++) {
            now_index = set_index * SET_ASSOCIATIVE_WAYS + way_index;
            if (!cache_valid[now_index]) {
                cache_valid[now_index] = 1;
                cache_tags[now_index] = now_tag;
                break;
            }
        }
        if (way_index == SET_ASSOCIATIVE_WAYS) {
            // 组内所有位置都有效，替换第一个
            now_index = set_index * SET_ASSOCIATIVE_WAYS;
            cache_tags[now_index] = now_tag;
        }
    }
#endif
}

void show_cache()
{
    uint32_t total = hit_cnt + no_cnt;
    float hit_rate = total > 0 ? (float)hit_cnt / total * 100 : 0;
    printf("cache: hit_cnt=%d, no_cnt=%d, hit_rate=%.2f%%\n", hit_cnt, no_cnt, hit_rate);
    
#if CACHE_MODE == 3
    printf("Set associative cache: %d ways, %d sets\n", SET_ASSOCIATIVE_WAYS, SET_COUNT);
#endif
}