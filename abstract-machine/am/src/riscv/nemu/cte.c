#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

//C实际就是栈指针 然后从yield触发ecall后开始传递
Context* __am_irq_handle(Context *c) {
  // if (user_handler) {
    if(1){
    Event ev = {0};
    switch (c->mcause) {
      case 0x08:
        // 检查a7寄存器的值，确定是yield请求
        if (c->GPR1 == -1)   // x17是a7寄存器
        {
          ev.event = EVENT_YIELD;
        } else {
          ev.event = EVENT_SYSCALL;
        }
        break;
      default: 
          ev.event = EVENT_ERROR; 
          printf("ERROR: mcause is %d\n", c->mcause);
      break;
    }
    c = user_handler(ev, c);
    assert(c != NULL);
  }
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  // 设置异常入口地址为__am_asm_trap
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}
Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {

  //底部创建kcontext结构
  Context *ctx = (Context *)((uintptr_t)kstack.end - sizeof(Context));
  // 初始化所有通用寄存器为0
  for (int i = 0; i < NR_REGS; i++) {
    ctx->gpr[i] = 0;
  }

  // 设置参数寄存器 A0
  ctx->gpr[10] = (uintptr_t)arg;  // a0寄存器保存调用函数的第一个参数指针
  //栈指针
  ctx->gpr[2] = (uintptr_t)ctx;
  // ctx->gpr[2] =((uintptr_t)kstack.end - sizeof(Context));
  ctx->mcause = 0x08;
  ctx->mstatus = 0x00202122;  // MIE = 1
  // 要设置mepc为入口函数的地址 mret会进行如果mepc+4
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
