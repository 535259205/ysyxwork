#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 0x8:  // 机器模式下的ecall指令
        // 检查a7寄存器的值，确定是yield请求
        #ifdef __riscv_e
        if (c->gpr[15] == -1) 
        #else
        if (c->gpr[17] == -1)   // x17是a7寄存器
        #endif
        {
          ev.event = EVENT_YIELD; // event 暂时好像没用在这个yieldos里面
        }
        else
        {
          ev.event = EVENT_SYSCALL;
        }
        break;
      default: ev.event = EVENT_ERROR; break;
    }
    c = user_handler(ev, c);
    assert(c != NULL);
  }
  return c;
}


extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  // 写入异常处理入口地址到mtvec CSR寄存器
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}
#define CONTEXT_SIZE  ((NR_REGS + 3) * sizeof(uintptr_t))

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  //底部创建kcontext结构
  Context *ctx = (Context *)((uintptr_t)kstack.end - sizeof(Context));
  // 初始化所有通用寄存器为0
  for (int i = 0; i < NR_REGS; i++) {
    ctx->gpr[i] = 0;
  }
  
  // 设置参数寄存器 A0
  ctx->gpr[10] = (uintptr_t)arg;  // a0寄存器保存调用函数的第一个参数指针
  ctx->gpr[2] = (uintptr_t)kstack.end;

  ctx->mcause = 0;
  ctx->mstatus = (1 << 11);  // MIE = 1
  //要设置mepc为入口函数的地址
  ctx->mepc = (uintptr_t)entry;
  
  return ctx;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
