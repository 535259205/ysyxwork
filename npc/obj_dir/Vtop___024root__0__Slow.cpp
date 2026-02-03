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

extern const VlUnpacked<IData/*31:0*/, 8> Vtop__ConstPool__TABLE_h30ab60d4_0;
void Vtop___024root____Vdpiimwrap_top__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test);
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hae0125a9_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__encode_1__DOT__ErrorReg = 0U;
    vlSelfRef.top__DOT__encode_1_com_csr_vaild = 0U;
    vlSelfRef.top__DOT__ctrl_u_vaild_0 = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
                vlSelfRef.top__DOT__ctrl_u_vaild_0 = 1U;
            }
        }
    }
    vlSelfRef.top__DOT__csr_1__DOT___zz_mcycle = (1ULL 
                                                  + vlSelfRef.top__DOT__csr_1__DOT__mcycle);
    vlSelfRef.top__DOT__encode_1__DOT__ebreak = 0U;
    vlSelfRef.top__DOT__uart__DOT__slaveFactory_readRsp_data = 0U;
    if ((0x10000000U == (0xfffffffcU & vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rData_addr))) {
        vlSelfRef.top__DOT__uart__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.top__DOT__uart__DOT__uart_reg;
        vlSelfRef.top__DOT__uart__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.top__DOT__uart__DOT__uart_reg;
    }
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid 
        = ((IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
              >> 1U));
    vlSelfRef.top__DOT__pc_1__DOT__axi4lite_ar_fire 
        = ((((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
            & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready)) 
           & (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_ar_valid));
    vlSelfRef.__Vtableidx4 = vlSelfRef.top__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.top__DOT__ctrl__DOT__s_stateReg_string 
        = Vtop__ConstPool__TABLE_h30ab60d4_0[vlSelfRef.__Vtableidx4];
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data 
        = ((2U & ((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))
            ? vlSelfRef.top__DOT__aximem_1__DOT__mem_r_data
            : 0U);
    vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data 
        = ((((0x0b00U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                          >> 0x00000014U)) | (0x0b80U 
                                              == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                  >> 0x00000014U))) 
            | (((0x0300U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                             >> 0x00000014U)) | (0x0305U 
                                                 == 
                                                 (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                  >> 0x00000014U))) 
               | ((0x0342U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                               >> 0x00000014U)) | (
                                                   (0x0341U 
                                                    == 
                                                    (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                     >> 0x00000014U)) 
                                                   | ((0x0f11U 
                                                       == 
                                                       (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                        >> 0x00000014U)) 
                                                      | (0x0f12U 
                                                         == 
                                                         (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                          >> 0x00000014U)))))))
            ? ((0x0b00U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                            >> 0x00000014U)) ? (IData)(vlSelfRef.top__DOT__csr_1__DOT__mcycle)
                : ((0x0b80U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                >> 0x00000014U)) ? (IData)(
                                                           (vlSelfRef.top__DOT__csr_1__DOT__mcycle 
                                                            >> 0x00000020U))
                    : ((0x0300U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                    >> 0x00000014U))
                        ? vlSelfRef.top__DOT__csr_1__DOT__mstatus
                        : ((0x0305U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                        >> 0x00000014U))
                            ? vlSelfRef.top__DOT__csr_1__DOT__mtvec
                            : ((0x0342U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                            >> 0x00000014U))
                                ? vlSelfRef.top__DOT__csr_1__DOT__mcause
                                : ((0x0341U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                >> 0x00000014U))
                                    ? vlSelfRef.top__DOT__csr_1__DOT__mepc
                                    : ((0x0f11U == 
                                        (vlSelfRef.top__DOT__encode_1__DOT__code 
                                         >> 0x00000014U))
                                        ? 0x79737978U
                                        : 0x018ce19aU)))))))
            : 0U);
    vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1 
        = (vlSelfRef.top__DOT__encode_1__DOT__pc_pc 
           + (((- (IData)((vlSelfRef.top__DOT__encode_1__DOT__code 
                           >> 0x0000001fU))) << 0x0000000dU) 
              | ((((2U & (vlSelfRef.top__DOT__encode_1__DOT__code 
                          >> 0x0000001eU)) | (1U & 
                                              (vlSelfRef.top__DOT__encode_1__DOT__code 
                                               >> 7U))) 
                  << 0x0000000bU) | ((0x000007e0U & 
                                      (vlSelfRef.top__DOT__encode_1__DOT__code 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                           >> 7U))))));
    vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_strb = 0U;
    vlSelfRef.top__DOT__encode_1_com_csr_mret = 0U;
    vlSelfRef.top__DOT__encode_1_com_csr_ecall = 0U;
    vlSelfRef.top__DOT__encode_1__DOT__imm_I = (((- (IData)(
                                                            (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000cU) 
                                                | (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                   >> 0x00000014U));
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid 
        = (((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
           & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid));
    vlSelfRef.top__DOT__encode_1_axi4lite_r_ready = 0U;
    vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2 
        = ((0U == (0x0000001fU & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                  >> 0x00000014U)))
            ? 0U : ((0x01000000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                     ? ((0x00800000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                         ? ((0x00400000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_30)
                                 : ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_28))
                             : ((0x00200000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_26)
                                 : ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_24)))
                         : ((0x00400000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_22)
                                 : ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_20))
                             : ((0x00200000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_18)
                                 : ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_16))))
                     : ((0x00800000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                         ? ((0x00400000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_14)
                                 : ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_12))
                             : ((0x00200000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_10)
                                 : ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_8)))
                         : ((0x00400000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_6)
                                 : ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_4))
                             : ((0x00200000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_2)
                                 : ((0x00100000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_0))))));
    vlSelfRef.top__DOT__encode_1_axi4lite_w_valid = 0U;
    vlSelfRef.top__DOT__encode_1__DOT__imm_S = (((- (IData)(
                                                            (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000cU) 
                                                | ((0x00000fe0U 
                                                    & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                         >> 7U))));
    vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
        = ((0U == (0x0000001fU & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                  >> 0x0000000fU)))
            ? 0U : ((0x00080000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                     ? ((0x00040000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                         ? ((0x00020000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_30)
                                 : ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_28))
                             : ((0x00010000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_26)
                                 : ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_24)))
                         : ((0x00020000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_22)
                                 : ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_20))
                             : ((0x00010000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_18)
                                 : ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_16))))
                     : ((0x00040000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                         ? ((0x00020000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_14)
                                 : ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_12))
                             : ((0x00010000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_10)
                                 : ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_8)))
                         : ((0x00020000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_6)
                                 : ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_4))
                             : ((0x00010000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_2)
                                 : ((0x00008000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.top__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.top__DOT__grp_1__DOT__reg_0))))));
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code)))))) {
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code)))))) {
                    if ((1U & (~ ((((((((0x00006063U 
                                         == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                                        | (0x00007063U 
                                           == (0x0000707fU 
                                               & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                       | (0x00000037U 
                                          == (0x0000007fU 
                                              & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                      | (0x00000017U 
                                         == (0x0000007fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                     | (0x0000006fU 
                                        == (0x0000007fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                    | (0x00001073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                   | (0x00002073U == 
                                      (0x0000707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                  | (0x00003073U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))))) {
                        if ((0x00005073U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            if ((0x00006073U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                if ((0x00007073U != 
                                     (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                    if ((0x00100073U 
                                         != vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                        if ((0x00000073U 
                                             != vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                            if ((0x30200073U 
                                                 != vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                                vlSelfRef.top__DOT__encode_1__DOT__ErrorReg = 1U;
                                            }
                                            if ((0x30200073U 
                                                 == vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                                vlSelfRef.top__DOT__encode_1_com_csr_mret = 1U;
                                            }
                                        }
                                        if ((0x00000073U 
                                             == vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                            vlSelfRef.top__DOT__encode_1_com_csr_ecall = 1U;
                                        }
                                    }
                                    if ((0x00100073U 
                                         == vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                        vlSelfRef.top__DOT__encode_1__DOT__ebreak = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                            vlSelfRef.top__DOT__encode_1_com_csr_vaild = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_vaild = 1U;
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_vaild = 1U;
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_vaild = 1U;
                    }
                }
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_strb = 0x0fU;
                            vlSelfRef.top__DOT__encode_1_axi4lite_w_valid 
                                = vlSelfRef.top__DOT__encode_1__DOT__mem_flag;
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_strb = 3U;
                            vlSelfRef.top__DOT__encode_1_axi4lite_w_valid 
                                = vlSelfRef.top__DOT__encode_1__DOT__mem_flag;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_strb = 1U;
                            vlSelfRef.top__DOT__encode_1_axi4lite_w_valid 
                                = vlSelfRef.top__DOT__encode_1__DOT__mem_flag;
                        }
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            vlSelfRef.top__DOT__encode_1_axi4lite_r_ready 
                                = vlSelfRef.top__DOT__encode_1__DOT__mem_flag;
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
    vlSelfRef.top__DOT__pc_1__DOT__axi4lite_r_fire 
        = ((IData)(vlSelfRef.top__DOT__pc_1_axi4lite_r_ready) 
           & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid));
    vlSelfRef.top__DOT__ctrl_r_sel = 0U;
    vlSelfRef.top__DOT__aximem_1__DOT__axi4lite_r_fire 
        = (((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
             ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready)
             : (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_r_ready)) 
           & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid));
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid 
        = ((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
            ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready)
            : (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_ar_valid));
    vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_data = 0U;
    vlSelfRef.top__DOT__encode_1_com_csr_w_data = 0U;
    vlSelfRef.top__DOT__encode_1__DOT____VdfgExtracted_hf015dc25__0 
        = VL_LTES_III(32, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1);
    vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_18 
        = VL_LTS_III(32, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2);
    vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_22 
        = (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
           + vlSelfRef.top__DOT__encode_1__DOT__imm_I);
    vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr = 0U;
    vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__ren 
        = ((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid) 
           & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready));
    vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 0U;
    vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_37 
        = (vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data 
           >> (0x00000018U & (vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_22 
                              << 3U)));
    vlSelfRef.top__DOT__encode_1_axi4lite_ar_payload_addr = 0U;
    vlSelfRef.top__DOT__encode_1_com_pc_nPC = 0U;
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code)))))) {
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_data 
                                = vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr 
                                = (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                   + vlSelfRef.top__DOT__encode_1__DOT__imm_S);
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_data 
                                = vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr 
                                = (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                   + vlSelfRef.top__DOT__encode_1__DOT__imm_S);
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_data 
                                = vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr 
                                = (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                   + vlSelfRef.top__DOT__encode_1__DOT__imm_S);
                        }
                    }
                    if ((0x00000067U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                        vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                            = vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_22;
                    } else if ((0x00002023U != (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((0x00001023U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            if ((0x00000023U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                if ((0x00000063U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                    if ((vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                         == vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)) {
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00001063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                    if ((vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                         != vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)) {
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00004063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                    if (vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_18) {
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
                                                   & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                                  | (0x00007063U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                 | (0x00000037U == 
                                    (0x0000007fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                | (0x00000017U == (0x0000007fU 
                                                   & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                               | (0x0000006fU == (0x0000007fU 
                                                  & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                              | (0x00001073U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                             | (0x00002073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                            | (0x00003073U == (0x0000707fU 
                                               & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
                    if ((0x00006063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                             < vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)) {
                            vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                            vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2 
                             <= vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1)) {
                            vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                            vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                = vlSelfRef.top__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00000037U != (0x0000007fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((0x00000017U != (0x0000007fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            if ((0x0000006fU == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                    = (vlSelfRef.top__DOT__encode_1__DOT__pc_pc 
                                       + ((((0x00000ffeU 
                                             & ((- (IData)(
                                                           (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                            >> 0x0000001fU))) 
                                                << 1U)) 
                                            | (vlSelfRef.top__DOT__encode_1__DOT__code 
                                               >> 0x0000001fU)) 
                                           << 0x00000014U) 
                                          | ((((0x000001feU 
                                                & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                     >> 0x00000014U))) 
                                              << 0x0000000bU) 
                                             | (0x000007feU 
                                                & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                   >> 0x00000014U)))));
                            }
                        }
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            if ((0x00100073U != vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                if ((0x00000073U == vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.top__DOT__csr_1_com_encode_r_pc;
                                } else if ((0x30200073U 
                                            == vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.top__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.top__DOT__csr_1_com_encode_r_pc;
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code)))))) {
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                                            vlSelfRef.top__DOT__encode_1_com_csr_w_data 
                                                = (
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                    ? vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1
                                                    : 
                                                   ((0x00002073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.top__DOT__encode_1__DOT__code))
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
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_w_data 
                            = (0x0000001fU & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                              >> 0x0000000fU));
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_w_data 
                            = ((0x0000001fU & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                               >> 0x0000000fU)) 
                               | vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data);
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        vlSelfRef.top__DOT__encode_1_com_csr_w_data 
                            = (0x0000001fU & ((vlSelfRef.top__DOT__encode_1__DOT__code 
                                               >> 0x0000000fU) 
                                              & (~ vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data)));
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            vlSelfRef.top__DOT__encode_1_axi4lite_ar_payload_addr 
                                = ((3U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__encode_1__DOT__code))
                                    ? vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_22
                                    : ((0x00001003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code))
                                        ? vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_22
                                        : ((0x00002003U 
                                            == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))
                                            ? (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                               + vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                            : vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_22)));
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((0x80000000U 
                                                 <= vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr) 
                                                & (0x80ffffffU 
                                                   > vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr));
    if ((2U & ((IData)(1U) << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))) {
        vlSelfRef.top__DOT__uart__DOT__mmio__DOT__w_data 
            = vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_data;
        vlSelfRef.__Vtableidx2 = vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_strb;
    } else {
        vlSelfRef.top__DOT__uart__DOT__mmio__DOT__w_data = 0U;
        vlSelfRef.__Vtableidx2 = 0U;
    }
    vlSelfRef.top__DOT__aximem_1__DOT__axi4lite_b_fire 
        = (((IData)(1U) << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))) 
           & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_b_valid));
    vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = ((IData)(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
           & (((IData)(1U) << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))) 
              >> 1U));
    vlSelfRef.__Vtableidx1 = ((1U & ((IData)(1U) << 
                                     (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                               ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_strb)
                               : 0U);
    vlSelfRef.top__DOT__aximem_1__DOT__mem_w_len = 
        Vtop__ConstPool__TABLE_hae0125a9_0[vlSelfRef.__Vtableidx1];
    vlSelfRef.top__DOT__uart__DOT__mmio_w_len = Vtop__ConstPool__TABLE_hae0125a9_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid 
        = (((IData)(1U) << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))) 
           & (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_w_valid));
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid 
        = ((IData)(vlSelfRef.top__DOT__encode_1_axi4lite_w_valid) 
           & (((IData)(1U) << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))) 
              >> 1U));
    vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__wen 
        = ((IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_aw_ready) 
           & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
    vlSelfRef.top__DOT__aximem_1__DOT__axi4lite_w_fire 
        = ((IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_w_ready) 
           & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready 
        = ((~ (IData)(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid));
    vlSelfRef.top__DOT__ctrl__DOT__axi_w_fire = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                                   ? (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_w_ready)
                                                   : (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready)) 
                                                 & (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_w_valid));
    vlSelfRef.top__DOT__ctrl__DOT__s_wantStart = 0U;
    vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = vlSelfRef.top__DOT__ctrl__DOT__s_stateReg;
    if ((4U & (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))) {
                if (vlSelfRef.top__DOT__encode_1_axi4lite_r_ready) {
                    vlSelfRef.top__DOT__ctrl_r_sel = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
            vlSelfRef.top__DOT__ctrl__DOT__s_wantStart = 1U;
        } else if ((1U & (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
            vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = 1U;
        } else if (((IData)(vlSelfRef.top__DOT__ctrl__DOT__axi_w_fire) 
                    | (IData)(vlSelfRef.top__DOT__ctrl__DOT__axi_r_fire_regNext))) {
            vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
        vlSelfRef.top__DOT__ctrl__DOT__s_stateNext 
            = ((1U & (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))
                ? ((IData)(vlSelfRef.top__DOT__ctrl__DOT__axi_w_fire)
                    ? 5U : (((IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready) 
                             | (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_w_valid))
                             ? 4U : 5U)) : 3U);
    } else if ((1U & (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
        if (((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid) 
             & (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_r_ready))) {
            vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = 2U;
        }
    } else {
        vlSelfRef.top__DOT__ctrl__DOT__s_wantStart = 1U;
    }
    if (vlSelfRef.top__DOT__ctrl__DOT__s_wantStart) {
        vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = 1U;
    }
    vlSelfRef.top__DOT__ctrl__DOT__u_vaild_1 = ((2U 
                                                 == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                                & (2U 
                                                   != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)));
    vlSelfRef.top__DOT__ctrl__DOT__step = ((5U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                           & (5U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)));
    vlSelfRef.top__DOT__grp_1__DOT__rd_vaild = ((IData)(vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild) 
                                                & ((5U 
                                                    == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                                   & (5U 
                                                      != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))));
    vlSelfRef.__Vtableidx5 = vlSelfRef.top__DOT__ctrl__DOT__s_stateNext;
    vlSelfRef.top__DOT__ctrl__DOT__s_stateNext_string 
        = Vtop__ConstPool__TABLE_h30ab60d4_0[vlSelfRef.__Vtableidx5];
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge top.ctrl.step)\n");
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
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->top__DOT__pc_1_axi4lite_ar_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13169456654144695000ull);
    vlSelf->top__DOT__pc_1_axi4lite_r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4816164350005843131ull);
    vlSelf->top__DOT__encode_1_com_grp_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4925476909682531140ull);
    vlSelf->top__DOT__encode_1_com_grp_rd_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15272957042925687492ull);
    vlSelf->top__DOT__encode_1_com_pc_nPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2960672545258645026ull);
    vlSelf->top__DOT__encode_1_com_pc_nPC_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11228158208647532181ull);
    vlSelf->top__DOT__encode_1_com_csr_w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10048935979265964301ull);
    vlSelf->top__DOT__encode_1_com_csr_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5396496564461293281ull);
    vlSelf->top__DOT__encode_1_com_csr_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17759461390282264324ull);
    vlSelf->top__DOT__encode_1_com_csr_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4653800157173586002ull);
    vlSelf->top__DOT__encode_1_axi4lite_aw_payload_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17096941955097851838ull);
    vlSelf->top__DOT__encode_1_axi4lite_aw_payload_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5133682429145270341ull);
    vlSelf->top__DOT__encode_1_axi4lite_w_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13015246404432840286ull);
    vlSelf->top__DOT__encode_1_axi4lite_w_payload_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17589278339802527609ull);
    vlSelf->top__DOT__encode_1_axi4lite_w_payload_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4578209775919890548ull);
    vlSelf->top__DOT__encode_1_axi4lite_ar_payload_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15072396717932524674ull);
    vlSelf->top__DOT__encode_1_axi4lite_ar_payload_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11594816114955893283ull);
    vlSelf->top__DOT__encode_1_axi4lite_r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5077444309826265173ull);
    vlSelf->top__DOT__csr_1_com_encode_r_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10416072046527825148ull);
    vlSelf->top__DOT__aximem_1_axi4lite_aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1261258449865202368ull);
    vlSelf->top__DOT__aximem_1_axi4lite_w_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 226802406238517072ull);
    vlSelf->top__DOT__aximem_1_axi4lite_b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7636160627377626525ull);
    vlSelf->top__DOT__aximem_1_axi4lite_ar_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14480908745956603089ull);
    vlSelf->top__DOT__aximem_1_axi4lite_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11508100947322227985ull);
    vlSelf->top__DOT__aximem_1_axi4lite_r_payload_resp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4630686961230523938ull);
    vlSelf->top__DOT__axiarbiter_1_AxiOut_1_ar_payload_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8606280187478523227ull);
    vlSelf->top__DOT__ctrl_u_vaild_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11896872362352321018ull);
    vlSelf->top__DOT__ctrl_r_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15510992126033220743ull);
    vlSelf->top__DOT__pc_1__DOT__PC_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1521856471748617642ull);
    vlSelf->top__DOT__pc_1__DOT__axi4lite_ar_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9959000524606500974ull);
    vlSelf->top__DOT__pc_1__DOT__axi4lite_r_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4556491015613990641ull);
    vlSelf->top__DOT__encode_1__DOT__com_grp_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14567351743218016887ull);
    vlSelf->top__DOT__encode_1__DOT__com_grp_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 215770431377314553ull);
    vlSelf->top__DOT__encode_1__DOT___zz_com_grp_rd_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13300639044717579841ull);
    vlSelf->top__DOT__encode_1__DOT___zz_com_grp_rd_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14772844581117666777ull);
    vlSelf->top__DOT__encode_1__DOT___zz_com_grp_rd_37 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7428986912479515264ull);
    vlSelf->top__DOT__encode_1__DOT___zz_com_pc_nPC_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 433839095964930004ull);
    vlSelf->top__DOT__encode_1__DOT__ErrorReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10725671115922418508ull);
    vlSelf->top__DOT__encode_1__DOT__ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13712040204302820266ull);
    vlSelf->top__DOT__encode_1__DOT__code = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 864281607991464748ull);
    vlSelf->top__DOT__encode_1__DOT__imm_I = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15542041707910509784ull);
    vlSelf->top__DOT__encode_1__DOT__imm_S = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5883316690846449569ull);
    vlSelf->top__DOT__encode_1__DOT__mem_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1427723511976746362ull);
    vlSelf->top__DOT__encode_1__DOT__pc_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3124757735089038823ull);
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
    vlSelf->top__DOT__grp_1__DOT__rd_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 296808559270465081ull);
    vlSelf->top__DOT__aximem_1__DOT__mem_w_len = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6138885339887692107ull);
    vlSelf->top__DOT__aximem_1__DOT__mem_r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8401969287516837687ull);
    vlSelf->top__DOT__aximem_1__DOT__axi4lite_w_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12390476150067019590ull);
    vlSelf->top__DOT__aximem_1__DOT__axi4lite_b_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11085177904293289303ull);
    vlSelf->top__DOT__aximem_1__DOT__axi4lite_r_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5592787971171695156ull);
    vlSelf->top__DOT__aximem_1__DOT__mem__DOT__wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4375845587434616531ull);
    vlSelf->top__DOT__aximem_1__DOT__mem__DOT__ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3469425196468420802ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7283801598877047049ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12574897994639273392ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15222305138137376164ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11737819988959331583ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1928540558147247444ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11089031773514843687ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 324019524757104488ull);
    vlSelf->top__DOT__axiarbiter_1__DOT__rsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936179752156347570ull);
    vlSelf->top__DOT__uart__DOT__mmio_w_len = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1592533142938617145ull);
    vlSelf->top__DOT__uart__DOT__mmio_r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7782321100720178413ull);
    vlSelf->top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7175612040604375227ull);
    vlSelf->top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17215542176463941585ull);
    vlSelf->top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12316626715405068527ull);
    vlSelf->top__DOT__uart__DOT__AxiIn_ar_rValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13503835986098428487ull);
    vlSelf->top__DOT__uart__DOT__AxiIn_ar_rData_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2966982958292854076ull);
    vlSelf->top__DOT__uart__DOT__AxiIn_ar_rData_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1434150690885194262ull);
    vlSelf->top__DOT__uart__DOT__slaveFactory_readRsp_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11614873718399232112ull);
    vlSelf->top__DOT__uart__DOT__uart_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17339000580188854833ull);
    vlSelf->top__DOT__uart__DOT__mmio__DOT__w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14696004181027326984ull);
    vlSelf->top__DOT__ctrl__DOT__u_vaild_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12417669362538049245ull);
    vlSelf->top__DOT__ctrl__DOT__axi_w_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16911023880243699604ull);
    vlSelf->top__DOT__ctrl__DOT__step = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8564719248858207953ull);
    vlSelf->top__DOT__ctrl__DOT__s_wantStart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11503597044993555199ull);
    vlSelf->top__DOT__ctrl__DOT__s_stateReg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11815935858563848604ull);
    vlSelf->top__DOT__ctrl__DOT__s_stateNext = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5951983697061910232ull);
    vlSelf->top__DOT__ctrl__DOT__axi_r_fire_regNext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10735166804934602852ull);
    vlSelf->top__DOT__ctrl__DOT__s_stateReg_string = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14257701431063476088ull);
    vlSelf->top__DOT__ctrl__DOT__s_stateNext_string = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 193589051968576878ull);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__Vdly__top__DOT__pc_1__DOT__PC_cnt = 0;
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
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
