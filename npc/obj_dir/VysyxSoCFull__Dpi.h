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
    // DPI import at vsrc/fun/step_fun.v:7:30
    extern void SimStep1(int step_data);
    // DPI import at vsrc/fun/debug_fun.v:12:30
    extern void debug(int addr, int data);
    // DPI import at vsrc/fun/ebreak_fun.v:8:30
    extern void ebreak(int test);
    // DPI import at ../WORK/ysyxSoC/perip/flash/flash.v:99:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../WORK/ysyxSoC/perip/sdram/sdram.v:16:29
    extern int sdram_ctr(int addr, int data, int write);

#ifdef __cplusplus
}
#endif

#endif  // guard
