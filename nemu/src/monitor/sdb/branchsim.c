#include "stdio.h"
#include "string.h"
#include "common.h"
#include "stdint.h"

// 分支预测器配置
#define BTB_SIZE 1024  // BTB条目数
#define BHT_SIZE 1024  // BHT条目数
#define PHT_SIZE 256   // PHT条目数
#define GHR_SIZE 12    // 全局历史寄存器大小

// 分支目标缓冲区(BTB)条目
typedef struct {
    uint32_t tag;      // 地址标签
    uint32_t target;   // 目标地址
    uint8_t valid;     // 有效位
} BTBEntry;

// 分支历史表(BHT)条目
typedef struct {
    uint8_t counter;   // 2位饱和计数器 (00:强不跳转, 01:弱不跳转, 10:弱跳转, 11:强跳转)
} BHTEntry;

// 模式历史表(PHT)条目
typedef struct {
    uint8_t counter;   // 2位饱和计数器
} PHTEntry;

// 全局历史寄存器
uint32_t ghr = 0;     // 全局分支历史

// 预测器状态
BTBEntry btb[BTB_SIZE];
BHTEntry bht[BHT_SIZE];
PHTEntry pht[PHT_SIZE];

// 统计信息
uint32_t branch_count = 0;
uint32_t branch_target = 0;
uint32_t correct_predictions = 0;
uint32_t btb_hits = 0;
uint32_t btb_misses = 0;

// 初始化分支预测器
void branch_predictor_init() {
    memset(btb, 0, sizeof(btb));
    memset(bht, 0, sizeof(bht));
    memset(pht, 0, sizeof(pht));
    ghr = 0;
    branch_count = 0;
    correct_predictions = 0;
    btb_hits = 0;
    btb_misses = 0;
}

// BTB哈希函数
uint32_t btb_hash(uint32_t pc) {
    return (pc >> 2) & (BTB_SIZE - 1);
}

// BHT哈希函数
uint32_t bht_hash(uint32_t pc) {
    return (pc >> 2) & (BHT_SIZE - 1);
}

// PHT哈希函数（结合PC和GHR）
uint32_t pht_hash(uint32_t pc) {
    return ((pc >> 2) ^ ghr) & (PHT_SIZE - 1);
}

// 基于BHT的预测
uint8_t bht_predict(uint32_t pc) {
    uint32_t index = bht_hash(pc);
    return (bht[index].counter >= 2); // >=2表示预测跳转
}

// 基于PHT的预测（两级自适应预测器）
uint8_t pht_predict(uint32_t pc) {
    uint32_t index = pht_hash(pc);
    return (pht[index].counter >= 2); // >=2表示预测跳转
}

// 更新BHT计数器
void update_bht(uint32_t pc, uint8_t taken) {
    uint32_t index = bht_hash(pc);
    if (taken) {
        if (bht[index].counter < 3) bht[index].counter++;
    } else {
        if (bht[index].counter > 0) bht[index].counter--;
    }
}

// 更新PHT计数器
void update_pht(uint32_t pc, uint8_t taken) {
    uint32_t index = pht_hash(pc);
    if (taken) {
        if (pht[index].counter < 3) pht[index].counter++;
    } else {
        if (pht[index].counter > 0) pht[index].counter--;
    }
}

// 更新全局历史寄存器
void update_ghr(uint8_t taken) {
    ghr = ((ghr << 1) | taken) & ((1 << GHR_SIZE) - 1);
}

// 查询BTB获取目标地址
uint32_t btb_query(uint32_t pc) {
    uint32_t index = btb_hash(pc);
    if (btb[index].valid && btb[index].tag == (pc & ~(BTB_SIZE - 1))) {
        btb_hits++;
        return btb[index].target;
    }
    btb_misses++;
    return 0; // 返回0表示BTB未命中
}

// 更新BTB
void update_btb(uint32_t pc, uint32_t target) {
    uint32_t index = btb_hash(pc);
    btb[index].tag = pc & ~(BTB_SIZE - 1);
    btb[index].target = target;
    btb[index].valid = 1;
}

// 分支预测主函数
uint32_t branch_predict(uint32_t pc) {
    // 首先查询BTB
    uint32_t target = btb_query(pc);
    if (target != 0) {
        // BTB命中，使用PHT进行预测
        if (pht_predict(pc)) {
            return target; // 预测跳转
        }
    }
    return pc + 4; // 预测不跳转或BTB未命中，返回顺序下一条指令
}

// 分支训练函数
void branch_train(uint32_t pc, uint32_t target, uint8_t taken) {
    branch_count++;
    
    // 获取预测结果
    uint32_t predicted_target = btb_query(pc);
    uint8_t predicted_taken = (predicted_target != 0 && pht_predict(pc));
    
    // 统计预测准确性
    if (predicted_taken == taken) {
        correct_predictions++;
    }
    
    // 更新预测器状态
    if (taken) {
        // 分支实际跳转
        if (predicted_target == 0 || predicted_target != target) {
            // BTB未命中或目标地址错误，更新BTB
            update_btb(pc, target);
        }
    }
    
    // 更新BHT和PHT
    update_bht(pc, taken);
    update_pht(pc, taken);
    
    // 更新全局历史寄存器
    update_ghr(taken);
}

// 分支仿真主函数
void branch_sim(uint32_t snpc, uint32_t dnpc) {
    if (snpc == dnpc) {
        return; // 顺序执行，不是分支
    }
    
    // 检测到分支，进行训练
    uint8_t taken = (dnpc != snpc + 4);
    branch_train(snpc, dnpc, taken);
}

// 打印分支预测统计信息
void branch_statistics() {
    if (branch_count > 0) {
        float accuracy = (float)correct_predictions / branch_count * 100;
        float btb_hit_rate = (float)btb_hits / (btb_hits + btb_misses) * 100;
        
        printf("=== 分支预测统计 ===\n");
        printf("分支指令总数: %u\n", branch_count);
        printf("正确预测次数: %u\n", correct_predictions);
        printf("预测准确率: %.2f%%\n", accuracy);
        printf("BTB命中次数: %u\n", btb_hits);
        printf("BTB未命中次数: %u\n", btb_misses);
        printf("BTB命中率: %.2f%%\n", btb_hit_rate);
        printf("全局历史寄存器: 0x%03x\n", ghr);
    }
}