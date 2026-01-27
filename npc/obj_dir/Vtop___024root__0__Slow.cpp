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
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ctrl__DOT__step__0 
        = vlSelfRef.top__DOT__ctrl__DOT__step;
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

extern const VlUnpacked<QData/*39:0*/, 4> Vtop__ConstPool__TABLE_h185f8774_0;
void Vtop___024root____Vdpiimwrap_top__DOT__other_encode__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test);
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hae0125a9_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__other_encode__DOT__ErrorReg = 0U;
    vlSelfRef.top__DOT__other_encode_com_grp_rd_vaild = 1U;
    vlSelfRef.top__DOT__other_encode_com_csr_vaild = 0U;
    vlSelfRef.top__DOT__ctrl_u_vaild_1 = 0U;
    vlSelfRef.top__DOT__ctrl__DOT__step = 0U;
    vlSelfRef.top__DOT__other_csr__DOT___zz_mcycle 
        = (1ULL + vlSelfRef.top__DOT__other_csr__DOT__mcycle);
    vlSelfRef.top__DOT__other_encode__DOT__ebreak = 0U;
    vlSelfRef.__Vtableidx2 = vlSelfRef.top__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.top__DOT__ctrl__DOT__s_stateReg_string 
        = Vtop__ConstPool__TABLE_h185f8774_0[vlSelfRef.__Vtableidx2];
    vlSelfRef.top__DOT__other_encode_axi4lite_w_valid = 0U;
    vlSelfRef.top__DOT__other_encode__DOT__imm_S = 
        (((- (IData)((vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                      >> 0x0000001fU))) << 0x0000000cU) 
         | ((0x00000fe0U & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                            >> 0x00000014U)) | (0x0000001fU 
                                                & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                   >> 7U))));
    vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_strb = 0U;
    vlSelfRef.top__DOT__other_encode__DOT___zz_com_pc_nPC_1 
        = (vlSelfRef.top__DOT__pc_pc__DOT__PC_cnt + 
           (((- (IData)((vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                         >> 0x0000001fU))) << 0x0000000dU) 
            | ((((2U & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                        >> 0x0000001eU)) | (1U & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                  >> 7U))) 
                << 0x0000000bU) | ((0x000007e0U & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                   >> 0x00000014U)) 
                                   | (0x0000001eU & 
                                      (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                       >> 7U))))));
    vlSelfRef.top__DOT__other_encode_com_csr_mret = 0U;
    vlSelfRef.top__DOT__other_encode_com_csr_ecall = 0U;
    vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data 
        = ((((0x0b00U == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                          >> 0x00000014U)) | (0x0b80U 
                                              == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                  >> 0x00000014U))) 
            | (((0x0300U == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                             >> 0x00000014U)) | (0x0305U 
                                                 == 
                                                 (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                  >> 0x00000014U))) 
               | ((0x0342U == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                               >> 0x00000014U)) | (
                                                   (0x0341U 
                                                    == 
                                                    (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                     >> 0x00000014U)) 
                                                   | ((0x0f11U 
                                                       == 
                                                       (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                        >> 0x00000014U)) 
                                                      | (0x0f12U 
                                                         == 
                                                         (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                          >> 0x00000014U)))))))
            ? ((0x0b00U == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                            >> 0x00000014U)) ? (IData)(vlSelfRef.top__DOT__other_csr__DOT__mcycle)
                : ((0x0b80U == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                >> 0x00000014U)) ? (IData)(
                                                           (vlSelfRef.top__DOT__other_csr__DOT__mcycle 
                                                            >> 0x00000020U))
                    : ((0x0300U == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                    >> 0x00000014U))
                        ? vlSelfRef.top__DOT__other_csr__DOT__mstatus
                        : ((0x0305U == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                        >> 0x00000014U))
                            ? vlSelfRef.top__DOT__other_csr__DOT__mtvec
                            : ((0x0342U == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                            >> 0x00000014U))
                                ? vlSelfRef.top__DOT__other_csr__DOT__mcause
                                : ((0x0341U == (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                >> 0x00000014U))
                                    ? vlSelfRef.top__DOT__other_csr__DOT__mepc
                                    : ((0x0f11U == 
                                        (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                         >> 0x00000014U))
                                        ? 0x79737978U
                                        : 0x018ce19aU)))))))
            : 0U);
    vlSelfRef.top__DOT__other_encode_axi4lite_r_ready = 0U;
    vlSelfRef.top__DOT__other_encode__DOT__imm_I = 
        (((- (IData)((vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                      >> 0x0000001fU))) << 0x0000000cU) 
         | (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
            >> 0x00000014U));
    vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2 
        = ((0U == (0x0000001fU & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                  >> 0x00000014U)))
            ? 0U : ((0x01000000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                     ? ((0x00800000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                         ? ((0x00400000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                             ? ((0x00200000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_31
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_30)
                                 : ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_29
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_28))
                             : ((0x00200000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_27
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_26)
                                 : ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_25
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_24)))
                         : ((0x00400000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                             ? ((0x00200000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_23
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_22)
                                 : ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_21
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_20))
                             : ((0x00200000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_19
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_18)
                                 : ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_17
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_16))))
                     : ((0x00800000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                         ? ((0x00400000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                             ? ((0x00200000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_15
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_14)
                                 : ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_13
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_12))
                             : ((0x00200000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_11
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_10)
                                 : ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_9
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_8)))
                         : ((0x00400000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                             ? ((0x00200000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_7
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_6)
                                 : ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_5
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_4))
                             : ((0x00200000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_3
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_2)
                                 : ((0x00100000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_1
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_0))))));
    vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
        = ((0U == (0x0000001fU & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                  >> 0x0000000fU)))
            ? 0U : ((0x00080000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                     ? ((0x00040000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                         ? ((0x00020000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                             ? ((0x00010000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_31
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_30)
                                 : ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_29
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_28))
                             : ((0x00010000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_27
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_26)
                                 : ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_25
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_24)))
                         : ((0x00020000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                             ? ((0x00010000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_23
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_22)
                                 : ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_21
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_20))
                             : ((0x00010000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_19
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_18)
                                 : ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_17
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_16))))
                     : ((0x00040000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                         ? ((0x00020000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                             ? ((0x00010000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_15
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_14)
                                 : ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_13
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_12))
                             : ((0x00010000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_11
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_10)
                                 : ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_9
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_8)))
                         : ((0x00020000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                             ? ((0x00010000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_7
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_6)
                                 : ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_5
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_4))
                             : ((0x00010000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_3
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_2)
                                 : ((0x00008000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                                     ? vlSelfRef.top__DOT__other_grp__DOT__reg_1
                                     : vlSelfRef.top__DOT__other_grp__DOT__reg_0))))));
    if ((1U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
        if ((2U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
            if ((3U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
                vlSelfRef.top__DOT__ctrl_u_vaild_1 = 1U;
                vlSelfRef.top__DOT__ctrl__DOT__step = 1U;
            }
        }
    }
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))))) {
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))))) {
                    if ((1U & (~ ((((((((0x00006063U 
                                         == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                                        | (0x00007063U 
                                           == (0x0000707fU 
                                               & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                       | (0x00000037U 
                                          == (0x0000007fU 
                                              & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                      | (0x00000017U 
                                         == (0x0000007fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                     | (0x0000006fU 
                                        == (0x0000007fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                    | (0x00001073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                   | (0x00002073U == 
                                      (0x0000707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                  | (0x00003073U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))))) {
                        if ((0x00005073U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            if ((0x00006073U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                if ((0x00007073U != 
                                     (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                    if ((0x00100073U 
                                         != vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                        if ((0x00000073U 
                                             != vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                            if ((0x30200073U 
                                                 != vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                                vlSelfRef.top__DOT__other_encode__DOT__ErrorReg = 1U;
                                            }
                                            if ((0x30200073U 
                                                 == vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                                vlSelfRef.top__DOT__other_encode_com_csr_mret = 1U;
                                            }
                                        }
                                        if ((0x00000073U 
                                             == vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                            vlSelfRef.top__DOT__other_encode_com_csr_ecall = 1U;
                                        }
                                    }
                                    if ((0x00100073U 
                                         == vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                        vlSelfRef.top__DOT__other_encode__DOT__ebreak = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                            vlSelfRef.top__DOT__other_encode_com_csr_vaild = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_csr_vaild = 1U;
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_csr_vaild = 1U;
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_csr_vaild = 1U;
                    }
                }
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_grp_rd_vaild = 0U;
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            vlSelfRef.top__DOT__other_encode_axi4lite_w_valid = 1U;
                            vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_strb = 0x0fU;
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            vlSelfRef.top__DOT__other_encode_axi4lite_w_valid = 1U;
                            vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_strb = 3U;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            vlSelfRef.top__DOT__other_encode_axi4lite_w_valid = 1U;
                            vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_strb = 1U;
                        }
                    }
                } else if (((((((((0x00006063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                                  | (0x00007063U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                 | (0x00000037U == 
                                    (0x0000007fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                | (0x00000017U == (0x0000007fU 
                                                   & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                               | (0x0000006fU == (0x0000007fU 
                                                  & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                              | (0x00001073U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                             | (0x00002073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                            | (0x00003073U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
                    if ((0x00006063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_grp_rd_vaild = 0U;
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_grp_rd_vaild = 0U;
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            if ((0x00100073U != vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                if ((0x00000073U == vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                    vlSelfRef.top__DOT__other_encode_com_grp_rd_vaild = 0U;
                                } else if ((0x30200073U 
                                            == vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                    vlSelfRef.top__DOT__other_encode_com_grp_rd_vaild = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (3U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            vlSelfRef.top__DOT__other_encode_axi4lite_r_ready = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.top__DOT__other_encode__DOT__ebreak) {
        Vtop___024root____Vdpiimwrap_top__DOT__other_encode__DOT__ebreak_module__DOT__ebreak_TOP(1U);
    }
    if (vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel) {
        vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__wen 
            = vlSelfRef.top__DOT__other_encode_axi4lite_w_valid;
        vlSelfRef.__Vtableidx1 = vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_strb;
    } else {
        vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__wen = 0U;
        vlSelfRef.__Vtableidx1 = 0x0fU;
    }
    vlSelfRef.top__DOT__aximem_1__DOT__mem_w_len = 
        Vtop__ConstPool__TABLE_hae0125a9_0[vlSelfRef.__Vtableidx1];
    vlSelfRef.top__DOT__other_csr_com_encode_r_pc = 0U;
    if (vlSelfRef.top__DOT__other_encode_com_csr_ecall) {
        vlSelfRef.top__DOT__other_csr_com_encode_r_pc 
            = vlSelfRef.top__DOT__other_csr__DOT__mtvec;
    } else if (vlSelfRef.top__DOT__other_encode_com_csr_mret) {
        vlSelfRef.top__DOT__other_csr_com_encode_r_pc 
            = ((IData)(4U) + vlSelfRef.top__DOT__other_csr__DOT__mepc);
    }
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_r_ready 
        = ((1U & (~ (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel))) 
           || (IData)(vlSelfRef.top__DOT__other_encode_axi4lite_r_ready));
    vlSelfRef.top__DOT__ctrl__DOT___zz_when = (1U & 
                                               ((~ 
                                                 ((IData)(vlSelfRef.top__DOT__other_encode_axi4lite_r_ready) 
                                                  & (~ (IData)(vlSelfRef.top__DOT__ctrl__DOT__test)))) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_mem_cnt))));
    vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_data = 0U;
    vlSelfRef.top__DOT__other_encode_com_csr_w_data = 0U;
    vlSelfRef.top__DOT__other_encode_axi4lite_aw_payload_addr = 0U;
    vlSelfRef.top__DOT__other_encode__DOT____VdfgExtracted_hf015dc25__0 
        = VL_LTES_III(32, vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2, vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1);
    vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_17 
        = VL_LTS_III(32, vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1, vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2);
    vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_21 
        = (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
           + vlSelfRef.top__DOT__other_encode__DOT__imm_I);
    vlSelfRef.top__DOT__ctrl_u_vaild_3 = 0U;
    if ((1U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
        if ((2U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
            if (vlSelfRef.top__DOT__ctrl__DOT___zz_when) {
                vlSelfRef.top__DOT__ctrl_u_vaild_3 = 1U;
            }
        }
    }
    vlSelfRef.top__DOT__ctrl__DOT__s_wantStart = 0U;
    vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = vlSelfRef.top__DOT__ctrl__DOT__s_stateReg;
    if ((1U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
        vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = 2U;
    } else if ((2U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
        if (vlSelfRef.top__DOT__ctrl__DOT___zz_when) {
            vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
        vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = 1U;
    } else {
        vlSelfRef.top__DOT__ctrl__DOT__s_wantStart = 1U;
    }
    if (vlSelfRef.top__DOT__ctrl__DOT__s_wantStart) {
        vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = 1U;
    }
    vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 0U;
    vlSelfRef.top__DOT__other_encode_axi4lite_ar_payload_addr = 0U;
    vlSelfRef.top__DOT__other_encode_com_pc_nPC = 0U;
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))))) {
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_data 
                                = vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__other_encode_axi4lite_aw_payload_addr 
                                = (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                   + vlSelfRef.top__DOT__other_encode__DOT__imm_S);
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_data 
                                = vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__other_encode_axi4lite_aw_payload_addr 
                                = (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                   + vlSelfRef.top__DOT__other_encode__DOT__imm_S);
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_data 
                                = vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__other_encode_axi4lite_aw_payload_addr 
                                = (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                   + vlSelfRef.top__DOT__other_encode__DOT__imm_S);
                        }
                    }
                    if ((0x00000067U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                        vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                            = vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_21;
                    } else if ((0x00002023U != (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        if ((0x00001023U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            if ((0x00000023U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                if ((0x00000063U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                    if ((vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                         == vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)) {
                                        vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                                            = vlSelfRef.top__DOT__other_encode__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00001063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                    if ((vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                         != vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)) {
                                        vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                                            = vlSelfRef.top__DOT__other_encode__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00004063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                    if (vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_17) {
                                        vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                                            = vlSelfRef.top__DOT__other_encode__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if (vlSelfRef.top__DOT__other_encode__DOT____VdfgExtracted_hf015dc25__0) {
                                    vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                                        = vlSelfRef.top__DOT__other_encode__DOT___zz_com_pc_nPC_1;
                                }
                            }
                        }
                    }
                } else if (((((((((0x00006063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                                  | (0x00007063U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                 | (0x00000037U == 
                                    (0x0000007fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                | (0x00000017U == (0x0000007fU 
                                                   & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                               | (0x0000006fU == (0x0000007fU 
                                                  & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                              | (0x00001073U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                             | (0x00002073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                            | (0x00003073U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
                    if ((0x00006063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        if ((vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                             < vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)) {
                            vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                            vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                                = vlSelfRef.top__DOT__other_encode__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        if ((vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2 
                             <= vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1)) {
                            vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                            vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                                = vlSelfRef.top__DOT__other_encode__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00000037U != (0x0000007fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        if ((0x00000017U != (0x0000007fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            if ((0x0000006fU == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                                vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                                    = (vlSelfRef.top__DOT__pc_pc__DOT__PC_cnt 
                                       + ((((0x00000ffeU 
                                             & ((- (IData)(
                                                           (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                            >> 0x0000001fU))) 
                                                << 1U)) 
                                            | (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                               >> 0x0000001fU)) 
                                           << 0x00000014U) 
                                          | ((((0x000001feU 
                                                & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                     >> 0x00000014U))) 
                                              << 0x0000000bU) 
                                             | (0x000007feU 
                                                & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                   >> 0x00000014U)))));
                            }
                        }
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            if ((0x00100073U != vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                if ((0x00000073U == vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                    vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                                        = vlSelfRef.top__DOT__other_csr_com_encode_r_pc;
                                } else if ((0x30200073U 
                                            == vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) {
                                    vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.top__DOT__other_encode_com_pc_nPC 
                                        = vlSelfRef.top__DOT__other_csr_com_encode_r_pc;
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))))) {
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                                            vlSelfRef.top__DOT__other_encode_com_csr_w_data 
                                                = (
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                                    ? vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1
                                                    : 
                                                   ((0x00002073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                                     ? 
                                                    (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                                     | vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data)
                                                     : 
                                                    (vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data 
                                                     & (~ vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1))));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_csr_w_data 
                            = (0x0000001fU & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                              >> 0x0000000fU));
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_csr_w_data 
                            = ((0x0000001fU & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                               >> 0x0000000fU)) 
                               | vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data);
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        vlSelfRef.top__DOT__other_encode_com_csr_w_data 
                            = (0x0000001fU & ((vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                               >> 0x0000000fU) 
                                              & (~ vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data)));
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (3U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                            vlSelfRef.top__DOT__other_encode_axi4lite_ar_payload_addr 
                                = ((3U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                    ? vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_21
                                    : ((0x00001003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                        ? vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_21
                                        : ((0x00002003U 
                                            == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                            ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                               + vlSelfRef.top__DOT__other_encode__DOT__imm_I)
                                            : ((0x00004003U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                                ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                                   + vlSelfRef.top__DOT__other_encode__DOT__imm_I)
                                                : vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_21))));
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_36 
        = (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_1_r_payload_data 
           >> (0x00000018U & (vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_21 
                              << 3U)));
    vlSelfRef.__Vtableidx3 = vlSelfRef.top__DOT__ctrl__DOT__s_stateNext;
    vlSelfRef.top__DOT__ctrl__DOT__s_stateNext_string 
        = Vtop__ConstPool__TABLE_h185f8774_0[vlSelfRef.__Vtableidx3];
    vlSelfRef.top__DOT__other_encode_com_grp_rd = 0U;
    if (((((((((0x00000033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
               | (0x40000033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
              | (0x00007033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
             | (0x00006033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
            | (0x00004033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
           | (0x00001033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
          | (0x00005033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
         | (0x40005033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
        vlSelfRef.top__DOT__other_encode_com_grp_rd 
            = ((0x00000033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                   + vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)
                : ((0x40000033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                    ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                       - vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)
                    : ((0x00007033U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                        ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                           & vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)
                        : ((0x00006033U == (0xfe00707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                            ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                               | vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)
                            : ((0x00004033U == (0xfe00707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                   ^ vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)
                                : ((0x00001033U == 
                                    (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                    ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                       << (0x0000001fU 
                                           & vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2))
                                    : ((0x00005033U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                        ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                           >> (0x0000001fU 
                                               & vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2))
                                        : VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1, 
                                                         (0x0000001fU 
                                                          & vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)))))))));
    } else if (((((((((0x00002033U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                      | (0x00003033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (0x00000013U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                    | (0x00004013U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                   | (0x00006013U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                  | (0x00007013U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                 | (0x00001013U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                | (0x00005013U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
        vlSelfRef.top__DOT__other_encode_com_grp_rd 
            = ((0x00002033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                ? (IData)(vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_17)
                : ((0x00003033U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                    ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                       < vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2)
                    : ((0x00000013U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                        ? vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_21
                        : ((0x00004013U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                            ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                               ^ vlSelfRef.top__DOT__other_encode__DOT__imm_I)
                            : ((0x00006013U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                   | vlSelfRef.top__DOT__other_encode__DOT__imm_I)
                                : ((0x00007013U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                    ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                       & vlSelfRef.top__DOT__other_encode__DOT__imm_I)
                                    : ((0x00001013U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                        ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                           << (0x0000001fU 
                                               & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                  >> 0x00000014U)))
                                        : (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                                           >> (0x0000001fU 
                                               & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                  >> 0x00000014U))))))))));
    } else if (((((((((0x40005013U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                      | (0x00002013U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (0x00003013U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                    | (3U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                   | (0x00001003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                  | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                 | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                | (0x00005003U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
        vlSelfRef.top__DOT__other_encode_com_grp_rd 
            = ((0x40005013U == (0xfe00707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                ? VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1, 
                                 (0x0000001fU & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                 >> 0x00000014U)))
                : ((0x00002013U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                    ? VL_LTS_III(32, vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1, vlSelfRef.top__DOT__other_encode__DOT__imm_I)
                    : ((0x00003013U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                        ? (vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1 
                           < vlSelfRef.top__DOT__other_encode__DOT__imm_I)
                        : ((3U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                            ? (((- (IData)((1U & (vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_36 
                                                  >> 7U)))) 
                                << 8U) | (0x000000ffU 
                                          & vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_36))
                            : ((0x00001003U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_36 
                                                   >> 0x0000000fU)))) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_36))
                                : ((0x00002003U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                    ? vlSelfRef.top__DOT__axiarbiter_1_AxiIn_1_r_payload_data
                                    : ((0x00004003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                        ? (0x000000ffU 
                                           & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_1_r_payload_data)
                                        : (0x0000ffffU 
                                           & vlSelfRef.top__DOT__other_encode__DOT___zz_com_grp_rd_36))))))));
    } else if (((((((((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                      | (0x00002023U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (0x00001023U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                    | (0x00000023U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                   | (0x00000063U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                  | (0x00001063U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                 | (0x00004063U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                | (0x00005063U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
        if ((0x00000067U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
            vlSelfRef.top__DOT__other_encode_com_grp_rd 
                = ((IData)(4U) + vlSelfRef.top__DOT__pc_pc__DOT__PC_cnt);
        }
    } else if (((((((((0x00006063U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)) 
                      | (0x00007063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                     | (0x00000037U == (0x0000007fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                    | (0x00000017U == (0x0000007fU 
                                       & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                   | (0x0000006fU == (0x0000007fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                  | (0x00001073U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                 | (0x00002073U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) 
                | (0x00003073U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)))) {
        if ((0x00006063U != (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
            if ((0x00007063U != (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
                vlSelfRef.top__DOT__other_encode_com_grp_rd 
                    = ((0x00000037U == (0x0000007fU 
                                        & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                        ? (0xfffff000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)
                        : ((0x00000017U == (0x0000007fU 
                                            & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                            ? (vlSelfRef.top__DOT__pc_pc__DOT__PC_cnt 
                               + (0xfffff000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                            : ((0x0000006fU == (0x0000007fU 
                                                & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))
                                ? ((IData)(4U) + vlSelfRef.top__DOT__pc_pc__DOT__PC_cnt)
                                : vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data)));
            }
        }
    } else if ((0x00005073U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
        vlSelfRef.top__DOT__other_encode_com_grp_rd 
            = vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data;
    } else if ((0x00006073U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
        vlSelfRef.top__DOT__other_encode_com_grp_rd 
            = vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data;
    } else if ((0x00007073U == (0x0000707fU & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data))) {
        vlSelfRef.top__DOT__other_encode_com_grp_rd 
            = vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data;
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge top.ctrl.step)\n");
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
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->top__DOT__other_encode_com_grp_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13757415763047363086ull);
    vlSelf->top__DOT__other_encode_com_grp_rd_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3671088325904329520ull);
    vlSelf->top__DOT__other_encode_com_pc_nPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2665252345941418263ull);
    vlSelf->top__DOT__other_encode_com_pc_nPC_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6806136709380486691ull);
    vlSelf->top__DOT__other_encode_com_csr_w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13166636759298487025ull);
    vlSelf->top__DOT__other_encode_com_csr_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17424735138865690233ull);
    vlSelf->top__DOT__other_encode_com_csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3063636097074721783ull);
    vlSelf->top__DOT__other_encode_com_csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3637131647573292685ull);
    vlSelf->top__DOT__other_encode_axi4lite_aw_payload_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5986496685342339569ull);
    vlSelf->top__DOT__other_encode_axi4lite_aw_payload_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2102946277512867977ull);
    vlSelf->top__DOT__other_encode_axi4lite_w_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5790186553729224729ull);
    vlSelf->top__DOT__other_encode_axi4lite_w_payload_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16533173542904199911ull);
    vlSelf->top__DOT__other_encode_axi4lite_w_payload_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6658253039396436329ull);
    vlSelf->top__DOT__other_encode_axi4lite_b_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9845076289492241705ull);
    vlSelf->top__DOT__other_encode_axi4lite_ar_payload_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5873053498829797709ull);
    vlSelf->top__DOT__other_encode_axi4lite_ar_payload_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17544382021263151161ull);
    vlSelf->top__DOT__other_encode_axi4lite_r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15008455447288909083ull);
    vlSelf->top__DOT__other_csr_com_encode_r_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18180441193256742857ull);
    vlSelf->top__DOT__axiarbiter_1_AxiIn_0_r_payload_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10551113387981555942ull);
    vlSelf->top__DOT__axiarbiter_1_AxiIn_1_r_payload_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12970272549643332107ull);
    vlSelf->top__DOT__ctrl_u_vaild_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4985070311728560494ull);
    vlSelf->top__DOT__ctrl_u_vaild_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17018805031803285001ull);
    vlSelf->top__DOT__pc_pc__DOT__PC_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9648665667849367693ull);
    vlSelf->top__DOT__other_encode__DOT__com_grp_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13669096413829521557ull);
    vlSelf->top__DOT__other_encode__DOT__com_grp_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14124639406517101111ull);
    vlSelf->top__DOT__other_encode__DOT___zz_com_grp_rd_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4945563272210543353ull);
    vlSelf->top__DOT__other_encode__DOT___zz_com_grp_rd_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4951973073054651680ull);
    vlSelf->top__DOT__other_encode__DOT___zz_com_grp_rd_36 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5054706811201887390ull);
    vlSelf->top__DOT__other_encode__DOT___zz_com_pc_nPC_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4887364300803397354ull);
    vlSelf->top__DOT__other_encode__DOT__ErrorReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17180366114658606782ull);
    vlSelf->top__DOT__other_encode__DOT__ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1740765861294533945ull);
    vlSelf->top__DOT__other_encode__DOT__imm_I = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12984253842092649264ull);
    vlSelf->top__DOT__other_encode__DOT__imm_S = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13060581761793794826ull);
    vlSelf->top__DOT__other_encode__DOT____VdfgExtracted_hf015dc25__0 = 0;
    vlSelf->top__DOT__other_csr__DOT__com_encode_r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11611519361385611620ull);
    vlSelf->top__DOT__other_csr__DOT___zz_mcycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5769839303996674179ull);
    vlSelf->top__DOT__other_csr__DOT__mcycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15072865285866680676ull);
    vlSelf->top__DOT__other_csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9428851139608355767ull);
    vlSelf->top__DOT__other_csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2685624642560692668ull);
    vlSelf->top__DOT__other_csr__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4056271780313113385ull);
    vlSelf->top__DOT__other_csr__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3304037885594151807ull);
    vlSelf->top__DOT__other_grp__DOT__reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16236271789325475883ull);
    vlSelf->top__DOT__other_grp__DOT__reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12695403046924320741ull);
    vlSelf->top__DOT__other_grp__DOT__reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12632086217549181800ull);
    vlSelf->top__DOT__other_grp__DOT__reg_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14373700933246147538ull);
    vlSelf->top__DOT__other_grp__DOT__reg_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8303475598837907424ull);
    vlSelf->top__DOT__other_grp__DOT__reg_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11258932765221740463ull);
    vlSelf->top__DOT__other_grp__DOT__reg_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4278325592798312514ull);
    vlSelf->top__DOT__other_grp__DOT__reg_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6930322146510443305ull);
    vlSelf->top__DOT__other_grp__DOT__reg_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7366484500866416625ull);
    vlSelf->top__DOT__other_grp__DOT__reg_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3170173364814691496ull);
    vlSelf->top__DOT__other_grp__DOT__reg_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8759404589321894344ull);
    vlSelf->top__DOT__other_grp__DOT__reg_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 139507672629579525ull);
    vlSelf->top__DOT__other_grp__DOT__reg_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3462609503401327228ull);
    vlSelf->top__DOT__other_grp__DOT__reg_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12175236349500593169ull);
    vlSelf->top__DOT__other_grp__DOT__reg_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2043869279792828610ull);
    vlSelf->top__DOT__other_grp__DOT__reg_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18302689046329938960ull);
    vlSelf->top__DOT__other_grp__DOT__reg_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1252405716047141215ull);
    vlSelf->top__DOT__other_grp__DOT__reg_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11891673649491422010ull);
    vlSelf->top__DOT__other_grp__DOT__reg_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5926908648783045847ull);
    vlSelf->top__DOT__other_grp__DOT__reg_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 421556027460810678ull);
    vlSelf->top__DOT__other_grp__DOT__reg_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16710871669951814594ull);
    vlSelf->top__DOT__other_grp__DOT__reg_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17595826334987391799ull);
    vlSelf->top__DOT__other_grp__DOT__reg_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2893148526312935086ull);
    vlSelf->top__DOT__other_grp__DOT__reg_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13448520400488262462ull);
    vlSelf->top__DOT__other_grp__DOT__reg_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12930214296912751958ull);
    vlSelf->top__DOT__other_grp__DOT__reg_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17312263634978207247ull);
    vlSelf->top__DOT__other_grp__DOT__reg_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15689950382646024546ull);
    vlSelf->top__DOT__other_grp__DOT__reg_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17802812500687888956ull);
    vlSelf->top__DOT__other_grp__DOT__reg_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8129445834386075146ull);
    vlSelf->top__DOT__other_grp__DOT__reg_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5134578508470641666ull);
    vlSelf->top__DOT__other_grp__DOT__reg_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1708224652516480756ull);
    vlSelf->top__DOT__other_grp__DOT__reg_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12684560960955133732ull);
    vlSelf->top__DOT__aximem_1__DOT__mem_w_len = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6138885339887692107ull);
    vlSelf->top__DOT__aximem_1__DOT__mem_r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8401969287516837687ull);
    vlSelf->top__DOT__aximem_1__DOT__mem__DOT__wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4375845587434616531ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__AxiOut_r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5808336415439684128ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__wsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11472621880246165403ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__rsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936179752156347570ull);
    vlSelf->top__DOT__ctrl__DOT___zz_when = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12013587054131616750ull);
    vlSelf->top__DOT__ctrl__DOT__step = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8564719248858207953ull);
    vlSelf->top__DOT__ctrl__DOT__test = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8803908460837896265ull);
    vlSelf->top__DOT__ctrl__DOT__s_wantStart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11503597044993555199ull);
    vlSelf->top__DOT__ctrl__DOT__s_mem_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7151446864058624188ull);
    vlSelf->top__DOT__ctrl__DOT__s_stateReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11815935858563848604ull);
    vlSelf->top__DOT__ctrl__DOT__s_stateNext = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5951983697061910232ull);
    vlSelf->top__DOT__ctrl__DOT__s_stateReg_string = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14257701431063476088ull);
    vlSelf->top__DOT__ctrl__DOT__s_stateNext_string = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 193589051968576878ull);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vdly__top__DOT__pc_pc__DOT__PC_cnt = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ctrl__DOT__step__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
