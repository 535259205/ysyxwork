// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VTOPmod__Syms.h"


void VTOPmod___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root__trace_cleanup\n"); );
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    VTOPmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOPmod___024root*>(voidSelf);
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000738U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
