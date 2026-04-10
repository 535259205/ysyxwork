// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOPMOD__SYMS_H_
#define VERILATED_VTOPMOD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTOPmod.h"

// INCLUDE MODULE CLASSES
#include "VTOPmod___024root.h"
#include "VTOPmod___024unit.h"
#include "VTOPmod_std.h"
#include "VTOPmod_std__03a__03asemaphore__Vclpkg.h"
#include "VTOPmod_std__03a__03aprocess__Vclpkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VTOPmod__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTOPmod* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTOPmod___024root              TOP;
    VTOPmod___024unit              TOP____024unit;
    VTOPmod_std                    TOP__std;
    VTOPmod_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    VTOPmod_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOPmod__u_flash;
    VerilatedScope* __Vscopep_TOPmod__u_flash__flash_cmd_i;
    VerilatedScope* __Vscopep_std__process;
    VerilatedScope* __Vscopep_std__process__suspend;

    // CONSTRUCTORS
    VTOPmod__Syms(VerilatedContext* contextp, const char* namep, VTOPmod* modelp);
    ~VTOPmod__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
