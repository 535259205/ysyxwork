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
    // DPI import at vsrc/ebreak_fun.v:4:30
    extern void ebreak(int test);
    // DPI import at vsrc/mem_fun.v:17:29
    extern int mem_r(int addr, int len);
    // DPI import at vsrc/mem_fun.v:16:30
    extern void mem_w(int data, int addr, int len);
    // DPI import at vsrc/rom_fun.v:6:29
    extern int rom_r(int addr);

#ifdef __cplusplus
}
#endif

#endif  // guard
