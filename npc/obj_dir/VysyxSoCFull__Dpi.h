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
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/fun/step_fun.v:9:30
    extern void SimStep1(int step_data);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/fun/debug_fun.v:13:30
    extern void debug(int addr, int data);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/fun/mem_fun.v:19:29
    extern int mem_r(int addr, int len);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/fun/mem_fun.v:18:30
    extern void mem_w(int data, int addr, int len);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/fun/mmio_fun.v:18:29
    extern int mmio_r(int addr, int len);
    // DPI import at /home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/fun/mmio_fun.v:17:30
    extern void mmio_w(int addr, int data, int len);

#ifdef __cplusplus
}
#endif

#endif  // guard
