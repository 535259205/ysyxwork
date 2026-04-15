// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_final\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VysyxSoCFull___024root___eval_phase__stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_settle\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc/ysyx_soc/ysyxSoCFull.v", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VysyxSoCFull___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers_vec__stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers_vec__stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VysyxSoCFull___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VysyxSoCFull___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VysyxSoCFull___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<IData/*31:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h7556d761_0;
extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h194eac5e_0;
extern const VlUnpacked<CData/*0:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h6684d93c_0;
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test);
extern const VlUnpacked<CData/*0:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h2e0871f1_0;
extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h4c61b0e2_0;
extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h6b526b42_0;
extern const VlUnpacked<CData/*2:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h29e05d89_0;

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ErrorReg = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_fence_i = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_ar_size = 0x0fU;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_vaild = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ebreak = 0U;
    vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_readRsp_data = 0U;
    if ((0x10000000U == (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rData_addr))) {
        vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__uart_reg;
        vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__uart_reg;
    }
    vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data = 0U;
    if ((0x10000000U == (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_addr))) {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__uart_reg;
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__uart_reg;
    }
    vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_readRsp_data = 0U;
    if ((0x1100bff8U == (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rData_addr))) {
        vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__axint__DOT___zz_slaveFactory_readRsp_data;
        vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__axint__DOT___zz_slaveFactory_readRsp_data;
    }
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_0_r_payload_data 
        = ((1U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)))
            ? vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_r_data
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_ar_valid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready) 
              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel))));
    vlSelfRef.__Vtableidx1 = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg_string 
        = VysyxSoCFull__ConstPool__TABLE_h7556d761_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data 
        = ((2U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)))
            ? vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_r_data
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_r_data 
        = ((0x0b00U == (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                        >> 0x00000014U)) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcycle)
            : ((0x0b80U == (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                            >> 0x00000014U)) ? (IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcycle 
                                                        >> 0x00000020U))
                : ((0x0300U == (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                >> 0x00000014U)) ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus
                    : ((0x0305U == (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                    >> 0x00000014U))
                        ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec
                        : ((0x0342U == (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                        >> 0x00000014U))
                            ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause
                            : ((0x0341U == (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                            >> 0x00000014U))
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc
                                : ((0x0f11U == (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                >> 0x00000014U))
                                    ? 0x79737978U : 
                                   ((0x0f12U == (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                 >> 0x00000014U))
                                     ? 0x018ce19aU : 0U))))))));
    vlSelfRef.__Vtableidx3 = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl_u_vaild_0 
        = VysyxSoCFull__ConstPool__TABLE_h194eac5e_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_pc_nPC_1 
        = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__pc_pc 
           + (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                           >> 0x0000001fU))) << 0x0000000dU) 
              | ((((2U & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                          >> 0x0000001eU)) | (1U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                               >> 7U))) 
                  << 0x0000000bU) | ((0x000007e0U & 
                                      (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                           >> 7U))))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_ecall = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_mret = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_32 
        = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
              >> 0x00000014U));
    vlSelfRef.__Vtableidx5 = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_wantStart 
        = VysyxSoCFull__ConstPool__TABLE_h6684d93c_0
        [vlSelfRef.__Vtableidx5];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__finish 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_r_ready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid) 
              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2 
        = ((0U != (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                  >> 0x00000014U)))
            ? ((0x01000000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                ? ((0x00800000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                    ? ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                        ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30)
                            : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28))
                        : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26)
                            : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24)))
                    : ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                        ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22)
                            : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20))
                        : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18)
                            : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16))))
                : ((0x00800000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                    ? ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                        ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14)
                            : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12))
                        : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10)
                            : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8)))
                    : ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                        ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6)
                            : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4))
                        : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2)
                            : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_0)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__imm_S 
        = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000fe0U & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                              >> 0x00000014U)) | (0x0000001fU 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                     >> 7U))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 
        = ((0U != (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                  >> 0x0000000fU)))
            ? ((0x00080000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                ? ((0x00040000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                    ? ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                        ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30)
                            : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28))
                        : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26)
                            : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24)))
                    : ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                        ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22)
                            : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20))
                        : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18)
                            : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16))))
                : ((0x00040000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                    ? ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                        ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14)
                            : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12))
                        : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10)
                            : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8)))
                    : ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                        ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6)
                            : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4))
                        : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                            ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2)
                            : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)
                                ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1
                                : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_0)))))
            : 0U);
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
                    if ((1U & (~ ((((((((0x00006063U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                                        | (0x00007063U 
                                           == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                       | (0x00000037U 
                                          == (0x0000007fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                      | (0x00000017U 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                     | (0x0000006fU 
                                        == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                    | (0x00001073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                   | (0x00002073U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                  | (0x00003073U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
                        if ((0x00005073U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            if ((0x00006073U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                if ((0x00007073U != 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                    if ((0x00100073U 
                                         != vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                        if ((0x00000073U 
                                             != vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                            if ((0x30200073U 
                                                 != vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                                if (
                                                    (0x0000100fU 
                                                     != vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                                    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ErrorReg = 1U;
                                                }
                                                if (
                                                    (0x0000100fU 
                                                     == vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                                    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_fence_i = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((0x00100073U 
                                         == vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ebreak = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_vaild = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_vaild = 1U;
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_vaild = 1U;
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_vaild = 1U;
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_ar_size 
                                = ((3U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                    ? 1U : ((0x00001003U 
                                             == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                             ? 3U : 
                                            ((0x00002003U 
                                              == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                              ? 0x0fU
                                              : ((0x00004003U 
                                                  == 
                                                  (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                                  ? 1U
                                                  : 3U))));
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ebreak) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP(1U);
    }
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l137 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl_u_vaild_0));
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready 
                                = ((3U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag)))
                                    : ((0x00001003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag) 
                                           & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag)))
                                        : ((0x00002003U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag) 
                                               & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag)))
                                            : ((0x00004003U 
                                                == 
                                                (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag) 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag)))
                                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag) 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag)))))));
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_r_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_r_ready)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1_com_encode_r_pc = 0U;
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
                    if ((1U & (~ ((((((((0x00006063U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                                        | (0x00007063U 
                                           == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                       | (0x00000037U 
                                          == (0x0000007fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                      | (0x00000017U 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                     | (0x0000006fU 
                                        == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                    | (0x00001073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                   | (0x00002073U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                  | (0x00003073U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
                        if ((0x00005073U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            if ((0x00006073U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                if ((0x00007073U != 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                    if ((0x00100073U 
                                         != vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                        if ((0x00000073U 
                                             == vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_ecall = 1U;
                                        }
                                        if ((0x00000073U 
                                             != vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                            if ((0x30200073U 
                                                 == vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_mret = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_ecall) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1_com_encode_r_pc 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec;
    } else if (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_mret) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1_com_encode_r_pc 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc;
    }
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l150 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl_u_vaild_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__finish));
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__Vtableidx4 = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready)) 
                               << 3U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl_r_sel 
        = VysyxSoCFull__ConstPool__TABLE_h2e0871f1_0
        [vlSelfRef.__Vtableidx4];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_ar_valid));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_w_data = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_28 
        = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 
           + vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_32);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_24 
        = VL_LTS_III(32, vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1, vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_27 
        = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 
           < vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531 
        = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 
           == vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_1 
        = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 
           != vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_3 
        = VL_LTES_III(32, vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2, vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_5 
        = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2 
           <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1);
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr 
        = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 
           + vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__imm_S);
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_payload_addr = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2 
        = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data 
           >> (0x00000018U & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_28 
                              << 3U)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 0U;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr = 0U;
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag;
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2;
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 0x0fU;
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr 
                                = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 
                                   + vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__imm_S);
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag;
                            if ((0U == (3U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data 
                                    = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2;
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 3U;
                            } else if ((2U == (3U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data 
                                    = VL_SHIFTL_III(32,32,32, vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2, 0x00000010U);
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 0x0cU;
                            } else {
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data 
                                    = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2;
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 3U;
                            }
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag;
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data 
                                = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2 
                                   << (0x00000018U 
                                       & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr 
                                          << 3U)));
                            if ((0U == (3U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 1U;
                            } else if ((1U == (3U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 2U;
                            } else if ((2U == (3U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 4U;
                            } else if ((3U == (3U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 8U;
                            }
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr;
                        }
                    }
                    if ((0x00000067U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_28;
                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                    } else if ((0x00002023U != (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if ((0x00001023U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            if ((0x00000023U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                if ((0x00000063U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                    if (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531) {
                                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    }
                                } else if ((0x00001063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                    if (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_1) {
                                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    }
                                } else if ((0x00004063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                    if (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_24) {
                                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    }
                                } else if (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_3) {
                                    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                }
                            }
                        }
                    }
                } else if (((((((((0x00006063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                                  | (0x00007063U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                 | (0x00000037U == 
                                    (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                | (0x00000017U == (0x0000007fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                               | (0x0000006fU == (0x0000007fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                              | (0x00001073U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                             | (0x00002073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                            | (0x00003073U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))) {
                    if ((0x00006063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_27) {
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                        }
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_5) {
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                        }
                    } else if ((0x00000037U != (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if ((0x00000017U != (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            if ((0x0000006fU == (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                                    = (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__pc_pc 
                                       + ((((0x00000ffeU 
                                             & ((- (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                            >> 0x0000001fU))) 
                                                << 1U)) 
                                            | (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                               >> 0x0000001fU)) 
                                           << 0x00000014U) 
                                          | ((((0x000001feU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                     >> 0x00000014U))) 
                                              << 0x0000000bU) 
                                             | (0x000007feU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                   >> 0x00000014U)))));
                                vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                            }
                        }
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            if ((0x00100073U != vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                if ((0x00000073U == vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1_com_encode_r_pc;
                                    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                } else if ((0x30200073U 
                                            == vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1_com_encode_r_pc;
                                    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))))) {
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_w_data 
                                                = (
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1
                                                    : 
                                                   ((0x00002073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 
                                                     | vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_r_data)
                                                     : 
                                                    (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_r_data 
                                                     & (~ vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1))));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_w_data 
                            = (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                              >> 0x0000000fU));
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_w_data 
                            = ((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                               >> 0x0000000fU)) 
                               | vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_r_data);
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_w_data 
                            = (0x0000001fU & ((vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                               >> 0x0000000fU) 
                                              & (~ vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_r_data)));
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_payload_addr 
                                = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_28;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l153 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel 
        = (((0x80000000U <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr) 
            & (0x80ffffffU > vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr))
            ? 0U : (((0x10000000U <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr) 
                     & (0x1000ffffU > vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr))
                     ? 1U : (((0x11000000U <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr) 
                              & (0x1100ffffU > vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr))
                              ? 2U : 3U)));
    if ((2U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__mmio__DOT__w_data 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data;
        vlSelfRef.__Vtableidx7 = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__mmio__DOT__w_data = 0U;
        vlSelfRef.__Vtableidx7 = 0U;
    }
    if ((8U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data;
        vlSelfRef.__Vtableidx9 = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data = 0U;
        vlSelfRef.__Vtableidx9 = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_b_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag) 
              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))));
    vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__mmio_w_len 
        = VysyxSoCFull__ConstPool__TABLE_h4c61b0e2_0
        [vlSelfRef.__Vtableidx7];
    vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio_w_len 
        = VysyxSoCFull__ConstPool__TABLE_h4c61b0e2_0
        [vlSelfRef.__Vtableidx9];
    vlSelfRef.__Vtableidx11 = ((1U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb)
                                : 0U);
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_w_len 
        = VysyxSoCFull__ConstPool__TABLE_h6b526b42_0
        [vlSelfRef.__Vtableidx11];
    vlSelfRef.__Vtableidx12 = ((4U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb)
                                : 0U);
    vlSelfRef.ysyxSoCFull__DOT__axint__DOT__mmio_w_len 
        = VysyxSoCFull__ConstPool__TABLE_h4c61b0e2_0
        [vlSelfRef.__Vtableidx12];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid) 
           & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid)
            : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))
                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)
                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_b_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag));
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__wen 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_w_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid));
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready;
    } else if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready;
    } else if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready;
    }
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready));
    vlSelfRef.__Vtableidx6 = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_wantStart) 
                                  << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__finish) 
                                            << 2U)) 
                                | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid)) 
                                    << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_fire))) 
                               << 4U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT___zz_when_MyCpu_l792) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_fire)) 
                                          << 3U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext 
        = VysyxSoCFull__ConstPool__TABLE_h29e05d89_0
        [vlSelfRef.__Vtableidx6];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__step_fun_1__DOT__step 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
           & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__rd_vaild 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_grp_rd_vaild) 
           & ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
              & (5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg))));
    vlSelfRef.__Vtableidx2 = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext_string 
        = VysyxSoCFull__ConstPool__TABLE_h7556d761_0
        [vlSelfRef.__Vtableidx2];
}

VL_ATTR_COLD void VysyxSoCFull___024root____Vm_traceActivitySetAll(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VysyxSoCFull___024root___stl_sequent__TOP__0(vlSelf);
        VysyxSoCFull___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool VysyxSoCFull___024root___eval_phase__stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VysyxSoCFull___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VysyxSoCFull___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VysyxSoCFull___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VysyxSoCFull___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root____Vm_traceActivitySetAll(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vm_traceActivitySetAll\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1_axi4lite_r_payload_resp = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_ar_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_r_ready = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_com_grp_rd = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_com_grp_rd_vaild = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_w_data = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_vaild = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_ecall = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_mret = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_payload_addr = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_ar_size = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1_fence_i = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__csr_1_com_encode_r_pc = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__ctrl_u_vaild_0 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__ctrl_r_sel = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_aw_ready = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_w_ready = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_b_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_b_payload_resp = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__finish = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__PC_cnt = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_fire = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l137 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l150 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l153 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__code_reg = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_r_data = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_24 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_27 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_28 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_32 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_pc_nPC_1 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ErrorReg = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ebreak = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__imm_S = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_b_fire = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_fire = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__pc_pc = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_1 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_3 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_5 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcycle = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_0 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__rd_vaild = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_0_r_payload_data = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_wantStart = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__ctrl__DOT___zz_when_MyCpu_l792 = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg_string = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext_string = 0;
    vlSelf->ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__step_fun_1__DOT__step = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__mmio_w_len = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__mmio_r_data = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rValid = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rData_addr = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rData_prot = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__slaveFactory_readRsp_data = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__uart_reg = 0;
    vlSelf->ysyxSoCFull__DOT__uart1__DOT__mmio__DOT__w_data = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__mmio_w_len = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__mmio_r_data = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rValid = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_addr = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_prot = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__uart_reg = 0;
    vlSelf->ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1__DOT__mem_w_len = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1__DOT__mem_r_data = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_w_fire = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_b_fire = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_r_fire = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__wen = 0;
    vlSelf->ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__mmio_w_len = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__mmio_r_data = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rValid = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rData_addr = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rData_prot = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__slaveFactory_readRsp_data = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT__mtime = 0;
    vlSelf->ysyxSoCFull__DOT__axint__DOT___zz_slaveFactory_readRsp_data = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vtableidx6 = 0;
    vlSelf->__Vtableidx7 = 0;
    vlSelf->__Vtableidx9 = 0;
    vlSelf->__Vtableidx11 = 0;
    vlSelf->__Vtableidx12 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
