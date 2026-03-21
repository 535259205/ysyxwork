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
    VerilatedScope* __Vscopep_TOPmod__asic__axi42apb;
    VerilatedScope* __Vscopep_TOPmod__asic__axi4frag;
    VerilatedScope* __Vscopep_TOPmod__asic__axi4xbar_1;
    VerilatedScope* __Vscopep_TOPmod__asic__axi4yank;
    VerilatedScope* __Vscopep_TOPmod__asic__larchinfo__m;
    VerilatedScope* __Vscopep_TOPmod__asic__lclint__m;
    VerilatedScope* __Vscopep_TOPmod__asic__li2c__m__u_i2c_master_byte_ctrl;
    VerilatedScope* __Vscopep_TOPmod__asic__li2c__m__u_i2c_master_byte_ctrl__u_i2c_master_bit_ctrl;
    VerilatedScope* __Vscopep_TOPmod__asic__li2s__m__u_i2s_core;
    VerilatedScope* __Vscopep_TOPmod__asic__li2s__m__u_i2s_core__I2S_RX_SHIFT_ONE_BLOCK__BRA__1__KET____u_i2s_rx_shift_reg;
    VerilatedScope* __Vscopep_TOPmod__asic__li2s__m__u_i2s_core__I2S_RX_SHIFT_ONE_BLOCK__BRA__2__KET____u_i2s_rx_shift_reg;
    VerilatedScope* __Vscopep_TOPmod__asic__li2s__m__u_i2s_core__I2S_RX_SHIFT_ONE_BLOCK__BRA__3__KET____u_i2s_rx_shift_reg;
    VerilatedScope* __Vscopep_TOPmod__asic__li2s__m__u_i2s_core__I2S_RX_SHIFT_ONE_BLOCK__BRA__4__KET____u_i2s_rx_shift_reg;
    VerilatedScope* __Vscopep_TOPmod__asic__li2s__m__u_i2s_core__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____u_i2s_tx_shift_reg;
    VerilatedScope* __Vscopep_TOPmod__asic__li2s__m__u_i2s_core__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____u_i2s_tx_shift_reg;
    VerilatedScope* __Vscopep_TOPmod__asic__li2s__m__u_i2s_core__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____u_i2s_tx_shift_reg;
    VerilatedScope* __Vscopep_TOPmod__asic__li2s__m__u_i2s_core__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____u_i2s_tx_shift_reg;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__0__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__10__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__11__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__12__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__13__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__14__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__15__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__16__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__17__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__18__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__19__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__1__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__20__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__21__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__22__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__23__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__24__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__25__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__26__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__27__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__28__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__29__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__2__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__30__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__31__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__3__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__4__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__5__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__6__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__7__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__8__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lplic__m__u_plic_core__PLIC_GATEPWAY_BLOCK__BRA__9__KET____u_plic_gateway;
    VerilatedScope* __Vscopep_TOPmod__asic__lps2__m;
    VerilatedScope* __Vscopep_TOPmod__asic__lrng__m;
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
