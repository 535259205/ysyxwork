#include <stdio.h>
#include "vpi_user.h"
#include "stdint.h"

#define ROM_SIZE 0x1000000
#define SDRAM_SIZE 0x100000
#define PSRAM_SIZE 0x8000000

uint32_t ROM_data[ROM_SIZE];
uint32_t SDRAM_data[SDRAM_SIZE];
uint32_t psram[PSRAM_SIZE];

enum{
    FLASH = 0,
    SDRAM = 1,
    PSRAM = 2,
    MEM_R = 3,
    MEM_W = 4,
};

void init_ROM(){
    FILE *fp = NULL;
    fp = fopen("./hex/test.bin", "r");
    if (fp == NULL) {
        vpi_printf("ERROR: Failed to open test.bin file\n");
        return;
    }
    fread(ROM_data, sizeof(uint32_t), ROM_SIZE, fp);
    fclose(fp);
}

extern int32_t sdram_api(int32_t addr, int32_t data, int32_t write, uint32_t *sdram);
extern int32_t psram_api(int32_t addr, int32_t data, int32_t write, uint32_t *psram);
extern int32_t mem_r_api(int32_t addr, int32_t len, uint32_t *rom); 
extern void mem_w_api(int32_t data, int32_t addr, int32_t len, uint32_t *rom);  

PLI_INT32 mem_ctr_calltf(PLI_BYTE8 *user_data) {
    vpiHandle systf_ref, args_iter, arg_h;
    s_vpi_value val;
    uint32_t sel,addr, data, write ,rdata;

    // systf_ref = t_cb_data->obj;
    systf_ref = vpi_handle(vpiSysTfCall, NULL);
    args_iter = vpi_iterate(vpiArgument, systf_ref);
    if (args_iter == NULL) {
        vpi_printf("ERROR: $ram_operation requires 3 arguments.\n");
        return 0;
    }

    arg_h = vpi_scan(args_iter);
    val.format = vpiIntVal;
    vpi_get_value(arg_h, &val);
    sel = val.value.integer;

    arg_h = vpi_scan(args_iter);
    val.format = vpiIntVal;
    vpi_get_value(arg_h, &val);
    addr = val.value.integer;

    arg_h = vpi_scan(args_iter);
    val.format = vpiIntVal;
    vpi_get_value(arg_h, &val);
    data = val.value.integer;

    arg_h = vpi_scan(args_iter);
    val.format = vpiIntVal;
    vpi_get_value(arg_h, &val);
    write = val.value.integer;
    // printf("sel=%d, addr=0x%08x, data=0x%08x, write=%d\n", sel, addr, data, write);
    switch(sel){
        case FLASH:
            rdata=ROM_data[addr>>2];
            break;
        case SDRAM:
            rdata=sdram_api(addr, data, write, SDRAM_data);
            break;
        case PSRAM:
            rdata=psram_api(addr, data, write, psram);
            break;
        case MEM_R:
        if(addr==0x30000000){
            rdata = 0x800002b7;
        }else if(addr==0x30000004){
            rdata = 0x00028067;
        }else if(addr>=0x30000004 && addr<0x30000100){
            rdata = 0x13;
        }else{
            rdata=mem_r_api(addr, write, ROM_data);
        }
            break;
        case MEM_W:
            if(addr==0x10000000)
            {
                putchar(data);
                break;
            }
            mem_w_api(data, addr, write, ROM_data);
            break;
        default:
            printf("ERROR: $mem_ctr\n");
        break;
    }
        // printf("%08x\n", addr);
    // 设置返回值
    val.format = vpiIntVal;
    val.value.integer = (PLI_INT32)rdata;   // 返回 32 位值（注意有符号/无符号转换）
    vpi_put_value(systf_ref, &val, NULL, vpiNoDelay);

    return 0;
}

uint32_t debug_data[1024]={0};



PLI_INT32 sys_ctr_calltf(PLI_BYTE8 *user_data)
{
    vpiHandle systf_ref, args_iter, arg_h;
    s_vpi_value val;
    uint32_t addr,data,result=0;

    // systf_ref = t_cb_data->obj;
    systf_ref = vpi_handle(vpiSysTfCall, NULL);
    args_iter = vpi_iterate(vpiArgument, systf_ref);
    if (args_iter == NULL) {
        vpi_printf("ERROR: $ram_operation requires 3 arguments.\n");
        return 0;
    }

    arg_h = vpi_scan(args_iter);
    val.format = vpiIntVal;
    vpi_get_value(arg_h, &val);
    addr = val.value.integer;

    arg_h = vpi_scan(args_iter);
    val.format = vpiIntVal;
    vpi_get_value(arg_h, &val);
    data = val.value.integer;

    debug_data[addr] = data;
    if(addr==800){
        printf("\n\nEBREAK\n");
        vpi_control(vpiFinish, 0);
    }
    if(addr==999){
        putchar(data);
    }

    // 设置返回值
    val.format = vpiIntVal;
    val.value.integer = (PLI_INT32)result;   // 返回 32 位值（注意有符号/无符号转换）
    vpi_put_value(systf_ref, &val, NULL, vpiNoDelay);

    return 0;
}

// VPI 注册函数
void register_test_function() {
    s_vpi_systf_data tf_data;

    init_ROM();
    // 注册 RAM 读函数
    tf_data.type = vpiSysFunc;
    tf_data.sysfunctype = vpiIntFunc;  // 返回整型
    tf_data.tfname = "$mem_ctr";
    tf_data.calltf = mem_ctr_calltf;
    tf_data.compiletf = NULL;
    tf_data.sizetf = NULL;
    tf_data.user_data = NULL;
    vpi_register_systf(&tf_data);

    //系统操作函数
    tf_data.type = vpiSysFunc;
    tf_data.sysfunctype = vpiIntFunc;  // 返回整型
    tf_data.tfname = "$sys_ctr";
    tf_data.calltf = sys_ctr_calltf;
    tf_data.compiletf = NULL;
    tf_data.sizetf = NULL;
    tf_data.user_data = NULL;
    vpi_register_systf(&tf_data);

}

// VPI 入口点
void (*vlog_startup_routines[])() = {
    register_test_function,
    NULL
};