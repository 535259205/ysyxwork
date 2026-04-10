// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc/fun/step_fun.v:9:30
    extern void SimStep1(int step_data);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc/fun/debug_fun.v:10:30
    extern void debug(int addr, int data);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc/fun/ebreak_fun.v:9:30
    extern void ebreak(int test);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../ysyxSoC/perip/flash/flash.v:91:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../ysyxSoC/build/ysyxSoCFull.v:5543:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../ysyxSoC/perip/psram/psram.v:7:29
    extern int psram_ctr(int addr, int data, int write);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../ysyxSoC/perip/sdram/sdram.v:17:29
    extern int sdram_ctr(int addr, int data, int write);

#ifdef __cplusplus
}
#endif

#endif  // guard
