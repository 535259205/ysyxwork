#include <iostream>
// #include "../obj_dir/VTOPmod.h"
#include "../obj_dir/VysyxSoCFull.h"

#include "verilated_vcd_c.h"
#include "verilated.h"
#include "stdio.h"
#include "sdb.h"
#include "debug.h"
#include <fcntl.h>
#include <unistd.h>
#include <string>


#define USE_WAVE1 0
#define WAVE_START (15000*0)
#define SHOW_LIMIT 10
#define USE_ITRACE 0
#define USE_FTRACE 0
#define USE_DIFFTEST 0
#define OVER_CNT   UINT32_MAX


// VTOPmod *dut = new VTOPmod();
VysyxSoCFull *dut = new VysyxSoCFull();

vluint64_t sim_time = 0;
VerilatedVcdC *m_trace = new VerilatedVcdC();

// DLL=1, 16x 过采样 → 每 bit 16 个时钟周期
static int16_t     uart_divisor     = 16;
static int16_t     uart_divisor_cnt = 15;
static int         rx_state         = 0;  // 0=idle 1-8=data 9=stop
static uint8_t     rx_data          = 0;
static std::string rx_buf;

static void uart_rx_getchar(uint8_t ch) { rx_buf += ch; }

// 非阻塞读 stdin，把字符压入 rx_buf
static void poll_stdin() {
  int c;
  while ((c = getchar_unlocked()) != EOF)
    uart_rx_getchar((uint8_t)c);
}

//返回当前应驱动到 uart_rx 引脚的电平
static uint8_t uart_rx_tick() {
  poll_stdin();

  if (--uart_divisor_cnt >= 0)          // 尚未到 bit 边界，保持现有电平
    return dut->externalPins_uart_rx;

  uart_divisor_cnt = uart_divisor - 1;  // 重装计数器

  if (rx_state == 0) {                  // idle
    if (rx_buf.empty()) return 1;
    rx_data = rx_buf[0]; rx_buf.erase(0, 1);
    rx_state = 1;
    return 0;                           // start bit
  } else if (rx_state <= 8) {           // data bits，LSB first
    uint8_t bit = rx_data & 1;
    rx_data >>= 1; rx_state++;
    return bit;
  } else {                              // stop bit
    rx_state = 0;
    return 1;
  }
}
// -----------------------------------------------------------

extern int ebreak_flag;
static struct SdbReg infoa;
extern int step_flag;
extern void change_step_flag(int step_data);
extern void info_exu(struct cpuex_info * info);

int SimStep(uint32_t n)
{
    for(uint32_t i = 0; i < n; i++){
        extern void info_reg(struct SdbReg * info);
        extern void DisasmEncode(struct SdbReg * info,uint32_t len);
        info_reg(&infoa);
        DisasmEncode(&infoa,1);
        if(n<=SHOW_LIMIT){
            extern void iringbuf_shownow(void);
            iringbuf_shownow();
        }
        #if USE_FTRACE
        extern void FtraceScan(struct SdbReg *info);
        FtraceScan(&infoa);
        #endif
        //差分测试运行一步
        #if USE_DIFFTEST
        extern int difftest_exec_reg(struct SdbReg *info);
        if(!difftest_exec_reg(&infoa)){//此时报错
            return 1;
        }
        #endif

        static int count=0;
        count++;
        if(count%1000==0)
        {
            // printf("count is %d\n", count);
        }
        if (ebreak_flag)
        {
            ebreak:
            struct cpuex_info infoex;
            info_exu(&infoex);
            uint64_t cycle = ((uint64_t)(infoa.cycle_h)<<32)|infoa.cycle_l;
            printf("\nebreak_flag is set at count %d\n", count);
            printf("Cycle is %ld\n", cycle);
            printf("IFU_cnt is %d\n", infoex.IFU_cnt);
            printf("IDU_cnt is %d\n", infoex.IDU_cnt);
            printf("EXU_cnt is %d\n", infoex.EXU_cnt);
            printf("IPC is %f\n", (float)count/cycle);
            return 1;
        }
        for (;;)
        {
            for (int j = 0; j < 2; j++)
            {
            dut->clock=!dut->clock;
            if (dut->clock) dut->externalPins_uart_rx = uart_rx_tick();
            dut->eval();
            #if USE_WAVE1
            if(sim_time>=WAVE_START)
            {
            sim_time++;
            m_trace->dump(sim_time); //将当前时间点的信号值写入波形文件
            }

            if(sim_time>=OVER_CNT)
            {
                printf("sim_time is %ld\n", sim_time);
                printf("over %d cycles\n", OVER_CNT);
                return 1;
            }
            #endif
            }
            if(ebreak_flag){
                goto ebreak;
            }
            if(step_flag>=1)
            {
                change_step_flag(step_flag-1);
                break;
            }
        }
    }
    return 0;

}




void SimInit(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
#if USE_WAVE1
    Verilated::traceEverOn(true);
    dut->trace(m_trace, 1); //顶层类设置测试波形参数
    m_trace->open("./waveform.vcd"); //设置波形写入的文件
#endif
    //初始化difftest寄存器
    #if USE_DIFFTEST
    extern void difftest_reg_init(void);
    difftest_reg_init();
    #endif

    fcntl(STDIN_FILENO, F_SETFL, O_NONBLOCK);  // stdin 非阻塞
    dut->externalPins_uart_rx = 1;             // 空闲电平为高

    //设备复位
    for(int i=0;i<=3000-1;i++){
        dut->clock=!dut->clock;
        dut->reset = 1;
        dut->eval();
#if USE_WAVE1
        m_trace->dump(sim_time); //将当前时间点的信号值写入波形文件
#endif
        sim_time++;
    }
    dut->reset = 0;
    
}

void SimEnd(void)
{
#if USE_WAVE1
    m_trace->close();
#endif
    delete m_trace;
    dut->final();
    delete dut;
}