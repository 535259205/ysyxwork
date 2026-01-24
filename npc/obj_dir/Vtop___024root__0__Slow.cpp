// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_r_addr__0 
        = vlSelfRef.top__DOT__encode_1_com_exmem_r_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_r_len__0 
        = vlSelfRef.top__DOT__encode_1_com_exmem_r_len;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_w_addr__0 
        = vlSelfRef.top__DOT__encode_1_com_exmem_w_addr;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_w_data__0 
        = vlSelfRef.top__DOT__encode_1_com_exmem_w_data;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_w_len__0 
        = vlSelfRef.top__DOT__encode_1_com_exmem_w_len;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/top.v", 5, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root____Vdpiimwrap_top__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__encode_1__DOT__ErrorReg = 0U;
    vlSelfRef.top__DOT__encode_1_com_csr_vaild = 0U;
    vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 1U;
    vlSelfRef.top__DOT__encode_1_com_exmem_w_vaild = 0U;
    vlSelfRef.top__DOT__encode_1_com_exmem_w_len = 0U;
    vlSelfRef.top__DOT__encode_1_com_exmem_r_ready = 0U;
    vlSelfRef.top__DOT__encode_1_com_exmem_r_len = 0U;
    vlSelfRef.top__DOT__csr_1__DOT___zz_mcycle = (1ULL 
                                                  + vlSelfRef.top__DOT__csr_1__DOT__mcycle);
    vlSelfRef.top__DOT__encode_1__DOT__ebreak = 0U;
    vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1 
        = (vlSelfRef.top__DOT__pc_1__DOT__PC_cnt + 
           (((- (IData)((vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                         >> 0x0000001fU))) << 0x0000000dU) 
            | ((((2U & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                        >> 0x0000001eU)) | (1U & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                  >> 7U))) 
                << 0x0000000bU) | ((0x000007e0U & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                   >> 0x00000014U)) 
                                   | (0x0000001eU & 
                                      (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                       >> 7U))))));
    vlSelfRef.top__DOT__encode_1_com_csr_mret = 0U;
    vlSelfRef.top__DOT__encode_1_com_csr_ecall = 0U;
    vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data 
        = ((0x0b00U == (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                        >> 0x00000014U)) ? (IData)(vlSelfRef.top__DOT__csr_1__DOT__mcycle)
            : ((0x0b80U == (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                            >> 0x00000014U)) ? (IData)(
                                                       (vlSelfRef.top__DOT__csr_1__DOT__mcycle 
                                                        >> 0x00000020U))
                : ((0x0300U == (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                >> 0x00000014U)) ? vlSelfRef.top__DOT__csr_1__DOT__mstatus
                    : ((0x0305U == (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                    >> 0x00000014U))
                        ? vlSelfRef.top__DOT__csr_1__DOT__mtvec
                        : ((0x0342U == (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                        >> 0x00000014U))
                            ? vlSelfRef.top__DOT__csr_1__DOT__mcause
                            : ((0x0341U == (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                            >> 0x00000014U))
                                ? vlSelfRef.top__DOT__csr_1__DOT__mepc
                                : 0U))))));
    vlSelfRef.top__DOT__encode_1__DOT__imm_I = (((- (IData)(
                                                            (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000cU) 
                                                | (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                   >> 0x00000014U));
    vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2 
        = ((0U == (0x0000001fU & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                  >> 0x00000014U)))
            ? 0U : ((0x01000000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                     ? ((0x00800000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                         ? ((0x00400000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_30)
                                 : ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_28))
                             : ((0x00200000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_26)
                                 : ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_24)))
                         : ((0x00400000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_22)
                                 : ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_20))
                             : ((0x00200000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_18)
                                 : ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_16))))
                     : ((0x00800000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                         ? ((0x00400000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_14)
                                 : ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_12))
                             : ((0x00200000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_10)
                                 : ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_8)))
                         : ((0x00400000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_6)
                                 : ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_4))
                             : ((0x00200000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_2)
                                 : ((0x00100000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_0))))));
    vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
        = ((0U == (0x0000001fU & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                  >> 0x0000000fU)))
            ? 0U : ((0x00080000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                     ? ((0x00040000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                         ? ((0x00020000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_30)
                                 : ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_28))
                             : ((0x00010000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_26)
                                 : ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_24)))
                         : ((0x00020000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_22)
                                 : ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_20))
                             : ((0x00010000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_18)
                                 : ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_16))))
                     : ((0x00040000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                         ? ((0x00020000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_14)
                                 : ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_12))
                             : ((0x00010000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_10)
                                 : ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_8)))
                         : ((0x00020000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_6)
                                 : ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_4))
                             : ((0x00010000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_2)
                                 : ((0x00008000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_0))))));
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))))) {
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))))) {
                    if ((1U & (~ ((((((((0x00006063U 
                                         == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                                        | (0x00007063U 
                                           == (0x0000707fU 
                                               & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                       | (0x00000037U 
                                          == (0x0000007fU 
                                              & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                      | (0x00000017U 
                                         == (0x0000007fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                     | (0x0000006fU 
                                        == (0x0000007fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                    | (0x00001073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                   | (0x00002073U == 
                                      (0x0000707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                  | (0x00003073U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))))) {
                        if ((0x00005073U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            if ((0x00006073U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                if ((0x00007073U != 
                                     (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                    if ((0x00100073U 
                                         != vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                        if ((0x00000073U 
                                             != vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                            if ((0x30200073U 
                                                 != vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                                vlSelfRef.top__DOT__encode_1__DOT__ErrorReg = 1U;
                                            }
                                            if ((0x30200073U 
                                                 == vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                                vlSelfRef.top__DOT__encode_1_com_csr_mret = 1U;
                                            }
                                        }
                                        if ((0x00000073U 
                                             == vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                            vlSelfRef.top__DOT__encode_1_com_csr_ecall = 1U;
                                        }
                                    }
                                    if ((0x00100073U 
                                         == vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                        vlSelfRef.top__DOT__encode_1__DOT__ebreak = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                            vlSelfRef.top__DOT__encode_1_com_csr_vaild = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_vaild = 1U;
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_vaild = 1U;
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_vaild = 1U;
                    }
                }
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_vaild = 1U;
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_len = 3U;
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_vaild = 1U;
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_len = 1U;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_vaild = 1U;
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_len = 0U;
                        }
                    }
                } else if (((((((((0x00006063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                                  | (0x00007063U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                 | (0x00000037U == 
                                    (0x0000007fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                | (0x00000017U == (0x0000007fU 
                                                   & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                               | (0x0000006fU == (0x0000007fU 
                                                  & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                              | (0x00001073U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                             | (0x00002073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                            | (0x00003073U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
                    if ((0x00006063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            if ((0x00100073U != vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                if ((0x00000073U == vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                    vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
                                } else if ((0x30200073U 
                                            == vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                    vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (3U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            vlSelfRef.top__DOT__encode_1_com_exmem_r_ready = 1U;
                            vlSelfRef.top__DOT__encode_1_com_exmem_r_len 
                                = ((3U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                    ? 0U : ((0x00001003U 
                                             == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                             ? 1U : 
                                            ((0x00002003U 
                                              == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                              ? 3U : 
                                             ((0x00004003U 
                                               == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                               ? 0U
                                               : 1U))));
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.top__DOT__encode_1__DOT__ebreak) {
        Vtop___024root____Vdpiimwrap_top__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP(1U);
    }
    vlSelfRef.top__DOT__csr_1_com_encode_r_pc = 0U;
    if (vlSelfRef.top__DOT__encode_1_com_csr_ecall) {
        vlSelfRef.top__DOT__csr_1_com_encode_r_pc = vlSelfRef.top__DOT__csr_1__DOT__mtvec;
    } else if (vlSelfRef.top__DOT__encode_1_com_csr_mret) {
        vlSelfRef.top__DOT__csr_1_com_encode_r_pc = 
            ((IData)(4U) + vlSelfRef.top__DOT__csr_1__DOT__mepc);
    }
    vlSelfRef.top__DOT__encode_1_com_exmem_w_data = 0U;
    vlSelfRef.top__DOT__encode_1_com_csr_w_data = 0U;
    vlSelfRef.top__DOT__encode_1__DOT___zz_com_exmem_w_addr 
        = (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
           + (((- (IData)((vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                           >> 0x0000001fU))) << 0x0000000cU) 
              | ((0x00000fe0U & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                 >> 0x00000014U)) | 
                 (0x0000001fU & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                 >> 7U)))));
    vlSelfRef.top__DOT__encode_1__DOT____VdfgExtracted_hf015dc25__0 
        = VL_LTES_III(32, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1);
    vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_18 
        = (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
           + vlSelfRef.top__DOT__encode_1__DOT__imm_I);
    vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_14 
        = VL_LTS_III(32, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2);
    vlSelfRef.top__DOT__encode_1_com_exmem_w_addr = 0U;
    vlSelfRef.top__DOT__encode_1_com_exmem_r_addr = 0U;
    vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 0U;
    vlSelfRef.top__DOT__encode_1_com_grp_rd = 0U;
    if (((((((((0x00000033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
               | (0x40000033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
              | (0x00007033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
             | (0x00006033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
            | (0x00004033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
           | (0x00001033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
          | (0x00005033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
         | (0x40005033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = (
                                                   (0x00000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                    ? 
                                                   (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                    + vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                     ? 
                                                    (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                     - vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                     : 
                                                    ((0x00007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                      ? 
                                                     (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                      & vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                      : 
                                                     ((0x00006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                       ? 
                                                      (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                       | vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                       : 
                                                      ((0x00004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                        ? 
                                                       (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                        ^ vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                        : 
                                                       ((0x00001033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                         ? 
                                                        (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                         << 
                                                         (0x0000001fU 
                                                          & vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2))
                                                         : 
                                                        ((0x00005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                          ? 
                                                         (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                          >> 
                                                          (0x0000001fU 
                                                           & vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2))
                                                          : 
                                                         VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1, 
                                                                        (0x0000001fU 
                                                                         & vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)))))))));
    } else if (((((((((0x00002033U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                      | (0x00003033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (0x00000013U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                    | (0x00004013U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                   | (0x00006013U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                  | (0x00007013U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                 | (0x00001013U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                | (0x00005013U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = (
                                                   (0x00002033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                    ? (IData)(vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_14)
                                                    : 
                                                   ((0x00003033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                     ? 
                                                    (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                     < vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                     : 
                                                    ((0x00000013U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                      ? vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_18
                                                      : 
                                                     ((0x00004013U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                       ? 
                                                      (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                       ^ vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                       : 
                                                      ((0x00006013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                        ? 
                                                       (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                        | vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                        : 
                                                       ((0x00007013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                         ? 
                                                        (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                         & vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                         : 
                                                        ((0x00001013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                          ? 
                                                         (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                          << 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                              >> 0x00000014U)))
                                                          : 
                                                         (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                          >> 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                              >> 0x00000014U))))))))));
    } else if (((((((((0x40005013U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                      | (0x00002013U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (0x00003013U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                    | (3U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                   | (0x00001003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                  | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                 | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                | (0x00005003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1, 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                                      >> 0x00000014U)))
                                                    : 
                                                   ((0x00002013U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                     ? 
                                                    VL_LTS_III(32, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1, vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                     : 
                                                    ((0x00003013U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                      ? 
                                                     (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                      < vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.top__DOT__exmem_1__DOT__mem_r_data 
                                                                       >> 7U)))) 
                                                        << 8U) 
                                                       | (0x000000ffU 
                                                          & vlSelfRef.top__DOT__exmem_1__DOT__mem_r_data))
                                                       : 
                                                      ((0x00001003U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.top__DOT__exmem_1__DOT__mem_r_data 
                                                                        >> 0x0000000fU)))) 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.top__DOT__exmem_1__DOT__mem_r_data))
                                                        : vlSelfRef.top__DOT__exmem_1__DOT__mem_r_data)))));
    } else if (((((((((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                      | (0x00002023U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (0x00001023U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                    | (0x00000023U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                   | (0x00000063U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                  | (0x00001063U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                 | (0x00004063U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                | (0x00005063U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
        if ((0x00000067U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
            vlSelfRef.top__DOT__encode_1_com_grp_rd 
                = ((IData)(4U) + vlSelfRef.top__DOT__pc_1__DOT__PC_cnt);
        }
    } else if (((((((((0x00006063U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                      | (0x00007063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (0x00000037U == (0x0000007fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                    | (0x00000017U == (0x0000007fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                   | (0x0000006fU == (0x0000007fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                  | (0x00001073U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                 | (0x00002073U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                | (0x00003073U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
        if ((0x00006063U != (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
            if ((0x00007063U != (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                vlSelfRef.top__DOT__encode_1_com_grp_rd 
                    = ((0x00000037U == (0x0000007fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                        ? (0xfffff000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)
                        : ((0x00000017U == (0x0000007fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                            ? (vlSelfRef.top__DOT__pc_1__DOT__PC_cnt 
                               + (0xfffff000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                            : ((0x0000006fU == (0x0000007fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                ? ((IData)(4U) + vlSelfRef.top__DOT__pc_1__DOT__PC_cnt)
                                : vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data)));
            }
        }
    } else if ((0x00005073U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data;
    } else if ((0x00006073U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data;
    } else if ((0x00007073U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data;
    }
    vlSelfRef.top__DOT__encode_1_com_pc_nPC = 0U;
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))))) {
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_data 
                                = vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_addr 
                                = vlSelfRef.top__DOT__encode_1__DOT___zz_com_exmem_w_addr;
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_data 
                                = vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_addr 
                                = vlSelfRef.top__DOT__encode_1__DOT___zz_com_exmem_w_addr;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_data 
                                = vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__encode_1_com_exmem_w_addr 
                                = vlSelfRef.top__DOT__encode_1__DOT___zz_com_exmem_w_addr;
                        }
                    }
                    if ((0x00000067U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                        vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                            = vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_18;
                    } else if ((0x00002023U != (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        if ((0x00001023U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            if ((0x00000023U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                if ((0x00000063U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                    if ((vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                         == vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)) {
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00001063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                    if ((vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                         != vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)) {
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00004063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                    if (vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_14) {
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if (vlSelfRef.top__DOT__encode_1__DOT____VdfgExtracted_hf015dc25__0) {
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                }
                            }
                        }
                    }
                } else if (((((((((0x00006063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                                  | (0x00007063U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                 | (0x00000037U == 
                                    (0x0000007fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                | (0x00000017U == (0x0000007fU 
                                                   & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                               | (0x0000006fU == (0x0000007fU 
                                                  & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                              | (0x00001073U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                             | (0x00002073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                            | (0x00003073U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
                    if ((0x00006063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        if ((vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                             < vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)) {
                            vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                            vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        if ((vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2 
                             <= vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1)) {
                            vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                            vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00000037U != (0x0000007fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        if ((0x00000017U != (0x0000007fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            if ((0x0000006fU == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                    = (vlSelfRef.top__DOT__pc_1__DOT__PC_cnt 
                                       + ((((0x00000ffeU 
                                             & ((- (IData)(
                                                           (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                            >> 0x0000001fU))) 
                                                << 1U)) 
                                            | (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                               >> 0x0000001fU)) 
                                           << 0x00000014U) 
                                          | ((((0x000001feU 
                                                & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                     >> 0x00000014U))) 
                                              << 0x0000000bU) 
                                             | (0x000007feU 
                                                & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                   >> 0x00000014U)))));
                            }
                        }
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            if ((0x00100073U != vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                if ((0x00000073U == vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.top__DOT__csr_1_com_encode_r_pc;
                                } else if ((0x30200073U 
                                            == vlSelfRef.top__DOT__pc_1__DOT__rom_code)) {
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.top__DOT__csr_1_com_encode_r_pc;
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))))) {
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                                            vlSelfRef.top__DOT__encode_1_com_csr_w_data 
                                                = (
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                    ? vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1
                                                    : 
                                                   ((0x00002073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.top__DOT__pc_1__DOT__rom_code))
                                                     ? 
                                                    (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                     | vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data)
                                                     : 
                                                    (vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data 
                                                     & (~ vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1))));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_w_data 
                            = (0x0000001fU & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                              >> 0x0000000fU));
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_w_data 
                            = ((0x0000001fU & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                               >> 0x0000000fU)) 
                               | vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data);
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_w_data 
                            = (0x0000001fU & ((vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                               >> 0x0000000fU) 
                                              & (~ vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data)));
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__pc_1__DOT__rom_code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                     | (3U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__pc_1__DOT__rom_code))) {
                            vlSelfRef.top__DOT__encode_1_com_exmem_r_addr 
                                = vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_18;
                        }
                    }
                }
            }
        }
    }
}

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( top.encode_1_com_exmem_r_addr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( top.encode_1_com_exmem_r_len)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( top.encode_1_com_exmem_w_addr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( top.encode_1_com_exmem_w_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( top.encode_1_com_exmem_w_len)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->top__DOT__encode_1_com_grp_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4925476909682531140ull);
    vlSelf->top__DOT__encode_1_com_grp_rd_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15272957042925687492ull);
    vlSelf->top__DOT__encode_1_com_pc_nPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2960672545258645026ull);
    vlSelf->top__DOT__encode_1_com_pc_nPC_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11228158208647532181ull);
    vlSelf->top__DOT__encode_1_com_exmem_w_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4452300677904509469ull);
    vlSelf->top__DOT__encode_1_com_exmem_w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17686313200332474336ull);
    vlSelf->top__DOT__encode_1_com_exmem_w_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7001972031761075333ull);
    vlSelf->top__DOT__encode_1_com_exmem_w_len = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6091841937433520370ull);
    vlSelf->top__DOT__encode_1_com_exmem_r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17344827412798458942ull);
    vlSelf->top__DOT__encode_1_com_exmem_r_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5374915474564193936ull);
    vlSelf->top__DOT__encode_1_com_exmem_r_len = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6043825217414320898ull);
    vlSelf->top__DOT__encode_1_com_csr_w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10048935979265964301ull);
    vlSelf->top__DOT__encode_1_com_csr_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5396496564461293281ull);
    vlSelf->top__DOT__encode_1_com_csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17759461390282264324ull);
    vlSelf->top__DOT__encode_1_com_csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4653800157173586002ull);
    vlSelf->top__DOT__csr_1_com_encode_r_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10416072046527825148ull);
    vlSelf->top__DOT__pc_1__DOT__rom_code = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11526631691997030646ull);
    vlSelf->top__DOT__pc_1__DOT__PC_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1521856471748617642ull);
    vlSelf->top__DOT__encode_1__DOT__com_grp_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14567351743218016887ull);
    vlSelf->top__DOT__encode_1__DOT__com_grp_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 215770431377314553ull);
    vlSelf->top__DOT__encode_1__DOT___zz_com_grp_rd_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12567842065812247892ull);
    vlSelf->top__DOT__encode_1__DOT___zz_com_grp_rd_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13300639044717579841ull);
    vlSelf->top__DOT__encode_1__DOT___zz_com_exmem_w_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 760525615528150465ull);
    vlSelf->top__DOT__encode_1__DOT___zz_com_pc_nPC_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 433839095964930004ull);
    vlSelf->top__DOT__encode_1__DOT__ErrorReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10725671115922418508ull);
    vlSelf->top__DOT__encode_1__DOT__ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13712040204302820266ull);
    vlSelf->top__DOT__encode_1__DOT__imm_I = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15542041707910509784ull);
    vlSelf->top__DOT__encode_1__DOT____VdfgExtracted_hf015dc25__0 = 0;
    vlSelf->top__DOT__csr_1__DOT__com_encode_r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11950746031407135469ull);
    vlSelf->top__DOT__csr_1__DOT___zz_mcycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14393977844109390608ull);
    vlSelf->top__DOT__csr_1__DOT__mcycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3461893007127165359ull);
    vlSelf->top__DOT__csr_1__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6665569232503740573ull);
    vlSelf->top__DOT__csr_1__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16280782717592563230ull);
    vlSelf->top__DOT__csr_1__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7472947393306586721ull);
    vlSelf->top__DOT__csr_1__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16342080906205980745ull);
    vlSelf->top__DOT__grp_1__DOT__reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17718729814827624744ull);
    vlSelf->top__DOT__grp_1__DOT__reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16704604291101329392ull);
    vlSelf->top__DOT__grp_1__DOT__reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8217951333451964135ull);
    vlSelf->top__DOT__grp_1__DOT__reg_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9905321452064281324ull);
    vlSelf->top__DOT__grp_1__DOT__reg_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11804286863636228953ull);
    vlSelf->top__DOT__grp_1__DOT__reg_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13883643008208316916ull);
    vlSelf->top__DOT__grp_1__DOT__reg_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15457096473223470674ull);
    vlSelf->top__DOT__grp_1__DOT__reg_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15724311915549234774ull);
    vlSelf->top__DOT__grp_1__DOT__reg_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11785822697745588556ull);
    vlSelf->top__DOT__grp_1__DOT__reg_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5814125428347827034ull);
    vlSelf->top__DOT__grp_1__DOT__reg_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6104540424241839812ull);
    vlSelf->top__DOT__grp_1__DOT__reg_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4469869790640513823ull);
    vlSelf->top__DOT__grp_1__DOT__reg_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5487771376404921930ull);
    vlSelf->top__DOT__grp_1__DOT__reg_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18442929800644393185ull);
    vlSelf->top__DOT__grp_1__DOT__reg_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2035555374055089283ull);
    vlSelf->top__DOT__grp_1__DOT__reg_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10551894706177813892ull);
    vlSelf->top__DOT__grp_1__DOT__reg_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18393193651723191763ull);
    vlSelf->top__DOT__grp_1__DOT__reg_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17437689160190175802ull);
    vlSelf->top__DOT__grp_1__DOT__reg_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8069355221454795378ull);
    vlSelf->top__DOT__grp_1__DOT__reg_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17186910796396851385ull);
    vlSelf->top__DOT__grp_1__DOT__reg_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12570645639646303972ull);
    vlSelf->top__DOT__grp_1__DOT__reg_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12221618314689500826ull);
    vlSelf->top__DOT__grp_1__DOT__reg_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 891204369663248526ull);
    vlSelf->top__DOT__grp_1__DOT__reg_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4982837664215466349ull);
    vlSelf->top__DOT__grp_1__DOT__reg_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14228566199067053530ull);
    vlSelf->top__DOT__grp_1__DOT__reg_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9394148759002884928ull);
    vlSelf->top__DOT__grp_1__DOT__reg_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4885267824143991870ull);
    vlSelf->top__DOT__grp_1__DOT__reg_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6695067001153258004ull);
    vlSelf->top__DOT__grp_1__DOT__reg_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8419939482057100978ull);
    vlSelf->top__DOT__grp_1__DOT__reg_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14916295746814301881ull);
    vlSelf->top__DOT__grp_1__DOT__reg_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6089769403146026334ull);
    vlSelf->top__DOT__grp_1__DOT__reg_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14190465386895813293ull);
    vlSelf->top__DOT__exmem_1__DOT__mem_r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6258206765800389500ull);
    vlSelf->__Vdly__top__DOT__pc_1__DOT__PC_cnt = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_r_addr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_r_len__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_w_addr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_w_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__encode_1_com_exmem_w_len__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
