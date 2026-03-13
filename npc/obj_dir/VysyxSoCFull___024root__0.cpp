// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern "C" void debug(int addr, int data);

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(IData/*31:0*/ addr, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    debug(addr__Vcvt, data__Vcvt);
}

extern "C" void ebreak(int test);

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak_module__DOT__ebreak_TOP\n"); );
    // Body
    int test__Vcvt;
    test__Vcvt = test;
    ebreak(test__Vcvt);
}

extern "C" void SimStep1(int step_data);

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step_fun_1__DOT__SimStep1_TOP(IData/*31:0*/ step_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step_fun_1__DOT__SimStep1_TOP\n"); );
    // Body
    int step_data__Vcvt;
    step_data__Vcvt = step_data;
    SimStep1(step_data__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool VysyxSoCFull___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ico_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
}

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool VysyxSoCFull___024root___eval_phase__ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = VysyxSoCFull___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VysyxSoCFull___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0))) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.externalPins_spi_sck) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__externalPins_spi_sck__0))) 
                                                         << 4U)) 
                                                     | (((((IData)(vlSelfRef.reset) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))) 
                                                          << 3U) 
                                                         | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step__0)) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(vlSelfRef.clock)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.clock) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step__0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__externalPins_spi_sck__0 
        = vlSelfRef.externalPins_spi_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool VysyxSoCFull___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step_fun_1__DOT__SimStep1_TOP(1U);
}

void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000029U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000002aU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000002bU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000020U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000021U, 
                                                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild)
                                                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC
                                                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt));
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000022U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__code_reg);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000027U, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle));
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000028U, (IData)(
                                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle 
                                                                                >> 0x00000020U)));
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000024U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcause);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000025U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mstatus);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000023U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000026U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(1U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(2U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(3U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(4U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(5U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(6U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(7U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(8U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(9U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000aU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000bU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000cU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000dU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000eU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000fU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000010U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000011U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000012U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000013U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000014U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000015U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000016U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000017U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000018U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000019U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001aU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001bU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001cU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001dU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001eU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001fU, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31);
}

extern const VlUnpacked<CData/*0:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_h60c1360a_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h19403ecc_0;
extern const VlUnpacked<VlWide<3>/*71:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h2c495b23_0;
extern const VlUnpacked<CData/*2:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h34fb27aa_0;
extern const VlUnpacked<CData/*3:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h4883b175_0;
extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h7a4cc5ea_0;
extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h6388e771_0;
extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h9441969b_0;
extern const VlUnpacked<IData/*31:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h30ab60d4_0;
extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_hfc63d453_0;
extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h5c1b3d27_0;
extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h95aee035_0;

void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4;
    ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 = 0;
    SData/*15:0*/ ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5;
    ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0;
    ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1;
    ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 = 0;
    SData/*9:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1 = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt = 0;
    IData/*25:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*6:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i = 0;
    SData/*13:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__externalPins_spi_sck;
    __Vdly__externalPins_spi_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    VlWide<4>/*127:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*2:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*2:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*1:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*1:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*1:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 0;
    CData/*1:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*4:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*4:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*4:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    QData/*47:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*36:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*47:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*37:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*47:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*36:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*47:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*37:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    CData/*2:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid;
    __Vdly__externalPins_spi_sck = vlSelfRef.externalPins_spi_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelfRef.__Vdly__externalPins_spi_mosi = vlSelfRef.externalPins_spi_mosi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((0x00000200U & ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid))) 
                                                << 9U)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6882: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:181\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 6882, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6884: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 6884, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid)) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wlast)))) 
                                  | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6888: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:190\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 6888, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6890: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 6890, "", false);
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 8U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4951: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4951, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4953: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4953, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4957: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4957, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4959: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4959, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 8U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4963: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4963, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4965: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4965, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4969: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4969, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4971: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4971, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 9U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4975: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4975, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4977: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4977, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4981: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4981, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4983: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4983, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 9U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4987: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4987, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4989: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4989, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4993: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4993, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4995: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4995, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4999: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 4999, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5001: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5001, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5005: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5005, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5007: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5007, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5011: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5011, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5013: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5013, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5017: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5017, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5019: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5019, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5023: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5023, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5025: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5025, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5029: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5029, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5031: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5031, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5035: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5035, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5037: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5037, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5041: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5041, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5043: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5043, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5047: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5047, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5049: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5049, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5053: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5053, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5055: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5055, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5059: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5059, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5061: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5061, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5065: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5065, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5067: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5067, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5071: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5071, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5073: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5073, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5077: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5077, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5079: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5079, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5083: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5083, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5085: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5085, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5089: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5089, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5091: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5091, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5095: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5095, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5097: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5097, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5101: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5101, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5103: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5103, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5107: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5107, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5109: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5109, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5113: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5113, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5115: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5115, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5119: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5119, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5121: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5121, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5125: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5125, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5127: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5127, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5131: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5131, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5133: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5133, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5137: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5137, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5139: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5139, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5143: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5143, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5145: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5145, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5149: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5149, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5151: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5151, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5155: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5155, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5157: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5157, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5161: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5161, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5163: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5163, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 1U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5167: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5167, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5169: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5169, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5173: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5173, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5175: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5175, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 1U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5179: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5179, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5181: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5181, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5185: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5185, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5187: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5187, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 2U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5191: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5191, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5193: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5193, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5197: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5197, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5199: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5199, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 2U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5203: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5203, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5205: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5205, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5209: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5209, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5211: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5211, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 3U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5215: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5215, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5217: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5217, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5221: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5221, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5223: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5223, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 3U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5227: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5227, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5229: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5229, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5233: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5233, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5235: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5235, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 4U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5239: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5239, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5241: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5241, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5245: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5245, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5247: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5247, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 4U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5251: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5251, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5253: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5253, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5257: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5257, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5259: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5259, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 5U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5263: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5263, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5265: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5265, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5269: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5269, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5271: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5271, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 5U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5275: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5275, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5277: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5277, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5281: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5281, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5283: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5283, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 6U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5287: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5287, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5289: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5289, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5293: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5293, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5295: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5295, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 6U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5299: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5299, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5301: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5301, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5305: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5305, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5307: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5307, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 7U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5311: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5311, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5313: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5313, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5317: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5317, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5319: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5319, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 7U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5323: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5323, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5325: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5325, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5329: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5329, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5331: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5331, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_2_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5335: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5335, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5337: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5337, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_2_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5341: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5341, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5343: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5343, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5347: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5347, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5349: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5349, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5353: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5353, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5355: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 5355, "", false);
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid)) 
                      & (2U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7205: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:64\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 7205, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7207: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 7207, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awvalid)) 
                      & (2U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7211: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 7211, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7213: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 7213, "", false);
    }
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1234: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1234, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1236: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1236, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1240: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1240, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1242: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1242, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1246: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1246, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1248: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1248, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1252: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1252, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1254: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1254, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                                              >> 1U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1258: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1258, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1260: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1260, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1264: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1264, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1266: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1266, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                                              >> 1U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1270: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1270, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1272: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1272, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1276: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1276, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1278: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1278, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                                              >> 2U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1282: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1282, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1284: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1284, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1288: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1288, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1290: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1290, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                                              >> 2U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1294: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1294, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1296: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1296, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1300: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1300, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1302: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1302, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                                              >> 3U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1306: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1306, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1308: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1308, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1312: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1312, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1314: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1314, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                                              >> 3U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1318: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1318, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1320: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1320, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1324: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1324, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1326: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1326, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                                              >> 4U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1330: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1330, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1332: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1332, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1336: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1336, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1338: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1338, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                                              >> 4U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1342: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1342, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1344: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1344, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1348: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1348, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1350: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1350, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                                              >> 5U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1354: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1354, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1356: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1356, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1360: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1360, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1362: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1362, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                                              >> 5U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1366: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1366, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1368: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1368, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1372: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1372, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1374: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1374, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                                              >> 6U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1378: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1378, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1380: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1380, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1384: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1384, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1386: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1386, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                                              >> 6U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1390: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1390, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1392: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1392, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1396: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1396, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1398: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1398, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                                              >> 7U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1402: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1402, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1404: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1404, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1408: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1408, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1410: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1410, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                                              >> 7U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1414: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1414, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1416: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1416, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1420: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1420, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1422: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1422, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1426: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1426, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1428: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1428, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (7U & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002dU)))) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1432: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1432, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1434: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1434, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1438: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1438, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1440: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1440, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (7U & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002dU)))) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1444: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1444, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1446: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1446, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                         >> 1U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1450: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1450, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1452: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1452, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1456: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1456, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1458: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1458, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                         >> 1U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1462: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1462, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1464: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1464, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1468: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1468, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1470: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1470, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                         >> 2U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1474: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1474, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1476: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1476, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1480: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1480, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1482: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1482, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                         >> 2U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1486: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1486, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1488: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1488, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1492: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1492, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1494: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1494, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                         >> 3U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1498: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1498, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1500: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1500, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1504: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1504, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1506: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1506, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                         >> 3U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1510: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1510, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1512: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1512, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1516: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1516, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1518: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1518, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                         >> 4U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1522: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1522, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1524: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1524, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1528: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1528, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1530: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1530, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                         >> 4U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1534: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1534, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1536: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1536, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1540: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1540, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1542: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1542, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                         >> 5U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1546: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1546, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1548: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1548, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1552: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1552, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1554: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1554, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                         >> 5U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1558: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1558, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1560: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1560, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1564: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1564, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1566: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1566, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                         >> 6U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1570: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1570, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1572: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1572, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1576: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1576, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1578: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1578, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                         >> 6U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1582: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1582, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1584: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1584, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1588: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1588, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1590: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1590, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                         >> 7U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1594: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1594, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1596: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1596, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1600: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1600, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1602: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1602, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                         >> 7U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1606: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1606, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1608: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1608, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                      & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1612: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1612, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1614: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1614, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1618: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1618, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1620: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1620, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_anyValid)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1626: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1626, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1628: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1628, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1632: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1632, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1634: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1634, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1638: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1638, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1640: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1640, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_winner_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_winner_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1644: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1644, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1646: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1646, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_anyValid)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_winner_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_winner_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1652: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1652, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1654: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1654, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1658: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1658, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1660: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1660, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1664: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1664, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1666: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1666, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_winner_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_winner_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1670: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1670, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1672: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1672, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_anyValid)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_winner_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_winner_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1678: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1678, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1680: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1680, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1684: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1684, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1686: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1686, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_2)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1690: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1690, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1692: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1692, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1))) 
                                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1))) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1698: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1698, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1700: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1700, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_3)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1704: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1704, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1706: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1706, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1))) 
                                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1))) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1712: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1712, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1714: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1714, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_4)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1718: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1718, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1720: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1720, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1))) 
                                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1))) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1726: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1726, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1728: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1728, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_5)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1732: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1732, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1734: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1734, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_0)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_1))) 
                                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_1))) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1740: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1740, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1742: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1742, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_6)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_1)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1746: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1746, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1748: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 1748, "", false);
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 
        = (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full) 
                << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full) 
                          << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full) 
                                      << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full) 
                                   << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full) 
                                     << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))) 
                                << 8U)) | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 
        = (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full) 
                << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full) 
                          << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full) 
                                      << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full) 
                                   << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full) 
                                     << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))) 
                                << 8U)) | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid)) 
                                  | ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4) 
                                     >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6133: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:69\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 6133, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6135: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 6135, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
                                  | ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5) 
                                     >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6139: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:98\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 6139, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6141: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../WORK/ysyxSoC/build/ysyxSoCFull.v", 6141, "", false);
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr_read) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
    }
    __Vdly__externalPins_spi_sck = (1U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                            & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                              | (IData)(vlSelfRef.externalPins_spi_sck)))
                                           ? (~ (IData)(vlSelfRef.externalPins_spi_sck))
                                           : (IData)(vlSelfRef.externalPins_spi_sck)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1) 
                              - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_payload_last_1;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_id 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_burst 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_size 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_addr;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_id 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_id;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_burst 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_burst;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_size 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_size;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1 
            = ((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1) 
               | (0x00000fffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result_1));
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = (0x0000ffffU & ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid) 
                << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_0)
                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp)
                            : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_2)
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_bresp)
                                      : 0U)));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid) 
                << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_6_0)
                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp)
                            : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_6_2)
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_bresp)
                                      : 0U)));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr 
        = ((0xf0U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset)
               ? 0U : (0x0000000fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr) 
                                      | (0x0eU ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr 
        = ((0x0fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr)) 
           | ((((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                       << 1U)) | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                        >> 1U))) << 6U) 
              | (((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                         >> 1U)) | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                          >> 3U))) 
                 << 4U)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_write) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6_d)))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5_d)))));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7_d)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2_d)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3_d)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4_d)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1_d)))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
            = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int))
                ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
                           >> 2U)));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                << 0x00000023U) | (((QData)((IData)(
                                                    (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0)
                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_1)
                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rdata
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_2)
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rdata
                                                            : 0U))))) 
                                    << 3U) | (QData)((IData)(
                                                             (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0)
                                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp)
                                                                  : 0U) 
                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_2)
                                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rresp)
                                                                    : 0U)) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rlast))))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_1) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                ? 0U : (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                >> 3U)));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 
            = (0x0000000fU & ((0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                           (3U 
                                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                               >> 4U)), 2U)) 
                              + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt)));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 1U;
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                  - (IData)(1U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                           : ((0U != (0x0000007fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                               ? (0x0000007fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                               : 0x80U)));
    if ((1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 8U) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
    } else if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                 & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__divReg = (1U & ((~ (IData)(vlSelfRef.reset)) 
                                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__divReg))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                << 0x00000023U) | (((QData)((IData)(
                                                    (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rdata
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rdata
                                                            : 0U))))) 
                                    << 3U) | (QData)((IData)(
                                                             (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp)
                                                                  : 0U) 
                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rresp)
                                                                    : 0U)) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rlast))))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
           & (0x00000010U == (0x0000001cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))) 
          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite)) 
         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = ((0x3f00U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                   | (0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in 
                                     | (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
        }
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = ((0x00ffU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                   | (0x00003f00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
    } else if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                 & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
            = (0x3effU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
    }
    vlSelfRef.__Vdly__externalPins_spi_mosi = (1U & 
                                               ((1U 
                                                 & (((0U 
                                                      != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                     & ((0x00000400U 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) 
                                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                                 ? 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                 (3U 
                                                  & (((0x00000800U 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                       - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                       : 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                       - (IData)(1U))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & ((0x00000800U 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                      - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                      : 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                      - (IData)(1U)))))
                                                 : (IData)(vlSelfRef.externalPins_spi_mosi)));
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                = ((0x00ffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                   | (0xff000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                   | (0x00ff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                   | (0x0000ff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                   | (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
    } else if ((1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                       >> 1U) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                = ((0x00ffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                   | (0xff000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                   | (0x00ff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                   | (0x0000ff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                   | (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
    } else if ((1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                       >> 2U) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                = ((0x00ffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                   | (0xff000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                   | (0x00ff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                   | (0x0000ff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                   | (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
    } else if ((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                         >> 3U) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                = ((0x00ffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                   | (0xff000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                   | (0x00ff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                   | (0x0000ff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                   | (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                       >> 5U))]) | ((1U & ((((0x00000200U 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                                            & ((0U 
                                                != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                               | (IData)(vlSelfRef.externalPins_spi_sck)))
                                            ? ((IData)(vlSelfRef.externalPins_spi_ss) 
                                               | ((((2U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                                    : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                                  >> 0x0000001fU))
                                            : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                               (3U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                    << (0x0000001fU 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full))) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_penable) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_psel)) 
           & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse))) 
            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rx_reset))
            ? 0U : (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0) 
                             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0_d))))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
    } else if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_re) 
                 & (0U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
                & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                      >> 7U)))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr_read)
            ? 0U : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int))
                     ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
                                >> 3U))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_read)
            ? 0U : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int))
                     ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count) 
             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_read))
            ? 0U : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int))
                     ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_write) 
            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir_read) 
               & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir))))
            ? 0U : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int))
                     ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
                                >> 1U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_wdata)) 
                << 5U) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_wstrb) 
                                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_wlast)))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_fire) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data)) 
                << 5U) | (QData)((IData)((1U | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb) 
                                                << 1U)))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 5U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 5U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 4U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 4U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 3U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 2U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 2U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 1U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count) 
                                                       + 
                                                       (((IData)(1U) 
                                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1))) 
                                                      - 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000fU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000fU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000eU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000eU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000cU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 8U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 8U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 9U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 9U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000aU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000aU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000bU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000bU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000dU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000dU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 6U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 6U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 7U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 7U)))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                              >> 2U));
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__enable) 
                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                              - (IData)(1U)));
    }
    if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
         | (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__enable) 
                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t 
            = (0x000003ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t) 
                              - (IData)(1U)));
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_value;
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__enable) 
                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                              - (IData)(1U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 5U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 5U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 4U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 4U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 3U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 2U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 2U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 1U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count) 
                                                       + 
                                                       (((IData)(1U) 
                                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1))) 
                                                      - 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000fU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000fU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000eU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000eU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 8U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 8U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 9U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 9U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000aU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000aU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000bU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000bU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000cU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000dU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000dU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 6U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 6U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 7U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 7U)))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                              >> 3U));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
    }
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dlc 
        = (0x0000ffffU & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dlc)))))
                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rx_reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
    } else if ((2U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
        if ((0x10U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count)));
            __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
        if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count 
                = (0x0000001fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                  - (IData)(1U)));
            __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
            __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
        }
    } else if ((3U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
            = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata);
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 1U))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
                              >> 8U));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 2U))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
                              >> 0x10U));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 3U))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
               >> 0x18U);
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 1U;
    }
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) {
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel)) 
             & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state 
                = (((0x2fffffffU < (0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)))
                    ? 2U : 1U);
        }
    } else if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state = 6U;
        }
    } else if ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state = 7U;
        }
    } else if ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state = 8U;
        }
    } else if (((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state = 0U;
    }
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state))) {
        if (((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state)) 
             & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state = 2U;
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_psel) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state = 0U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_push) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid))) 
                                                   & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid))) 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid) 
                                                       & (0U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 7U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                                          >> 7U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 6U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                                          >> 6U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count_1) 
                                                       + 
                                                       (((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                                     >> 0x0000002dU)))) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23))) 
                                                      - 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 1U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                                          >> 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 2U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                                          >> 2U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 3U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                                          >> 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 4U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                                          >> 4U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_23) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 5U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_5) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                                          >> 5U)))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 7U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                                          >> 7U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 6U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                                          >> 6U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 5U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                                          >> 5U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count_1) 
                                                       + 
                                                       (((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                     >> 0x0000002dU)))) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22))) 
                                                      - 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 1U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                                          >> 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 2U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                                          >> 2U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 3U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                                          >> 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count_1) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_22) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                        >> 0x0000002dU)))) 
                                                           >> 4U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)) 
                                                          >> 4U)))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_arid)) 
                << 0x0000002dU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_araddr)) 
                                    << 0x0000000dU) 
                                   | (QData)((IData)(
                                                     (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_arlen) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_arsize) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_arburst)))))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid))) 
                                                   & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_1 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_awready) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_awvalid))) 
                                                   & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__full)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_enq_valid)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_1))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_awid)) 
                << 0x0000002dU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_awaddr)) 
                                    << 0x0000000dU) 
                                   | (QData)((IData)(
                                                     (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_awlen) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_awsize) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_awburst)))))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                  ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                      ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr)
                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr))) 
                << 0x0000000dU) | (QData)((IData)((
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                                      ? 0U
                                                      : 3U) 
                                                    << 5U) 
                                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                                         ? 
                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                                          ? 0U
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size))
                                                         : 2U) 
                                                       << 2U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                                          ? 0U
                                                          : 1U))))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr)) 
                << 0x0000000dU) | (QData)((IData)(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2_axi_aw_payload_size) 
                                                   << 2U))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_dat8_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0;
    __Vtableidx11 = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr_read) 
                         << 4U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                    << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                              << 2U))) 
                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd))) 
                      << 5U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                  << 4U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                               << 2U))) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask) 
                                    << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_h60c1360a_0
        [__Vtableidx11];
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_resp = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_id 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id)
                : 0U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild = 1U;
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
         & (2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fcr 
            = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i) 
                     >> 6U));
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
         & (4U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr 
            = (0x0000001fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i));
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
         & (7U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tx_reset) 
         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_push) 
                & (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1 
        = (0x00040400U == (0x0007ffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                          >> 7U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                          >> 2U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr;
    }
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_prdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pslverr) 
               << 1U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1 
        = (0x00040400U == (0x0007ffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                          >> 7U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 1U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 2U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 3U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 4U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 5U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 6U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 7U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 8U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 9U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000aU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000bU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000cU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000dU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000eU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000fU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    }
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 1U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 2U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 3U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 4U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 5U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 6U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 7U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 8U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 9U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000aU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000bU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000cU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000dU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000eU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000fU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    }
    ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid));
    if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
               + (0x0000ffffU & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
            = (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len) 
                                        << 8U)) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
            = (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len) 
                              - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr 
            = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst))
                    ? ((0x00007fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                                       & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                          >> 8U))) 
                       | (~ ((0xffff8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1) 
                             | (0x00007fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                  >> 8U))))))
                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arid)) 
                << 0x0000002dU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_araddr)) 
                                    << 0x0000000dU) 
                                   | (QData)((IData)(
                                                     (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arlen) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arsize) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arburst)))))));
    }
    ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
               + (0x0000ffffU & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
            = (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len) 
                                        << 8U)) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
            = (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1) 
                              - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1 
            = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst))
                    ? ((0x00007fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
                                       & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                          >> 8U))) 
                       | (~ ((0xffff8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6) 
                             | (0x00007fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                                  >> 8U))))))
                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awid)) 
                << 0x0000002dU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awaddr)) 
                                    << 0x0000000dU) 
                                   | (QData)((IData)(
                                                     (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awlen) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awsize) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awburst)))))));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H = 0U;
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L 
            = ((IData)(1U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L);
        if ((0xffffffffU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H 
                = ((IData)(1U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H);
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)))) {
        if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len;
            }
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
            if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)))) {
            if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len))) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_valid;
                }
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt = 0x30000000U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag = 0U;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__finish) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                = ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt);
        } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag = 1U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap) 
                     - (IData)(1U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1 = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1) 
                         - (IData)(1U)));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
            = (0x0000ffffU & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0aU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0bU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0cU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0dU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0eU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0fU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wdata)) 
                << 5U) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wstrb) 
                                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wlast)))));
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0x0aU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0x0bU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0x0cU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0x0dU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0x0eU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0x0fU] = 0U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17] = 0U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_fire) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0] 
            = ((0xffffff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0]) 
               | (IData)(__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0));
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1] 
            = ((0xffff00ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1) 
                  << 8U));
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2] 
            = ((0xff00ffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3] 
            = ((0x00ffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3) 
                  << 0x00000018U));
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = 0U;
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) 
                != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid)))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
                     - (IData)(1U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state) 
                << 6U) | ((0x00000020U & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rready) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid)) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bready) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid)))) 
                                          << 5U)) | 
                          ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pready)
                              ? (2U & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rready) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bready) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid)))) 
                                       << 1U)) : 1U) 
                            << 2U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awvalid) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_wvalid))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
            = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state), 1U))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                               >> 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                               >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                               >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                               >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2)) 
                     - (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                               >> 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                               >> 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                               >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_6)))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                               >> 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                               >> 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                               >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                               >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                               >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2)) 
                     - (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                               >> 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2)) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)) 
                               >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en)))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1 = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1) 
                         - (IData)(1U)));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_grp_flag = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid)))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT___zz_when) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag = 0U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1) 
                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_valid));
        }
        if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt 
                        = ((IData)(1U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt);
                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT___zz_when) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_grp_flag = 1U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt 
                    = ((IData)(1U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt);
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt 
                = ((IData)(1U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt);
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt;
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_2 = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_3 = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_2 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_5 = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_2 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_4 = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_6 = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_2 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_mask = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_state_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_state_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1 = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_mask = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_state_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_state_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_2_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_2_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_rready) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_bready) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_arready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_2_arvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_2)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_2)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk7__DOT___readys_mask_T_10 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_2) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_2));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_2 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk7__DOT___readys_mask_T_10) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk7__DOT___readys_mask_T_10) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__W0_en;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
            = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_3)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_3)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk8__DOT___readys_mask_T_15 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_3) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_3));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk8__DOT___readys_mask_T_18 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk8__DOT___readys_mask_T_15) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk8__DOT___readys_mask_T_15) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_3 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk8__DOT___readys_mask_T_18) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk8__DOT___readys_mask_T_18) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_2;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5 
            = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_5)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_5)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk10__DOT___readys_mask_T_31 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_5) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_5));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk10__DOT___readys_mask_T_34 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk10__DOT___readys_mask_T_31) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk10__DOT___readys_mask_T_31) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_5 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk10__DOT___readys_mask_T_34) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk10__DOT___readys_mask_T_34) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_2;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4 
            = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_4)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_4)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk9__DOT___readys_mask_T_23 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_4));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk9__DOT___readys_mask_T_26 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk9__DOT___readys_mask_T_23) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk9__DOT___readys_mask_T_23) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_4 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk9__DOT___readys_mask_T_26) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk9__DOT___readys_mask_T_26) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6 
            = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_6)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_6)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk11__DOT___readys_mask_T_39 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_6) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_6));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk11__DOT___readys_mask_T_42 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk11__DOT___readys_mask_T_39) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk11__DOT___readys_mask_T_39) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_6 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk11__DOT___readys_mask_T_42) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk11__DOT___readys_mask_T_42) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_2;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                 ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready))
                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready)) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___awOut_2_io_enq_bits_T_14 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_2_awready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_2_awvalid));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4 
            = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___awOut_2_io_enq_bits_T_14)) 
               & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__full)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_enq_valid)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___awOut_2_io_enq_bits_T_14) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk6__DOT___awOut_2_io_enq_bits_readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk6__DOT___awOut_2_io_enq_bits_readys_mask_T) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk6__DOT___awOut_2_io_enq_bits_readys_mask_T) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_state_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_winner_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_state_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_winner_1;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk5__DOT___readys_mask_T_5 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk5__DOT___readys_mask_T_5) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk5__DOT___readys_mask_T_5) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1_1;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___awOut_1_io_enq_bits_T_14 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_1_awready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_1_awvalid));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3 
            = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___awOut_1_io_enq_bits_T_14)) 
               & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__full)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__io_enq_valid)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___awOut_1_io_enq_bits_T_14) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk4__DOT___awOut_1_io_enq_bits_readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk4__DOT___awOut_1_io_enq_bits_readys_mask_T) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk4__DOT___awOut_1_io_enq_bits_readys_mask_T) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_state_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_winner_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_state_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_winner_1;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_2_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_2_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_2_1;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_5 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt)));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_prdata_i;
            }
        } else if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt = 0U;
                    } else {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001000U;
                    }
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt 
                        = (0x0000000fU & ((0x00000100U 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data)
                                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt) 
                                              - (IData)(1U))
                                           : ((IData)(1U) 
                                              + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))));
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001010U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001010U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data = 0x00002140U;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001004U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data 
                        = (0x03000000U | (0x003fffffU 
                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_paddr 
                                             >> 2U)));
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001000U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data 
                    = (0x03000000U | (0x003fffffU & 
                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_paddr 
                                       >> 2U)));
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt 
                    = (0x0000000fU & ((0x00000100U 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt) 
                                          - (IData)(1U))
                                       : ((IData)(1U) 
                                          + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))));
            }
        } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001010U;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001018U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001014U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data = 2U;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001010U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data = 0x00002040U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt;
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0U;
    } else {
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                  & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 1U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 2U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 3U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 4U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 5U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 6U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 8U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 9U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000aU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000bU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000cU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000dU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000eU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000fU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_wready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_deq_valid)) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid)) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_fire) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_fire;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 1U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 2U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 3U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 4U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 5U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 6U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 8U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 9U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000aU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000bU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000cU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000dU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000eU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)))) {
        if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_addr;
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_mask = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_state_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_state_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000fU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__W0_en;
        }
        if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy 
                = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len));
        }
        if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 
                = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__W0_en;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle 
            = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk3__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk3__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk3__DOT___readys_mask_T) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_arready) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___awOut_0_io_enq_bits_T_14 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_0_awready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_0_awvalid));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2 
            = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___awOut_0_io_enq_bits_T_14)) 
               & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__full)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__io_enq_valid)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___awOut_0_io_enq_bits_T_14) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___awOut_0_io_enq_bits_readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___awOut_0_io_enq_bits_readys_mask_T) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___awOut_0_io_enq_bits_readys_mask_T) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_state_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_state_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_1;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_arready) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_awready) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_awready) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0x0eU;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
             & (IData)(vlSelfRef.externalPins_spi_sck)) 
            & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
           | (((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
               & (~ (IData)(vlSelfRef.externalPins_spi_sck))) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid = 0U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT___zz_when) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_overrun;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd)
            ? 6U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int)
                     ? 4U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd)
                              ? 0x0cU : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd)
                                          ? 2U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd)
                                                   ? 0U
                                                   : 1U)))));
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
         & (1U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                      >> 7U)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier 
                = (0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
            & (0U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           && (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                     >> 7U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_psel 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_penable 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state)) 
           | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state)));
    if ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
            >> 0x0000000cU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
          & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out = 1U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out = 0U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0 
            = (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1 
            = (0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                              >> 8U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2 
            = (0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                              >> 0x10U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
               >> 0x18U);
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle = 0ULL;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__code_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcause = 0x0000000bU;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mstatus = 0x00001800U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec = 0x30000000U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27 = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__vaild) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag = 1U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag = 1U;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_fire) 
             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_fire))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag = 0U;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid) 
             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when) 
                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                    ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1))
                    : (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag = 0U;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT___zz_mcycle;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__finish) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__code_reg 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code;
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall)))) {
            if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret)))) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild) {
                    if ((0x0300U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                     >> 0x00000014U))) {
                        if ((0x0305U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                         >> 0x00000014U))) {
                            if ((0x0342U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                             >> 0x00000014U))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcause 
                                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data;
                            }
                        }
                        if ((0x0305U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                         >> 0x00000014U))) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data;
                        }
                    }
                    if ((0x0300U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                     >> 0x00000014U))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mstatus 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data;
                    }
                }
            }
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall) {
            if (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                 & (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc 
                    = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                       - (IData)(4U));
            }
        } else if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret)))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild) {
                if ((0x0300U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                 >> 0x00000014U))) {
                    if ((0x0305U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                     >> 0x00000014U))) {
                        if ((0x0342U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                         >> 0x00000014U))) {
                            if ((0x0341U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                             >> 0x00000014U))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc 
                                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data;
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__rd_vaild) {
            if ((0U != (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                       >> 7U)))) {
                if ((((IData)(1U) << (0x0000001fU & 
                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                       >> 7U))) >> 0x1fU)) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x40000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x20000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x10000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00000800U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00000080U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00000400U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00000200U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((8U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00000040U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00000020U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((2U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00000010U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((4U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((1U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00000100U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00001000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00002000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00004000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00008000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00010000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00020000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00040000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00080000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00100000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00200000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00400000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x00800000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x01000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x02000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x04000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
                if ((0x08000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd;
                }
            }
        }
    }
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild = 0U;
                    }
                } else if (((((((((0x00006063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                                  | (0x00007063U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                 | (0x00000037U == 
                                    (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                | (0x00000017U == (0x0000007fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                               | (0x0000006fU == (0x0000007fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                              | (0x00001073U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                             | (0x00002073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                            | (0x00003073U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
                    if ((0x00006063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild = 0U;
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild = 0U;
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((0x00100073U != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                if ((0x00000073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild = 0U;
                                } else if ((0x30200073U 
                                            == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY(((0x10U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF_NX("%c",0,8,vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x0000001fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count) 
                                  - (IData)(1U)));
        }
    } else if (VL_UNLIKELY(((3U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                     << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF_NX("%c",0,8,vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_start_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_ready) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid = 0U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3 = 0U;
        }
        if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_when) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt 
                    = ((IData)(1U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt);
            }
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_start_flag = 1U;
                if ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag 
                     != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                         >> 6U))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0 = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1 = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2 = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3 = 0U;
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag 
                    = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                       >> 6U);
            }
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_4) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_start_flag = 0U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
            if ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)) 
                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag = 1U;
            }
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__axi_r_fire) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt)));
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_when_1) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready = 0U;
                    if ((1U & ((IData)(1U) << (3U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                >> 4U))))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0 = 1U;
                    }
                    if ((2U & ((IData)(1U) << (3U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                >> 4U))))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1 = 1U;
                    }
                    if ((4U & ((IData)(1U) << (3U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                >> 4U))))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2 = 1U;
                    }
                    if ((8U & ((IData)(1U) << (3U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                >> 4U))))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3 = 1U;
                    }
                }
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready = 1U;
            }
        }
        if (((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
             & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag = 0U;
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)))) {
        if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_id;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_burst;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_size;
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter 
        = ((IData)(vlSelfRef.reset) ? 0U : (0x000001ffU 
                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo) 
                                               - ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = vlSelfRef.externalPins_uart0_rx;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data = 0U;
    if ((0x02000000U == (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
    } else if ((0x02000004U == (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_prdata_i 
        = ((0U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                         >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                             >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                 >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                     >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                         >> 2U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext;
    vlSelfRef.__Vtableidx9 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h19403ecc_0
        [vlSelfRef.__Vtableidx9];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((0x00000010U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr))
                                                 ? 
                                                ((0x0000000cU 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                          >> 3U))))
                                                 : 8U);
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__enable) {
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
            } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                            | (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                            ? 4U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                     << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                            << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                    = (1U & (VL_REDXOR_8(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
            }
        } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                        }
                    } else {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                     - (IData)(1U)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                    }
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                        = ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                            ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? 7U : 6U) : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                               ? 5U
                                               : 4U));
                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                    }
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                    = (1U & ((0x00000010U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                              ? ((0x00000020U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                              : ((0x00000020U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                  : (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
            } else {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i)));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 0x0aU;
                }
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            }
        } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                }
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                                    << 7U) | (0x0000007fU 
                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                 >> 1U)));
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((0x80U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                                       << 6U) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                    >> 1U))));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                            = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((0xc0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                                       << 5U) | (0x0000001fU 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                    >> 1U))))
                                : ((0xe0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                                       << 4U) | (0x0000000fU 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                    >> 1U)))));
                    }
                }
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                }
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate 
                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i)
                        ? 0U : 6U);
            }
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
            if (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i)) 
                 & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
            }
        }
        if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate))) {
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_8(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x0000007fU 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo))));
                    }
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                        = (1U & VL_REDXOR_32((0x0000003fU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo))));
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                        = (1U & VL_REDXOR_32((0x0000001fU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo))));
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                    = (0x0000007fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo) 
                                      >> 1U));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                    = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
            } else {
                if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                        = ((0U == (4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)))
                            ? 0x0dU : ((4U == (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)))
                                        ? 0x15U : 0x1dU));
                }
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0x0fU;
                }
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                         - (IData)(1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                = ((0x40U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                   | (0x0000003fU & 
                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                       >> 1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                        } else if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                = ((0x00000010U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                 >> 5U))) 
                                       && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                    : ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                                              >> 5U)) 
                                       || (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0x0fU;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
            if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                        = (0x0000001fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                          - (IData)(1U)));
                }
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0x0fU;
            }
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
        } else if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT___zz_mcycle 
        = (1ULL + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd = 0U;
    if (((((((((0x00000033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
               | (0x40000033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
              | (0x00007033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
             | (0x00006033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
            | (0x00004033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
           | (0x00001033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
          | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
         | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd 
            = ((0x00000033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                   + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)
                : ((0x40000033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                    ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                       - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)
                    : ((0x00007033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)
                        : ((0x00006033U == (0xfe00707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                               | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)
                            : ((0x00004033U == (0xfe00707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                                   ^ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)
                                : ((0x00001033U == 
                                    (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                    ? (IData)((0x7fffffffffffffffULL 
                                               & ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1)) 
                                                  << 
                                                  (0x0000001fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2))))
                                    : ((0x00005033U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                                           >> (0x0000001fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2))
                                        : VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1, 
                                                         (0x0000001fU 
                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)))))))));
    } else if (((((((((0x00002033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                      | (0x00003033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (0x00000013U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (0x00004013U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x00006013U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x00007013U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                 | (0x00001013U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                | (0x00005013U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd 
            = ((0x00002033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_24)
                : ((0x00003033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_27)
                    : ((0x00000013U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_28
                        : ((0x00004013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                               ^ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I)
                            : ((0x00006013U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                                   | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I)
                                : ((0x00007013U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                    ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I)
                                    : ((0x00001013U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                        ? (IData)((0x7fffffffffffffffULL 
                                                   & ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1)) 
                                                      << 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                          >> 0x00000014U)))))
                                        : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                                           >> (0x0000001fU 
                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 0x00000014U))))))))));
    } else if (((((((((0x40005013U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                      | (0x00002013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (0x00003013U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x00001003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                 | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd 
            = ((0x40005013U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1, 
                                 (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                 >> 0x00000014U)))
                : ((0x00002013U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                    ? VL_LTS_III(32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I)
                    : ((0x00003013U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                           < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I)
                        : ((3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                            ? (((- (IData)((1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz___05Fzz_com_grp_rd_1_2 
                                                  >> 7U)))) 
                                << 8U) | (0x000000ffU 
                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz___05Fzz_com_grp_rd_1_2))
                            : ((0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz___05Fzz_com_grp_rd_1_2 
                                                   >> 0x0000000fU)))) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz___05Fzz_com_grp_rd_1_2))
                                : ((0x00002003U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_payload_data
                                    : ((0x00004003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                        ? (0x000000ffU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz___05Fzz_com_grp_rd_1_2)
                                        : (0x0000ffffU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz___05Fzz_com_grp_rd_1_2))))))));
    } else if (((((((((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                      | (0x00002023U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (0x00001023U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (0x00000023U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x00000063U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x00001063U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                 | (0x00004063U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                | (0x00005063U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
        if ((0x00000067U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd 
                = ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc);
        }
    } else if (((((((((0x00006063U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                      | (0x00007063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (0x00000037U == (0x0000007fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (0x00000017U == (0x0000007fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x0000006fU == (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x00001073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                 | (0x00002073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                | (0x00003073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
        if ((0x00006063U != (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
            if ((0x00007063U != (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd 
                    = ((0x00000037U == (0x0000007fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                        ? (0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                        : ((0x00000017U == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc 
                               + (0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                            : ((0x0000006fU == (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                ? ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc)
                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data)));
            }
        }
    } else if ((0x00005073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data;
    } else if ((0x00006073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data;
    } else if ((0x00007073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc = 0x80000000U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code = 0x00000013U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__vaild) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__maybe_full))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__maybe_full))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_1_2 
        = ((0U == ((2U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                   >> 0x0000002cU)) 
                          << 1U)) | (1U & (~ (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x0000002bU)))))) 
           | (0x0eU == (0x0000000fU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x00000029U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_1_0 
        = ((0U == ((0x0000001eU & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                            >> 0x00000029U)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x00000021U))))) 
           | ((0U == ((0x00000078U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x00000029U)) 
                                      << 3U)) | ((4U 
                                                  & ((IData)(
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x00000021U)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (IData)(
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                               >> 0x00000019U)))))) 
              | ((0U == ((0x00000038U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x0000002aU)) 
                                         << 3U)) | 
                         ((4U & ((~ (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                             >> 0x00000029U))) 
                                 << 2U)) | ((2U & ((IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x00000021U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                             >> 0x0000001aU))))))) 
                 | ((0U == ((((0x0000000eU & ((IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 0x0000002aU)) 
                                              << 1U)) 
                              | (1U & (~ (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))) 
                             << 3U) | ((4U & ((IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 0x00000021U)) 
                                              << 2U)) 
                                       | (3U & (2U 
                                                ^ (IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x00000019U))))))) 
                    | ((0U == ((0x0000001cU & ((IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                        >> 0x0000002aU)) 
                                               << 2U)) 
                               | ((2U & ((~ (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 0x00000029U))) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                    >> 0x00000021U))))))) 
                       | ((0U == ((0x0000000cU & ((IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x0000002bU)) 
                                                  << 2U)) 
                                  | (3U & (~ (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x00000029U)))))) 
                          | (0x0cU == (0x0000000fU 
                                       & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = ((0U == ((0x0000001eU & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                            >> 0x00000029U)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x00000021U))))) 
           | ((0U == ((0x00000078U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x00000029U)) 
                                      << 3U)) | ((4U 
                                                  & ((IData)(
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x00000021U)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (IData)(
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                               >> 0x00000019U)))))) 
              | ((0U == ((0x00000038U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x0000002aU)) 
                                         << 3U)) | 
                         ((4U & ((~ (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                             >> 0x00000029U))) 
                                 << 2U)) | ((2U & ((IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x00000021U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                             >> 0x0000001aU))))))) 
                 | ((0U == ((((0x0000000eU & ((IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 0x0000002aU)) 
                                              << 1U)) 
                              | (1U & (~ (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))) 
                             << 3U) | ((4U & ((IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 0x00000021U)) 
                                              << 2U)) 
                                       | (3U & (2U 
                                                ^ (IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x00000019U))))))) 
                    | ((0U == ((0x0000001cU & ((IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                        >> 0x0000002aU)) 
                                               << 2U)) 
                               | ((2U & ((~ (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 0x00000029U))) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                    >> 0x00000021U))))))) 
                       | ((0U == ((0x0000000cU & ((IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x0000002bU)) 
                                                  << 2U)) 
                                  | (3U & (~ (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x00000029U)))))) 
                          | (0x0cU == (0x0000000fU 
                                       & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_2 
        = ((0U == ((2U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                   >> 0x0000002cU)) 
                          << 1U)) | (1U & (~ (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x0000002bU)))))) 
           | (0x0eU == (0x0000000fU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x00000029U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__maybe_full))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_axi_master_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_1_2 
        = ((0U == ((2U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                   >> 0x0000002cU)) 
                          << 1U)) | (1U & (~ (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x0000002bU)))))) 
           | (0x0eU == (0x0000000fU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x00000029U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_1_0 
        = ((0U == ((0x0000001eU & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                            >> 0x00000029U)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x00000021U))))) 
           | ((0U == ((0x00000078U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x00000029U)) 
                                      << 3U)) | ((4U 
                                                  & ((IData)(
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x00000021U)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (IData)(
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                               >> 0x00000019U)))))) 
              | ((0U == ((0x00000038U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x0000002aU)) 
                                         << 3U)) | 
                         ((4U & ((~ (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                             >> 0x00000029U))) 
                                 << 2U)) | ((2U & ((IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x00000021U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                             >> 0x0000001aU))))))) 
                 | ((0U == ((((0x0000000eU & ((IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 0x0000002aU)) 
                                              << 1U)) 
                              | (1U & (~ (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))) 
                             << 3U) | ((4U & ((IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 0x00000021U)) 
                                              << 2U)) 
                                       | (3U & (2U 
                                                ^ (IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x00000019U))))))) 
                    | ((0U == ((0x0000001cU & ((IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                        >> 0x0000002aU)) 
                                               << 2U)) 
                               | ((2U & ((~ (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 0x00000029U))) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                    >> 0x00000021U))))))) 
                       | ((0U == ((0x0000000cU & ((IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x0000002bU)) 
                                                  << 2U)) 
                                  | (3U & (~ (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x00000029U)))))) 
                          | (0x0cU == (0x0000000fU 
                                       & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = ((0U == ((0x0000001eU & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                            >> 0x00000029U)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x00000021U))))) 
           | ((0U == ((0x00000078U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x00000029U)) 
                                      << 3U)) | ((4U 
                                                  & ((IData)(
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x00000021U)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (IData)(
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                               >> 0x00000019U)))))) 
              | ((0U == ((0x00000038U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x0000002aU)) 
                                         << 3U)) | 
                         ((4U & ((~ (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                             >> 0x00000029U))) 
                                 << 2U)) | ((2U & ((IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x00000021U)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                             >> 0x0000001aU))))))) 
                 | ((0U == ((((0x0000000eU & ((IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 0x0000002aU)) 
                                              << 1U)) 
                              | (1U & (~ (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))) 
                             << 3U) | ((4U & ((IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 0x00000021U)) 
                                              << 2U)) 
                                       | (3U & (2U 
                                                ^ (IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x00000019U))))))) 
                    | ((0U == ((0x0000001cU & ((IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                        >> 0x0000002aU)) 
                                               << 2U)) 
                               | ((2U & ((~ (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 0x00000029U))) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                    >> 0x00000021U))))))) 
                       | ((0U == ((0x0000000cU & ((IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x0000002bU)) 
                                                  << 2U)) 
                                  | (3U & (~ (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x00000029U)))))) 
                          | (0x0cU == (0x0000000fU 
                                       & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_2 
        = ((0U == ((2U & ((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                   >> 0x0000002cU)) 
                          << 1U)) | (1U & (~ (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x0000002bU)))))) 
           | (0x0eU == (0x0000000fU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x00000029U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___out_2_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___out_1_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3)));
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rx_reset) 
         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
    } else if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                & (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = (1U & (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                    & (~ (IData)(vlSelfRef.externalPins_spi_sck))) 
                   & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                  | ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                     & (IData)(vlSelfRef.externalPins_spi_sck))) 
                 | (((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                        >> 8U)) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
            & (2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           && (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i) 
                     >> 2U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_push 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
            & (0U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           && (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                        >> 7U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___out_0_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___anonIn_awready_T_3 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_ready 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1 
        = (7U & ((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1)) 
                 + ((8U == (8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1)))
                     ? 3U : ((4U == (0x0cU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1)))
                              ? 2U : ((2U == (0x0eU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1)))
                                       ? 1U : 0U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1 
        = (0x00000fffU & ((~ (((1U < (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                               << 1U) | (0U < (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))))) 
                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_when_1 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__finish) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready = 0U;
    }
    if (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
           & (0x00000018U == (0x0000001cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))) 
          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite)) 
         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                = (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in);
        }
    }
    vlSelfRef.__Vtableidx13 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h2c495b23_0
        [vlSelfRef.__Vtableidx13][0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h2c495b23_0
        [vlSelfRef.__Vtableidx13][1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h2c495b23_0
        [vlSelfRef.__Vtableidx13][2U];
    vlSelfRef.__Vtableidx17 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pprot 
        = VysyxSoCFull__ConstPool__TABLE_h34fb27aa_0
        [vlSelfRef.__Vtableidx17];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr = 0U;
    if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr;
        }
    }
    vlSelfRef.__Vtableidx19 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pstrb 
        = VysyxSoCFull__ConstPool__TABLE_h4883b175_0
        [vlSelfRef.__Vtableidx19];
    vlSelfRef.__Vtableidx18 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwrite 
        = VysyxSoCFull__ConstPool__TABLE_h7a4cc5ea_0
        [vlSelfRef.__Vtableidx18];
    vlSelfRef.__Vtableidx15 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_psel 
        = VysyxSoCFull__ConstPool__TABLE_h6388e771_0
        [vlSelfRef.__Vtableidx15];
    vlSelfRef.__Vtableidx16 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_penable 
        = VysyxSoCFull__ConstPool__TABLE_h6388e771_0
        [vlSelfRef.__Vtableidx16];
    vlSelfRef.__Vtableidx21 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_wantStart 
        = VysyxSoCFull__ConstPool__TABLE_h9441969b_0
        [vlSelfRef.__Vtableidx21];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_1_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0x0000100000000000ULL == (0x00001e0000000000ULL 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_2_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_1_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_0_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_1_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_2) 
            << 1U) | (8U == (0x0000000fU & (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                    >> 0x00000029U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_enq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_1)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__empty))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_1_2) 
            << 2U) | (((8U == (0x0000000fU & (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x00000029U)))) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_1_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_2) 
            << 2U) | (((8U == (0x0000000fU & (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x00000029U)))) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_2) 
            << 1U) | (8U == (0x0000000fU & (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                    >> 0x00000029U)))));
    vlSelfRef.__Vtableidx3 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg_string 
        = VysyxSoCFull__ConstPool__TABLE_h30ab60d4_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.__Vtableidx5 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0 
        = VysyxSoCFull__ConstPool__TABLE_hfc63d453_0
        [vlSelfRef.__Vtableidx5];
    vlSelfRef.__Vtableidx6 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_4 
        = VysyxSoCFull__ConstPool__TABLE_h5c1b3d27_0
        [vlSelfRef.__Vtableidx6];
    vlSelfRef.__Vtableidx7 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_wantStart 
        = VysyxSoCFull__ConstPool__TABLE_h95aee035_0
        [vlSelfRef.__Vtableidx7];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_2_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___out_2_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelfRef.externalPins_spi_sck = __Vdly__externalPins_spi_sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_0_awready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___out_0_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_awvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___anonIn_awready_T_3));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1 
        = (0x00000fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1) 
                          + (((2U == (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                              << 2U) | (((1U == (3U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                                         << 1U) | (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_0 
        = (1U & (((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last) 
                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag))) 
                       & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))) 
                      << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last) 
                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag))) 
                                 & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))) 
                                << 2U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last) 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag))) 
                                             & (7U 
                                                != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))) 
                                            << 1U) 
                                           | (((0U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag))) 
                                              & (7U 
                                                 != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))))) 
                   << 4U) | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last) 
                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag))) 
                                & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))) 
                               << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))) 
                                         << 2U)) | 
                             (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last) 
                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag))) 
                                & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))) 
                               << 1U) | (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag))) 
                                         & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)))))) 
                 >> (7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                   >> 0x0000002dU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
                 & (((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)) 
                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last) 
                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag))) 
                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))) 
                         << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last) 
                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag))) 
                                    & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))) 
                                   << 2U)) | (((((0U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last) 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag))) 
                                                & (7U 
                                                   != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))) 
                                               << 1U) 
                                              | (((0U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last) 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag))) 
                                                 & (7U 
                                                    != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))))) 
                      << 4U) | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last) 
                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag))) 
                                   & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))) 
                                  << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last) 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag))) 
                                             & (7U 
                                                != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))) 
                                            << 2U)) 
                                | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last) 
                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag))) 
                                     & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))) 
                                    << 1U) | (((0U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag))) 
                                              & (7U 
                                                 != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)))))) 
                    >> (7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                      >> 0x0000002dU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT___zz_when 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__rd_vaild 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0x0aU] 
                                                                     | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0x0bU] 
                                                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0x0cU] 
                                                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0x0dU] 
                                                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0eU] 
                                                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0fU])))))))))))))))) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we) 
            & (2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))) 
           && (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i) 
                     >> 1U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 
        = ((0x00000080U & ((~ (0U != (0x0000007fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))) 
                           << 7U)) | (0x0000007fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    if (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
           & (0x00000014U == (0x0000001cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))) 
          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite)) 
         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                = ((0xff00U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                   | (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                = ((0x00ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                   | (0x0000ff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt))) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__enable 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)) 
           & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dlc))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_2_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_1_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_1_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_awvalid) 
           & (0x0000100000000000ULL == (0x00001e0000000000ULL 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_0_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_1_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT____VdfgExtracted_h54ee5261__0 
        = ((0x00000fc0U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1)) 
           | (0x0000003fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_wantStart = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_wvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr = 0U;
    if ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
        if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr 
                = (0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt);
        }
        if ((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_wantStart = 1U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_4 
        = ((0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                         >> 4U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0)
            : ((1U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                             >> 4U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1)
                : ((2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                 >> 4U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2)
                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ErrorReg = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak = 0U;
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
                    if ((1U & (~ ((((((((0x00006063U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                                        | (0x00007063U 
                                           == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                       | (0x00000037U 
                                          == (0x0000007fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                      | (0x00000017U 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                     | (0x0000006fU 
                                        == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                    | (0x00001073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                   | (0x00002073U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                  | (0x00003073U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
                        if ((0x00005073U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((0x00006073U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                if ((0x00007073U != 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                    if ((0x00100073U 
                                         != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                        if ((0x00000073U 
                                             != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                            if ((0x30200073U 
                                                 != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                                if (
                                                    (0x0000100fU 
                                                     != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ErrorReg = 1U;
                                                }
                                                if (
                                                    (0x0000100fU 
                                                     == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((0x00100073U 
                                         == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 1U;
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 1U;
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 1U;
                    }
                }
            }
        }
    }
}
