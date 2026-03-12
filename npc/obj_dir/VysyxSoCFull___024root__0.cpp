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

extern "C" void mrom_read(int raddr, int* rdata);

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int rdata__Vcvt;
    mrom_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = (rdata__Vcvt);
}

extern "C" int psram_ctr(int addr, int data, int write);

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_ctr_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ write, IData/*31:0*/ &psram_ctr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_ctr_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int write__Vcvt;
    write__Vcvt = write;
    int psram_ctr__Vfuncrtn__Vcvt;
    psram_ctr__Vfuncrtn__Vcvt = psram_ctr(addr__Vcvt, data__Vcvt, write__Vcvt);
    psram_ctr__Vfuncrtn = (psram_ctr__Vfuncrtn__Vcvt);
}

extern "C" int sdram_ctr(int addr, int data, int write);

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__sdram_ctr_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ write, IData/*31:0*/ &sdram_ctr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__sdram_ctr_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int write__Vcvt;
    write__Vcvt = write;
    int sdram_ctr__Vfuncrtn__Vcvt;
    sdram_ctr__Vfuncrtn__Vcvt = sdram_ctr(addr__Vcvt, data__Vcvt, write__Vcvt);
    sdram_ctr__Vfuncrtn = (sdram_ctr__Vfuncrtn__Vcvt);
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0 
        = ((~ (IData)(vlSelfRef.reset)) & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
}

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
                                                    (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__CMD_WRITE) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__sdram__DOT__CMD_WRITE__0))) 
                                                       << 0x0000000cU) 
                                                      | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__CMD_READ) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__sdram__DOT__CMD_READ__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__CMD_ACTIVE) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__sdram__DOT__CMD_ACTIVE__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_psram_ce_n__0))) 
                                                              << 1U) 
                                                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_psram_sck__0)))) 
                                                         << 8U)) 
                                                     | (((((((IData)(vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_psram_sck__0))) 
                                                            << 3U) 
                                                           | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_psram_ce_n__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_spi_sck__0))))) 
                                                         << 4U) 
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
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step__0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_spi_sck__0 
        = vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_psram_ce_n__0 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_psram_sck__0 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__sdram__DOT__CMD_ACTIVE__0 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__CMD_ACTIVE;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__sdram__DOT__CMD_READ__0 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__CMD_READ;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__sdram__DOT__CMD_WRITE__0 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__CMD_WRITE;
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
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000022U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__code_reg);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000027U, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle));
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000028U, (IData)(
                                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle 
                                                                                >> 0x00000020U)));
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000020U, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000021U, 
                                                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild)
                                                                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC
                                                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt));
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
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__CAS_latch 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                     >> 4U));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__BURST_length 
            = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h13106c9e_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h9f960a6b_0;
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
extern const VlUnpacked<CData/*5:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_heaea4f61_0;
extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h3f0f4896_0;
extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h238505a3_0;
extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_hfa3a2e46_0;

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
    IData/*31:0*/ __Vtask_ysyxSoCFull__DOT__sdram__DOT__sdram_ctr__54__Vfuncout;
    __Vtask_ysyxSoCFull__DOT__sdram__DOT__sdram_ctr__54__Vfuncout = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
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
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag = 0;
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
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg = 0;
    CData/*1:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*2:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0 = 0;
    IData/*18:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*1:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    SData/*10:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    SData/*10:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    SData/*10:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    SData/*10:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    QData/*46:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*35:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*46:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*38:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0 = 0;
    CData/*2:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0 = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2930: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2930, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2932: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2932, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                            >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2936: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2936, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2938: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2938, "", false);
    }
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
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
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((0x00000200U & ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid))) 
                                                << 9U)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5055: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:181\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 5055, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5057: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 5057, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid)) 
                                   | (~ ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))) 
                                         || (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram))))) 
                                  | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5061: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:190\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 5061, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5063: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 5063, "", false);
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
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
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:592: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 592, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:594: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 594, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:598: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 598, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:600: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 600, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:604: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 604, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:606: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 606, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:610: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 610, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:612: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 612, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 1U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:616: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 616, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:618: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 618, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 1U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:628: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 628, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:630: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 630, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 2U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:640: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 640, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:642: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 642, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 2U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:652: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 652, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:654: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 654, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 3U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:664: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 664, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:666: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 666, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 3U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:676: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 676, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:678: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 678, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 4U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:688: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 688, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:690: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 690, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 4U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:700: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 700, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:702: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 702, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 5U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:712: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 712, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:714: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 714, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 5U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:724: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 724, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:726: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 726, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 6U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:736: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 736, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:738: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 738, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 6U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:748: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 748, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:750: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 750, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 7U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:760: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 760, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:762: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 762, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 7U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:772: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 772, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:774: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 774, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 8U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:784: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 784, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:786: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 786, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 8U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:796: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 796, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:798: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 798, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 9U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:808: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 808, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:810: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 810, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 9U))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:820: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 820, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:822: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 822, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 0x0000000aU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:832: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 832, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:834: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 834, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 0x0000000aU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:844: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 844, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:846: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 846, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 0x0000000bU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:856: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 856, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:858: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 858, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 0x0000000bU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:868: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 868, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:870: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 870, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 0x0000000cU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:880: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 880, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:882: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 882, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 0x0000000cU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:892: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 892, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:894: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 894, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 0x0000000dU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:904: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 904, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:906: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 906, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 0x0000000dU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:916: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 916, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:918: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 918, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 0x0000000eU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:928: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 928, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:930: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 930, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 0x0000000eU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:940: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 940, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:942: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 942, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                                              >> 0x0000000fU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:952: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 952, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:954: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 954, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                                              >> 0x0000000fU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:964: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 964, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:966: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 966, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:976: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 976, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:978: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 978, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:982: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 982, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:984: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 984, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:988: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 988, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:990: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 990, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:994: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 994, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:996: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 996, "", false);
    }
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
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
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1764: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1764, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1766: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1766, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1770: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1770, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1772: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1772, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1776: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1776, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1778: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1778, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1782: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1782, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1784: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1784, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 1U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1788: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1788, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1790: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1790, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1794: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1794, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1796: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1796, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 1U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1800: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1800, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1802: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1802, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1806: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1806, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1808: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1808, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 2U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1812: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1812, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1814: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1814, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1818: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1818, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1820: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1820, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 2U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1824: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1824, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1826: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1826, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1830: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1830, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1832: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1832, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 3U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1836: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1836, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1838: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1838, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1842: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1842, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1844: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1844, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 3U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1848: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1848, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1850: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1850, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1854: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1854, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1856: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1856, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 4U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1860: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1860, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1862: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1862, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1866: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1866, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1868: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1868, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 4U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1872: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1872, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1874: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1874, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1878: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1878, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1880: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1880, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 5U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1884: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1884, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1886: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1886, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1890: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1890, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1892: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1892, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 5U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1896: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1896, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1898: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1898, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1902: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1902, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1904: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1904, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 6U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1908: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1908, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1910: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1910, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1914: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1914, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1916: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1916, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 6U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1920: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1920, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1922: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1922, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1926: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1926, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1928: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1928, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 7U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1932: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1932, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1934: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1934, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1938: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1938, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1940: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1940, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 7U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1944: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1944, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1946: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1946, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1950: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1950, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1952: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1952, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 8U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1956: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1956, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1958: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1958, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1962: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1962, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1964: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1964, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 8U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1968: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1968, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1970: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1970, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1974: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1974, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1976: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1976, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 9U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1980: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1980, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1982: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1982, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1986: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1986, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1988: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1988, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 9U))) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1992: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1992, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1994: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1994, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1998: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 1998, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2000: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2000, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2004: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2004, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2006: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2006, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2010: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2010, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2012: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2012, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2016: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2016, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2018: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2018, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2022: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2022, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2024: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2024, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2028: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2028, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2030: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2030, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2034: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2034, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2036: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2036, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2040: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2040, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2042: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2042, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2046: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2046, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2048: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2048, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2052: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2052, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2054: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2054, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2058: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2058, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2060: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2060, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2064: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2064, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2066: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2066, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2070: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2070, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2072: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2072, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2076: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2076, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2078: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2078, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2082: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2082, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2084: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2084, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2088: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2088, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2090: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2090, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2094: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2094, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2096: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2096, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2100: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2100, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2102: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2102, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2106: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2106, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2108: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2108, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2112: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2112, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2114: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2114, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2118: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2118, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2120: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2120, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2124: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2124, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2126: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2126, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2130: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2130, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2132: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2132, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2136: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2136, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2138: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2138, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2142: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2142, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2144: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2144, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1))) 
                                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1))) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2150: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2150, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2152: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2152, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2156: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2156, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2158: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2158, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2162: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2162, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2164: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2164, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2168: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2168, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2170: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 2170, "", false);
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3305: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:61\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 3305, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3307: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 3307, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3311: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:62\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 3311, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3313: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 3313, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3317: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:64\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 3317, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3319: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 3319, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3323: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 3323, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3325: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 3325, "", false);
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
    if ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__sdram_ctr_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__full_addr, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dq, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q), __Vtask_ysyxSoCFull__DOT__sdram__DOT__sdram_ctr__54__Vfuncout);
    }
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4375: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:69\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 4375, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4377: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 4377, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
                                  | ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5) 
                                     >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4381: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:98\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 4381, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4383: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../YSYX_SOC/ysyxSoC/build/ysyxSoCFull.v", 4383, "", false);
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelfRef.externalPins_ps2_clk));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1) 
                              - (IData)(1U)));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_1) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
            [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0 = 1U;
    }
    if (((0x14U <= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
         & (0x1bU >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) {
            __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = ((0x000000f0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [(3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                            >> 1U) 
                                           - (IData)(2U)))] 
                                   << 4U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__din));
            __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                          >> 1U) - (IData)(2U)));
            __VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 1U;
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_w_ready) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat) 
                              - (IData)(1U)));
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)))) {
        if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len;
            }
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid = 0U;
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0) 
                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag)))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid)))) {
            if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag = 0U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L 
            = ((IData)(1U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L);
        if ((0xffffffffU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H 
                = ((IData)(1U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H);
        }
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
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count = 0U;
    } else if ((IData)((4U == (6U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync))))) {
        if ((0x0aU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count))) {
            if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer)) 
                               & (IData)(vlSelfRef.externalPins_ps2_data)) 
                              & VL_REDXOR_32((0x000001ffU 
                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer) 
                                                 >> 1U))))))) {
                VL_WRITEF_NX("receive %x\n",0,8,(0x000000ffU 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer) 
                                                    >> 1U)));
            }
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count = 0U;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT____Vlvbound_h8e503726__0 
                = vlSelfRef.externalPins_ps2_data;
            if (VL_LIKELY(((9U >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count))))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count))) 
                        & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer)) 
                       | (0x03ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT____Vlvbound_h8e503726__0) 
                                     << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count))));
            }
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count)));
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_w_ready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr 
            = ((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr) 
               | (0x00000fffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1) {
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
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000dU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000dU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000cU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000bU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000bU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000aU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000aU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 9U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 9U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 8U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 8U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 7U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 7U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 6U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 6U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 4U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 4U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count) 
                                                       + 
                                                       (((IData)(1U) 
                                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                                      - 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 1U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 2U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 2U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 3U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 5U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 5U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000eU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000eU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                                           >> 0x0000000fU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                          >> 0x0000000fU)))));
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata);
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x000007ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 1U))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
                              >> 8U));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x000007ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 2U))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
                              >> 0x10U));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x000007ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 3U))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
               >> 0x18U);
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (0x000007ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000dU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000dU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000cU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000bU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000bU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000aU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000aU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 9U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 9U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 8U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 8U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 7U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 7U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 6U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 6U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count) 
                                                       + 
                                                       (((IData)(1U) 
                                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                                      - 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 1U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 2U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 2U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 3U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 4U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 4U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 5U))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 5U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000eU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000eU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                                           >> 0x0000000fU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                          >> 0x0000000fU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid))) 
                                                   & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT___zz_when) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT____Vlvbound_hf8d94871__0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata;
        if ((0x0004afffU >= (0x0007ffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
                                            >> 2U)))) {
            __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT____Vlvbound_hf8d94871__0;
            __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0 
                = (0x0007ffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
                                  >> 2U));
            __VdlySet__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0 = 1U;
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_1) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rdata);
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 
            = (0x0000000fU & ((0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                           (3U 
                                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                               >> 4U)), 2U)) 
                              + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt)));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0 = 1U;
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid))) 
                                                   & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full))) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                << 4U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb)));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                << 0x0000002bU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr)) 
                                    << 0x0000000bU) 
                                   | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                              >> 3U));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                << 0x0000002bU) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)) 
                                    << 0x0000000bU) 
                                   | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)
                                                  ? 
                                                 (~ 
                                                  (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                                        ? 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                                        >> 1U)
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                << 0x00000023U) | (((QData)((IData)(
                                                    ((1U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                      : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                    << 3U) | (QData)((IData)(
                                                             (1U 
                                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp) 
                                                                 << 1U))))));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid;
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid)))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_resp = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_id 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id)
                : 0U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1 
        = (0x7800U == (0x00007fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                      >> 0x0000000dU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x000007ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                          >> 2U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1 
        = (0x7800U == (0x00007fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                      >> 0x0000000dU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid;
    }
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
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
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
            = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arburst))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arburst))
                    ? ((0x00007fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                                       & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                          >> 8U))) 
                       | (~ ((0xffff8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1) 
                             | (0x00007fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                  >> 8U))))))
                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1));
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
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr)) 
                << 0x0000000dU) | (QData)((IData)((
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                                                      ? 0U
                                                      : 3U) 
                                                    << 5U) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arsize) 
                                                       << 2U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                                                          ? 0U
                                                          : 1U))))));
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
            = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awburst))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awburst))
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
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr)) 
                << 0x0000000dU) | (QData)((IData)(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2_axi_aw_payload_size) 
                                                   << 2U))));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
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
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__sw_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1 = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__led_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_data_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__r_data = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 0x0000000fU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 0x0000000eU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 0x0000000aU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 0x0000000bU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 0x0000000cU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                               >> 0x0000000dU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 0x0000000fU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 0x0000000eU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 0x0000000aU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 0x0000000bU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 0x0000000cU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                               >> 0x0000000dU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid)))));
        if ((0x0320U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt 
                = ((0x020dU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt))
                    ? 1U : (0x000003ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt))));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt = 1U;
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)) 
                     - (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
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
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)) 
                     - (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT___zz_when) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_pready) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag = 1U;
            }
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt 
                = ((IData)(0x000186a0U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt);
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT___zz_when_1) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt 
                    = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt 
                       - (IData)(0x00060187U));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag = 0U;
            }
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state) 
                << 6U) | ((0x00000020U & ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid)) 
                                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid)))) 
                                          << 5U)) | 
                          ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready)
                              ? (2U & ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid)) 
                                           | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid)))) 
                                       << 1U)) : 1U) 
                            << 2U) | (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                            | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty))))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
            = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state), 1U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__sw_reg 
            = vlSelfRef.externalPins_gpio_in;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                  & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 1U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 2U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 3U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 4U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 5U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 6U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 8U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 9U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000aU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000bU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000cU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000dU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000eU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000fU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy 
                = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_when) {
            if ((0x10002000U == (0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__led_reg 
                    = (0x0000ffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata);
            }
            if ((0x10002000U != (0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr))) {
                if ((0x10002008U == (0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata;
                }
            }
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 1U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 2U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 3U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 4U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 5U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 6U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 8U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 9U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000aU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000bU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000cU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000dU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000eU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000fU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
        }
        if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 
                = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_ps2_get) 
             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_get_regNext)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_data_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_ps2_getdata;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT___zz_when_1) {
            if ((0x10011000U == (0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_data_1 = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag)))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_pready) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__r_data 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_prdata;
            }
        }
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
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt)));
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
                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
                                                 >> 2U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr = 0x10001000U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data 
                        = (0x03000000U | (0x003fffffU 
                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
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
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 4U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r 
            = (0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 0x0000000bU));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 0x0000000bU));
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
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r = 0U;
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
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt = 0x30000000U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_grp_flag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag = 0U;
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
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag = 0U;
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
                    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__encode_w_fire) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_fire))) {
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
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__vaild) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag = 1U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag = 1U;
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid)) 
             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_fire))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag = 0U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3 = 0U;
        }
        if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
            if (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_4)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready))) {
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
            if ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arready)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag = 1U;
            }
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__axi_r_fire) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt)));
                if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt))) {
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
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid) 
             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel) 
                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                    ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1))
                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arready))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag = 0U;
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_t0 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_aw_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg = 0U;
    } else {
        if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                           - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt);
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag = 0U;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0 
                        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                           - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt);
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                        = ((IData)(0x000186a0U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt);
                }
            } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                    = ((IData)(0x000186a0U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt);
                if (VL_UNLIKELY(((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0 
                                  > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt)))) {
                    VL_WRITEF_NX("FAILURE \n",0);
                    VL_FINISH_MT("../YSYX_SOC/ysyxSoC/perip/amba/axi4_delayer_my.v", 729, "");
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt 
                    = (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_r_max_cnt);
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag = 1U;
            }
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_1) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                    = ((IData)(0x000186a0U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt);
            }
        } else if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_2) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index)));
            }
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_3) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                    = ((IData)(0x000186a0U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt);
                if ((0x00000010U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt 
                        = (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_r_max_cnt);
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag = 1U;
                }
            }
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                           - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt);
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index)));
                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_5) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0 
                            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                               - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt);
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                        = ((IData)(0x000186a0U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt);
                }
            }
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_onEntry_ar) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag = 0U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_7) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
                        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
                           - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b);
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_aw_flag = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_t0 
                        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
                           - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt);
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_8)
                            ? ((IData)(0x000186a0U) 
                               + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt)
                            : ((IData)(0x000186a0U) 
                               + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt));
                }
            } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awready) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
                    = ((IData)(0x000186a0U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt);
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt 
                    = (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_w_max_cnt);
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_aw_flag = 1U;
            } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bvalid) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
                    = ((IData)(0x000186a0U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt);
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b 
                    = (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_w_max_cnt);
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag = 1U;
            }
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_9) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
                    = ((IData)(0x000186a0U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt);
            }
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_wantStart) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_t0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_onEntry_r) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index = 0U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg = 1U;
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
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg 
            = (0x0000000fU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                      >> 0x0000002bU)));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg 
            = (0x0000000fU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                      >> 0x0000002bU)));
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_ps2_getdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0))) 
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
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0))) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)));
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
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) 
               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) 
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
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready) 
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
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter 
            = (0x000001ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo) 
                              - ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid))));
        if ((1U & VL_REDXOR_32((0x000001ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer) 
                                               >> 1U))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_ps2_getdata 
                = (0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer) 
                                  >> 1U));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild = 1U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data)) 
                << 5U) | (QData)((IData)((1U | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb) 
                                                << 1U)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
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
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    vlSelfRef.externalPins_vga_hsync = (0x0060U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__h_valid 
        = ((0x0090U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt)) 
           & (0x0310U >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt)));
    vlSelfRef.externalPins_vga_vsync = (2U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__v_valid 
        = ((0x0023U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt)) 
           & (0x0203U >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT___zz_when_1 
        = (0x00060187U <= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt);
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base 
        = (0x00000fffU & ((~ (((1U < (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size))) 
                               << 1U) | (0U < (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size))))) 
                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.externalPins_gpio_out = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__led_reg;
    vlSelfRef.__Vtableidx14 = (0x0000000fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_0 
        = VysyxSoCFull__ConstPool__TABLE_h13106c9e_0
        [vlSelfRef.__Vtableidx14];
    vlSelfRef.__Vtableidx15 = (0x0000000fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg 
                                              >> 4U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_1 
        = VysyxSoCFull__ConstPool__TABLE_h13106c9e_0
        [vlSelfRef.__Vtableidx15];
    vlSelfRef.__Vtableidx16 = (0x0000000fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg 
                                              >> 8U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_2 
        = VysyxSoCFull__ConstPool__TABLE_h13106c9e_0
        [vlSelfRef.__Vtableidx16];
    vlSelfRef.__Vtableidx17 = (0x0000000fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg 
                                              >> 0x0000000cU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_3 
        = VysyxSoCFull__ConstPool__TABLE_h13106c9e_0
        [vlSelfRef.__Vtableidx17];
    vlSelfRef.__Vtableidx18 = (0x0000000fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg 
                                              >> 0x00000010U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_4 
        = VysyxSoCFull__ConstPool__TABLE_h13106c9e_0
        [vlSelfRef.__Vtableidx18];
    vlSelfRef.__Vtableidx19 = (0x0000000fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg 
                                              >> 0x00000014U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_5 
        = VysyxSoCFull__ConstPool__TABLE_h13106c9e_0
        [vlSelfRef.__Vtableidx19];
    vlSelfRef.__Vtableidx20 = (0x0000000fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg 
                                              >> 0x00000018U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_6 
        = VysyxSoCFull__ConstPool__TABLE_h13106c9e_0
        [vlSelfRef.__Vtableidx20];
    vlSelfRef.__Vtableidx21 = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg 
                               >> 0x0000001cU);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_7 
        = VysyxSoCFull__ConstPool__TABLE_h13106c9e_0
        [vlSelfRef.__Vtableidx21];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_get_regNext 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_ps2_get;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT___zz_when 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready = 0U;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__finish) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_5 
        = ((7U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index))) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_w_max_cnt 
        = (0x0007ffffffffffffULL & (VL_DIV_QQQ(51, 
                                               (0x0007ffffffffffffULL 
                                                & (0x0000000000060187ULL 
                                                   * (QData)((IData)(
                                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt 
                                                                      - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_t0))))), 0x00000000000186a0ULL) 
                                    + (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_t0))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_8 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt 
           <= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_7 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b 
           <= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_wantStart 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_r_max_cnt 
        = (0x0007ffffffffffffULL & (VL_DIV_QQQ(51, 
                                               (0x0007ffffffffffffULL 
                                                & (0x0000000000060187ULL 
                                                   * (QData)((IData)(
                                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt 
                                                                      - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0))))), 0x00000000000186a0ULL) 
                                    + (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt 
           <= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_wantStart = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst)
            ? 0ULL : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT___zz_mcycle);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT___zz_mcycle 
        = (1ULL + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle);
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
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
                    ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                       < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)
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
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc = 0x80000000U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_ready) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid = 0U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_w_ready) {
            if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid = 0U;
            }
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__vaild) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt;
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
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code = 0x00000013U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__vaild) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code;
    }
    vlSelfRef.externalPins_vga_valid = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__h_valid) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__v_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT___zz_vga_data_2 
        = (0x0007ffffU & ((0x000fffffU & ((IData)(0x00000280U) 
                                          * ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__v_valid)
                                              ? (0x000003ffU 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt) 
                                                    - (IData)(0x0024U)))
                                              : 0U))) 
                          + ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__h_valid)
                              ? (0x000003ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt) 
                                                - (IData)(0x0091U)))
                              : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata = 0U;
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr 
        = (0x00000fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base) 
                          + (((2U == (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size))) 
                              << 2U) | (((1U == (3U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size))) 
                                         << 1U) | (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1;
    vlSelfRef.externalPins_gpio_seg_0 = (0x000000ffU 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_0)));
    vlSelfRef.externalPins_gpio_seg_1 = (0x000000ffU 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_1)));
    vlSelfRef.externalPins_gpio_seg_2 = (0x000000ffU 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_2)));
    vlSelfRef.externalPins_gpio_seg_3 = (0x000000ffU 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_3)));
    vlSelfRef.externalPins_gpio_seg_4 = (0x000000ffU 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_4)));
    vlSelfRef.externalPins_gpio_seg_5 = (0x000000ffU 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_5)));
    vlSelfRef.externalPins_gpio_seg_6 = (0x000000ffU 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_6)));
    vlSelfRef.externalPins_gpio_seg_7 = (0x000000ffU 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT___zz_gpio_seg_7)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (0x0000000fU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 0x0000002dU)))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awburst 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 5U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid 
            = (0x0000000fU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 0x0000002dU)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awburst = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full))))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid = 0U;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag) {
            if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_7)))) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_8) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready = 1U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready = 1U;
                }
            }
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_7) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid = 1U;
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready = 0U;
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready = 1U;
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid = 0U;
    if ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))) {
        if ((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_wantStart = 1U;
        }
        if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag) {
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data
                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index];
                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_5) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast = 1U;
                    }
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid = 1U;
                }
            }
        }
    }
    vlSelfRef.__Vtableidx34 = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_wantStart) 
                                 << 6U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_5) 
                                            << 5U) 
                                           | (0x00000018U 
                                              & ((- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when))) 
                                                 << 3U)))) 
                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag) 
                                   << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext 
        = VysyxSoCFull__ConstPool__TABLE_h9f960a6b_0
        [vlSelfRef.__Vtableidx34];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram_spinal_port0 
        = ((0x0004afffU >= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT___zz_vga_data_2)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT___zz_vga_data_2]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag) {
        if ((0x00060187U <= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt)) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready = 1U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 
        = (((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready)) 
           | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_penable 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT____VdfgExtracted_ha86a3254__0 
        = ((0x00000fc0U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base)) 
           | (0x0000003fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr)));
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_ps2_get 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x000001ffU 
                                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer) 
                                                                      >> 1U)))));
    vlSelfRef.__Vtableidx22 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h2c495b23_0
        [vlSelfRef.__Vtableidx22][0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h2c495b23_0
        [vlSelfRef.__Vtableidx22][1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h2c495b23_0
        [vlSelfRef.__Vtableidx22][2U];
    vlSelfRef.__Vtableidx26 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pprot 
        = VysyxSoCFull__ConstPool__TABLE_h34fb27aa_0
        [vlSelfRef.__Vtableidx26];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata = 0U;
    vlSelfRef.__Vtableidx28 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pstrb 
        = VysyxSoCFull__ConstPool__TABLE_h4883b175_0
        [vlSelfRef.__Vtableidx28];
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
    vlSelfRef.__Vtableidx27 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwrite 
        = VysyxSoCFull__ConstPool__TABLE_h7a4cc5ea_0
        [vlSelfRef.__Vtableidx27];
    vlSelfRef.__Vtableidx25 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_penable 
        = VysyxSoCFull__ConstPool__TABLE_h6388e771_0
        [vlSelfRef.__Vtableidx25];
    vlSelfRef.__Vtableidx24 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_psel 
        = VysyxSoCFull__ConstPool__TABLE_h6388e771_0
        [vlSelfRef.__Vtableidx24];
    vlSelfRef.__Vtableidx30 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_wantStart 
        = VysyxSoCFull__ConstPool__TABLE_h9441969b_0
        [vlSelfRef.__Vtableidx30];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_wantStart = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_onEntry_ar 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext)) 
           & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_onEntry_r 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext)) 
           & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
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
    vlSelfRef.externalPins_vga_r = (0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram_spinal_port0 
                                                   >> 0x00000010U));
    vlSelfRef.externalPins_vga_g = (0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram_spinal_port0 
                                                   >> 8U));
    vlSelfRef.externalPins_vga_b = (0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram_spinal_port0);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr
            : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst))
                ? ((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr) 
                   | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase))
                       ? ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase))
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT____VdfgExtracted_ha86a3254__0)
                           : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase))
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT____VdfgExtracted_ha86a3254__0)
                               : ((0x00000fe0U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base)) 
                                  | (0x0000001fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr)))))
                       : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase))
                           ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase))
                               ? ((0x00000ff0U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base)) 
                                  | (0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr)))
                               : ((0x00000ff8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base)) 
                                  | (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr))))
                           : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase))
                               ? ((0x00000ffcU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base)) 
                                  | (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr)))
                               : ((0x00000ffeU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base)) 
                                  | (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr)))))))
                : ((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr) 
                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1 
        = (0x00000fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1) 
                          + (((2U == (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                              << 2U) | (((1U == (3U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                                         << 1U) | (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready)) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag) {
        if ((0x00060187U <= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt)) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__r_data;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)
                ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 4U)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite)
                ? (0x0000000fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r)))
                : 0U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__rd_vaild 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT____VdfgExtracted_h54ee5261__0 
        = ((0x00000fc0U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1)) 
           | (0x0000003fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelfRef.__Vtableidx35 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask) 
                                << 7U) | (((((0x0000000cU 
                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full))) 
                                           << 3U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready 
        = VysyxSoCFull__ConstPool__TABLE_heaea4f61_0
        [vlSelfRef.__Vtableidx35];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__Vtableidx36 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1) 
                                << 7U) | (((((0x0000000cU 
                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                 << 2U)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                                << 1U)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))) 
                                           << 3U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 
        = VysyxSoCFull__ConstPool__TABLE_heaea4f61_0
        [vlSelfRef.__Vtableidx36];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_psel 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) 
                 | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_4 
        = ((0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                         >> 4U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0)
            : ((1U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                             >> 4U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1)
                : ((2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                 >> 4U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2)
                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ErrorReg = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data 
        = ((((0x0b00U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                          >> 0x00000014U)) | (0x0b80U 
                                              == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 0x00000014U))) 
            | (((0x0300U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                             >> 0x00000014U)) | (0x0305U 
                                                 == 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 0x00000014U))) 
               | ((0x0342U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                               >> 0x00000014U)) | (
                                                   (0x0341U 
                                                    == 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                     >> 0x00000014U)) 
                                                   | ((0x0f11U 
                                                       == 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                        >> 0x00000014U)) 
                                                      | (0x0f12U 
                                                         == 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                          >> 0x00000014U)))))))
            ? ((0x0b00U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                            >> 0x00000014U)) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle)
                : ((0x0b80U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                >> 0x00000014U)) ? (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle 
                                                            >> 0x00000020U))
                    : ((0x0300U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                    >> 0x00000014U))
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mstatus
                        : ((0x0305U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                        >> 0x00000014U))
                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec
                            : ((0x0342U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                            >> 0x00000014U))
                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcause
                                : ((0x0341U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                >> 0x00000014U))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc
                                    : ((0x0f11U == 
                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                         >> 0x00000014U))
                                        ? 0x79737978U
                                        : 0x018ce19aU)))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_pc_nPC_1 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc 
           + (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                           >> 0x0000001fU))) << 0x0000000dU) 
              | ((((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                          >> 0x0000001eU)) | (1U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                               >> 7U))) 
                  << 0x0000000bU) | ((0x000007e0U & 
                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                           >> 7U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2 
        = ((0U == (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                  >> 0x00000014U)))
            ? 0U : ((0x01000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                     ? ((0x00800000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                         ? ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28))
                             : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24)))
                         : ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20))
                             : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16))))
                     : ((0x00800000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                         ? ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12))
                             : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8)))
                         : ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4))
                             : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 0x0fU;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I 
        = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
              >> 0x00000014U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_S 
        = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000fe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                              >> 0x00000014U)) | (0x0000001fU 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                     >> 7U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
        = ((0U == (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                  >> 0x0000000fU)))
            ? 0U : ((0x00080000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                     ? ((0x00040000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                         ? ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28))
                             : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24)))
                         : ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20))
                             : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16))))
                     : ((0x00040000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                         ? ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12))
                             : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8)))
                         : ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4))
                             : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result_1 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst_1))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1
            : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst_1))
                ? ((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1) 
                   | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1))
                       ? ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1))
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT____VdfgExtracted_h54ee5261__0)
                           : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1))
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT____VdfgExtracted_h54ee5261__0)
                               : ((0x00000fe0U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1)) 
                                  | (0x0000001fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1)))))
                       : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1))
                           ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1))
                               ? ((0x00000ff0U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1)) 
                                  | (0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1)))
                               : ((0x00000ff8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1)) 
                                  | (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1))))
                           : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1))
                               ? ((0x00000ffcU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1)) 
                                  | (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1)))
                               : ((0x00000ffeU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1)) 
                                  | (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1)))))))
                : ((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1) 
                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_valid = 0U;
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_4) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem
                [(0x0000000fU & ((0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                              (3U 
                                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                                  >> 4U)), 2U)) 
                                 + (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                          >> 2U))))];
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_valid 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_start_flag;
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
                                            if ((0x30200073U 
                                                 == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret = 1U;
                                            }
                                        }
                                        if ((0x00000073U 
                                             == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall = 1U;
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
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag;
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag;
                        }
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 1U;
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            } else if ((0x00001003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 3U;
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            } else if ((0x00002003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 0x0fU;
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            } else if ((0x00004003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 1U;
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            } else {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 3U;
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            }
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)
            : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2))));
    if ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
        if ((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_wantStart = 1U;
        }
        if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr 
                = (0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt);
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak_module__DOT__ebreak_TOP(1U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc = 0U;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size))
            ? 0U : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size))
                     ? 1U : 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 5U)));
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & 0U);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & 0U);
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & 1U);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & 3U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT____VdfgExtracted_hf015dc25__0 
        = VL_LTES_III(32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_24 
        = VL_LTS_III(32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_28 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
           + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
           + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_S);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask) 
              << 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0x000000ffU & ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb))
                           ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                              >> 8U) : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                                        >> 0x00000018U)));
    vlSelfRef.__Vtableidx37 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = VysyxSoCFull__ConstPool__TABLE_h3f0f4896_0
        [vlSelfRef.__Vtableidx37];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__finish 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__axi_r_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr = 0U;
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
                                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data 
                                                = (
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1
                                                    : 
                                                   ((0x00002073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                                                     | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data)
                                                     : 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data 
                                                     & (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1))));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data 
                            = (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                              >> 0x0000000fU));
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data 
                            = ((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                               >> 0x0000000fU)) 
                               | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data);
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data 
                            = (0x0000001fU & ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                               >> 0x0000000fU) 
                                              & (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data)));
                    }
                }
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
                    if ((0x00000067U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_28;
                    } else if ((0x00002023U != (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((0x00001023U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((0x00000023U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                if ((0x00000063U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                    if ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                                         == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)) {
                                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00001063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                    if ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                                         != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)) {
                                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00004063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_24) {
                                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT____VdfgExtracted_hf015dc25__0) {
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_pc_nPC_1;
                                }
                            }
                        }
                    }
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 0x0fU;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr 
                                = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                                   + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_S);
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((0U == (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data 
                                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2;
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 3U;
                            } else if ((2U == (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data 
                                    = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2 
                                       << 0x10U);
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 0x0cU;
                            } else {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data 
                                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2;
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 3U;
                            }
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data 
                                = VL_SHIFTL_III(32,32,6, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2, 
                                                (0x0000003fU 
                                                 & VL_SHIFTL_III(6,6,32, 
                                                                 (3U 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr), 3U)));
                            if ((0U == (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 1U;
                            } else if ((1U == (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 2U;
                            } else if ((2U == (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 4U;
                            } else if ((3U == (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb = 8U;
                            }
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_axi4lite_aw_payload_addr;
                        }
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
                        if ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
                             < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2)) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2 
                             <= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1)) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00000037U != (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((0x00000017U != (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((0x0000006fU == (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                                    = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc 
                                       + ((((0x00000ffeU 
                                             & ((- (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                            >> 0x0000001fU))) 
                                                << 1U)) 
                                            | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                               >> 0x0000001fU)) 
                                           << 0x00000014U) 
                                          | ((((0x000001feU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                     >> 0x00000014U))) 
                                              << 0x0000000bU) 
                                             | (0x000007feU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                   >> 0x00000014U)))));
                            }
                        }
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((0x00100073U != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                if ((0x00000073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc;
                                } else if ((0x30200073U 
                                            == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC 
                                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr 
                                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_28;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready) 
                     >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0x000000ffU & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb))
                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata
                           : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb) 
                                >> 1U) & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                               ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                                  >> 8U) : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb) 
                                              >> 2U) 
                                             & (1U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                             ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                                                >> 0x00000010U)
                                             : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb) 
                                                  >> 3U) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                 ? 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                                                 >> 0x00000018U)
                                                 : 
                                                ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                                                  >> 0x00000010U)
                                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_1 = 0U;
    if ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
        if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__axi_r_fire) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_1 = 1U;
            }
        }
    }
    vlSelfRef.__Vtableidx1 = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_wantStart) 
                                << 8U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__axi_r_fire) 
                                           << 4U))) 
                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready) 
                                  << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_4) 
                                             << 2U) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext 
        = VysyxSoCFull__ConstPool__TABLE_h238505a3_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__clint_en = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_valid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_addr = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_id = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_burst = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_size = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_r_ready = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len = 0U;
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready) 
         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid))) {
        if (((0x02000000U <= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr) 
             & (0x0200ffffU >= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__clint_en = 1U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_valid 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_addr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_id = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_burst = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_size 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_r_ready 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len = 0U;
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((0x02000000U 
                                                 <= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr) 
                                                & (0x0200ffffU 
                                                   >= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                      >> 1U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb));
    }
    vlSelfRef.__Vtableidx2 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2_axi_aw_payload_size 
        = VysyxSoCFull__ConstPool__TABLE_hfa3a2e46_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0x0000000dU)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize 
        = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2_axi_aw_payload_size)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = (1U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr 
                     >> 0x0000001fU)) | (0U == ((4U 
                                                 & ((~ 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr 
                                                      >> 0x0000001fU)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr 
                                                      >> 0x0000001cU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr 
                             >> 0x0000001fU)) << 2U)) 
                  | (3U & (2U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr 
                                 >> 0x0000001cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid 
        = (0x0000000fU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                            ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 0x00000023U))
                            : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                                       : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                                 : 0U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data)
                   : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                             ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                 ? 0U : 3U) : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid 
        = (0x0000000fU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                               >> 2U) : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                                                : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_r_ready)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_payload_last_1 
            = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_payload_last_1 = 1U;
        if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_payload_last_1 = 0U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel) 
              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid)
                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rvalid))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rready 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready));
        if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arsize = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr = 0U;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arsize 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arvalid 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rready 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arsize = 2U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
              & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last 
        = (1U & ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                       << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                 << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last))) 
                    << 0x0000000cU) | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                          << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last))) 
                                       << 8U)) | ((
                                                   ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)));
}

extern const VlUnpacked<CData/*2:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_h2fff90a4_0;

void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0x0000000dU));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arsize));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr 
                     >> 0x0000001fU)) | (0U == ((4U 
                                                 & ((~ 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr 
                                                      >> 0x0000001fU)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr 
                                                      >> 0x0000001cU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr 
                             >> 0x0000001fU)) << 2U)) 
                  | (3U & (2U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr 
                                 >> 0x0000001cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = (~ (((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize))) 
                                           | (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rresp 
        = (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                   ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                        ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                   >> 1U)) : 0U) | 
                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                            ? 0U : 3U) : 0U)) : 0U) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp)
                     : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                             >> 3U)) : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                : 0U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                  ? 
                                                 ((((0x0000ff00U 
                                                     & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                          >> 0x00000018U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                           >> 0x00000010U)
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)))) 
                                                   << 0x00000010U) 
                                                  | ((0x0000ff00U 
                                                      & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                           >> 8U)
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                                  : 0U)))
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rlast 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
            & (((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                      << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last))) 
                   << 0x0000000cU) | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                         << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))) 
                                      << 8U)) | (((
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1 
        = (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
           & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1 
        = (0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                              >> 0x0000001bU)))) 
                  | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                           >> 0x00000018U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                          >> 0x0000001cU)) | (1U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x00000018U)))) 
           | ((0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                  >> 0x0000001bU)))) 
                      | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                  >> 0x00000018U))))) 
              | (3U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 0x0000001cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                         >> 0x0000001bU)) | (1U & (~ 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x00000018U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits)) 
                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
                     >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_9 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_aw_flag)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_payload_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rdata)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rready) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rvalid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
        = (~ (((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize))) 
                                           | (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arready 
        = ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize = 0U;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb = 0U;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_9) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2_axi_aw_payload_size;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz___05Fzz_com_grp_rd_1_2 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_payload_data 
           >> (0x00000018U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_grp_rd_28 
                              << 3U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                          >> 0x0000001cU)) | (1U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                               >> 0x00000018U)))) 
           | ((0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                  >> 0x0000001bU)))) 
                      | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                  >> 0x00000018U))))) 
              | (3U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                              >> 0x0000001cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                         >> 0x0000001bU)) | (1U & (~ 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x00000018U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                              >> 0x0000001bU)))) 
                  | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                           >> 0x00000018U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__encode_w_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_ready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid)) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize = 0U;
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT___zz_when_1) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arsize;
        }
    }
    vlSelfRef.__Vtableidx8 = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_wantStart) 
                                  << 4U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__finish) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid) 
                                               << 2U))) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid) 
                                    << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready))) 
                               << 5U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_fire) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__encode_w_fire) 
                                           << 3U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext 
        = VysyxSoCFull__ConstPool__TABLE_h2fff90a4_0
        [vlSelfRef.__Vtableidx8];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__vaild 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
           & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step 
        = ((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)));
    vlSelfRef.__Vtableidx4 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext_string 
        = VysyxSoCFull__ConstPool__TABLE_h30ab60d4_0
        [vlSelfRef.__Vtableidx4];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSelfRef.reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr), vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__46__rdata);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__46__rdata;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)) 
                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                     >> 2U) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 2U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0x0f000000U == (0x0fffe000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid)));
}
