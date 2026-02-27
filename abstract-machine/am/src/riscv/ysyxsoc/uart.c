#include <am.h>
#include <klib-macros.h>

#define UART_BASE 0x10000000
#define UART_TX   0x00      //发送数据偏移地址
#define UART_DLL  0
#define UART_DLM  1
#define UART_LCR  3
#define UART_IIR  1
#define UART_LSR  0x05      // 线路状态寄存器 (LSR)，偏移 5
#define UART_FCR     0x02    // FIFO 控制寄存器 (新增)

#define LSR_THRE     (1 << 5)




void uart_init(void)
{
    volatile char *uart = (volatile char *)UART_BASE;
    // // 第一步：配置除数寄存器好像不是波特率的原因应该是FIFO的原因
    // *(uart+0) = '0';
    // *(uart+1) = '1';
    // *(uart+2) = '2';
    // *(uart+3) = '3';
    // *(uart+4) = '4';
    uart[UART_LCR] = 0x83;//开启配置除数寄存器
    uart[UART_DLM] = 0x00;//配置除数寄存器
    uart[UART_DLL] = 0x01;
    uart[UART_LCR] = 0x03;//关闭配置除数寄存器
    uart[UART_FCR] = 0xFF;  // 清空发送和接收FIFO
    uart[UART_FCR] = 0x01;  // 清空发送和接收FIFO

}
void uart_putch(char ch)
{
  // volatile char *uart = (volatile char *)UART_BASE;
  volatile char *tx_reg =  (volatile char *)(UART_BASE + UART_TX);

  volatile char *lsr_reg = (volatile char *)(UART_BASE + UART_LSR);
  while((((*lsr_reg)>>6)&0x01)==0);

  *tx_reg = ch; // 发送字符
}
char uart_getch(void)
{
  volatile char *rx_reg = (volatile char *)(UART_BASE + UART_TX);
  volatile char *lsr_reg = (volatile char *)(UART_BASE + UART_LSR);
  if(((*lsr_reg) & 0x01) ==0){
    return 0xFF;
  }else{
    return *rx_reg;
  }
  // while(((*lsr_reg)>>0)&0x01)==0);
  // return *rx_reg;
}