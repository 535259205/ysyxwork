#include <common.h>
#include <isa.h>
#include "sdb.h"

#define ETRACE_BUF_LEN 20

// 只定义中断记录结构体
typedef struct {
  word_t intr_no;     // 中断/异常编号
  vaddr_t epc;        // 异常程序计数器
  vaddr_t mtvec;      // 中断向量表基址
  vaddr_t mcause;     // 异常原因寄存器
  uint64_t timestamp; // 记录时间戳（可选）
} etrace_entry_t;

static etrace_entry_t etrace_buf[ETRACE_BUF_LEN];
static int etrace_head = 0;
static int etrace_tail = 0;
static int etrace_count = 0;

// 记录中断信息的函数
void etrace_add_intr(word_t intr_no, vaddr_t epc, vaddr_t mtvec) {
  etrace_entry_t *entry = &etrace_buf[etrace_head];
  
  // 填充中断信息
  entry->intr_no = intr_no;
  entry->epc = epc;
  entry->mtvec = mtvec;
  entry->mcause = cpu.mcause;
  // 简单的时间戳实现，可以根据需要调整
  static uint64_t counter = 0;
  entry->timestamp = counter++;

  // 更新环形缓冲区指针
  etrace_head = (etrace_head + 1) % ETRACE_BUF_LEN;
  if (etrace_count < ETRACE_BUF_LEN) {
    etrace_count++;
  } else {
    etrace_tail = (etrace_tail + 1) % ETRACE_BUF_LEN;
  }
}

// 显示所有中断记录
void etrace_show() {
  if (etrace_count == 0) {
    puts("etrace buffer is empty\n");
    return;
  }

  puts("Interrupt Trace Buffer:");
  puts("Timestamp | Intr No | EPC         | MTVEC       | MCAUSE");
  puts("----------|---------|-------------|-------------|-------");
  
  int current = etrace_tail;
  for (int i = 0; i < etrace_count; i++) {
    etrace_entry_t *entry = &etrace_buf[current];
    printf("%-10lu| %-7d| 0x%08x | 0x%08x | 0x%08x\n",
           entry->timestamp, entry->intr_no, entry->epc, 
           entry->mtvec, entry->mcause);
    current = (current + 1) % ETRACE_BUF_LEN;
  }
}

// 清空中断记录缓冲区
void etrace_clear() {
  etrace_head = 0;
  etrace_tail = 0;
  etrace_count = 0;
}
