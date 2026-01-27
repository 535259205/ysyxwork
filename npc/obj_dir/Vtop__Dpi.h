// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/fun/step_fun.v:6:30
    extern void SimStep1(int step_data);
    // DPI import at vsrc/fun/debug_fun.v:10:30
    extern void debug(int addr, int data);
    // DPI import at vsrc/fun/ebreak_fun.v:7:30
    extern void ebreak(int test);
    // DPI import at vsrc/fun/mem_fun.v:19:29
    extern int mem_r(int addr, int len);
    // DPI import at vsrc/fun/mem_fun.v:18:30
    extern void mem_w(int data, int addr, int len);

#ifdef __cplusplus
}
#endif

#endif  // guard
