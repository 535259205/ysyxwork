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
    // DPI import at vsrc/fun/debug_fun.v:10:30
    extern void debug(int addr, int data);
    // DPI import at vsrc/fun/ebreak_fun.v:7:30
    extern void ebreak(int test);
    // DPI import at vsrc/fun/mem_fun.v:20:29
    extern int mem_r(int addr, int len);
    // DPI import at vsrc/fun/mem_fun.v:19:30
    extern void mem_w(int data, int addr, int len);
    // DPI import at vsrc/fun/rom_fun.v:9:29
    extern int rom_r(int addr);

#ifdef __cplusplus
}
#endif

#endif  // guard
