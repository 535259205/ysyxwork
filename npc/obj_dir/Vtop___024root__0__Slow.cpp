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

void Vtop___024root____Vdpiimwrap_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r_TOP(IData/*31:0*/ addr, IData/*31:0*/ &rom_r__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__Decode_area_encode__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r_TOP(vlSelfRef.top__DOT__Pc_area_pc__DOT__PC_cnt, vlSelfRef.__Vfunc_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r__0__Vfuncout);
    vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code = vlSelfRef.__Vfunc_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r__0__Vfuncout;
    vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC_vaild = 0U;
    vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd_vaild = 1U;
    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_len = 0U;
    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_ready = 0U;
    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_len = 0U;
    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_vaild = 0U;
    vlSelfRef.top__DOT__Decode_area_encode__DOT__ErrorReg = 0U;
    vlSelfRef.top__DOT__Decode_area_encode__DOT__ebreak = 0U;
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)) 
                        | (0x00000013U == (0x0000707fU 
                                           & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
                       | (0x00002003U == (0x0000707fU 
                                          & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
                      | (0x00004003U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
                     | (0x00002023U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
                    | (0x00000023U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
                   | (0x00000067U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
                  | (0x00000037U == (0x0000007fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)))))) {
        if ((0x00100073U != vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)) {
            vlSelfRef.top__DOT__Decode_area_encode__DOT__ErrorReg = 1U;
        }
        if ((0x00100073U == vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)) {
            vlSelfRef.top__DOT__Decode_area_encode__DOT__ebreak = 1U;
        }
    }
    vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs2 
        = ((0U == (0x0000001fU & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                  >> 0x00000014U)))
            ? 0U : ((0x01000000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                     ? ((0x00800000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                         ? ((0x00400000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_31
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_30)
                                 : ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_29
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_28))
                             : ((0x00200000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_27
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_26)
                                 : ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_25
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_24)))
                         : ((0x00400000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_23
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_22)
                                 : ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_21
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_20))
                             : ((0x00200000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_19
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_18)
                                 : ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_17
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_16))))
                     : ((0x00800000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                         ? ((0x00400000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_15
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_14)
                                 : ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_13
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_12))
                             : ((0x00200000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_11
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_10)
                                 : ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_9
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_8)))
                         : ((0x00400000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                             ? ((0x00200000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_7
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_6)
                                 : ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_5
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_4))
                             : ((0x00200000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_3
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_2)
                                 : ((0x00100000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_1
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_0))))));
    vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs1 
        = ((0U == (0x0000001fU & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                  >> 0x0000000fU)))
            ? 0U : ((0x00080000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                     ? ((0x00040000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                         ? ((0x00020000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_31
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_30)
                                 : ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_29
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_28))
                             : ((0x00010000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_27
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_26)
                                 : ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_25
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_24)))
                         : ((0x00020000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_23
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_22)
                                 : ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_21
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_20))
                             : ((0x00010000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_19
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_18)
                                 : ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_17
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_16))))
                     : ((0x00040000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                         ? ((0x00020000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_15
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_14)
                                 : ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_13
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_12))
                             : ((0x00010000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_11
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_10)
                                 : ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_9
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_8)))
                         : ((0x00020000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                             ? ((0x00010000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_7
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_6)
                                 : ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_5
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_4))
                             : ((0x00010000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                 ? ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_3
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_2)
                                 : ((0x00008000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)
                                     ? vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_1
                                     : vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_0))))));
    if (((((((((0x00000033U == (0xfe00707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)) 
               | (0x00000013U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
              | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
             | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
            | (0x00002023U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
           | (0x00000023U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
          | (0x00000067U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
         | (0x00000037U == (0x0000007fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)))) {
        if ((0x00000033U != (0xfe00707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
            if ((0x00000013U != (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                if ((0x00002003U != (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                    if ((0x00004003U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                        if ((0x00002023U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                            if ((0x00000023U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                                if ((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                                    vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC_vaild = 1U;
                                }
                            }
                        }
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                            vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd_vaild = 0U;
                            vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_len = 3U;
                            vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_vaild = 1U;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                            vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd_vaild = 0U;
                            vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_len = 0U;
                            vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_vaild = 1U;
                        }
                    }
                }
                if ((0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_len = 3U;
                    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_ready = 1U;
                } else if ((0x00004003U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_len = 0U;
                    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_ready = 1U;
                }
            }
        }
    }
    if (vlSelfRef.top__DOT__Decode_area_encode__DOT__ebreak) {
        Vtop___024root____Vdpiimwrap_top__DOT__Decode_area_encode__DOT__ebreak_module__DOT__ebreak_TOP(1U);
    }
    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_data = 0U;
    vlSelfRef.top__DOT__Decode_area_encode__DOT___zz_com_exmem_w_addr 
        = (vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs1 
           + (((- (IData)((vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                           >> 0x0000001fU))) << 0x0000000cU) 
              | ((0x00000fe0U & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                 >> 0x00000014U)) | 
                 (0x0000001fU & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                 >> 7U)))));
    vlSelfRef.top__DOT__Decode_area_encode__DOT___zz_com_grp_rd_1 
        = (vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs1 
           + (((- (IData)((vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                           >> 0x0000001fU))) << 0x0000000cU) 
              | (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                 >> 0x00000014U)));
    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_addr = 0U;
    vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC = 0U;
    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_addr = 0U;
    vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd = 0U;
    if (((((((((0x00000033U == (0xfe00707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)) 
               | (0x00000013U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
              | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
             | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
            | (0x00002023U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
           | (0x00000023U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
          | (0x00000067U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
         | (0x00000037U == (0x0000007fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)))) {
        if ((0x00000033U != (0xfe00707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
            if ((0x00000013U != (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                if ((0x00002003U != (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                    if ((0x00004003U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                            vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_data 
                                = vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_addr 
                                = vlSelfRef.top__DOT__Decode_area_encode__DOT___zz_com_exmem_w_addr;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                            vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_data 
                                = vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs2;
                            vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_addr 
                                = vlSelfRef.top__DOT__Decode_area_encode__DOT___zz_com_exmem_w_addr;
                        }
                        if ((0x00002023U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                            if ((0x00000023U != (0x0000707fU 
                                                 & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                                if ((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                                    vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC 
                                        = vlSelfRef.top__DOT__Decode_area_encode__DOT___zz_com_grp_rd_1;
                                }
                            }
                        }
                    }
                }
                if ((0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_addr 
                        = vlSelfRef.top__DOT__Decode_area_encode__DOT___zz_com_grp_rd_1;
                } else if ((0x00004003U == (0x0000707fU 
                                            & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_addr 
                        = vlSelfRef.top__DOT__Decode_area_encode__DOT___zz_com_grp_rd_1;
                }
            }
        }
        if ((0x00000033U == (0xfe00707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
            vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd 
                = (vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs1 
                   + vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs2);
        } else if ((0x00000013U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
            vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd 
                = vlSelfRef.top__DOT__Decode_area_encode__DOT___zz_com_grp_rd_1;
        } else if ((0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
            vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd 
                = vlSelfRef.top__DOT__Exmem_area_exmem__DOT__mem_r_data;
        } else if ((0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
            vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd 
                = vlSelfRef.top__DOT__Exmem_area_exmem__DOT__mem_r_data;
        } else if ((0x00002023U != (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
            if ((0x00000023U != (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) {
                vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd 
                    = ((0x00000067U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))
                        ? ((IData)(4U) + vlSelfRef.top__DOT__Pc_area_pc__DOT__PC_cnt)
                        : (0xfffff000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code));
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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->top__DOT__Decode_area_encode_com_grp_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7195863822701146886ull);
    vlSelf->top__DOT__Decode_area_encode_com_grp_rd_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10156614294838993631ull);
    vlSelf->top__DOT__Decode_area_encode_com_pc_nPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15477432648428200314ull);
    vlSelf->top__DOT__Decode_area_encode_com_pc_nPC_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 768079643817703189ull);
    vlSelf->top__DOT__Decode_area_encode_com_exmem_w_vaild = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10727148986730698864ull);
    vlSelf->top__DOT__Decode_area_encode_com_exmem_w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5826285110600657064ull);
    vlSelf->top__DOT__Decode_area_encode_com_exmem_w_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2014429845362920930ull);
    vlSelf->top__DOT__Decode_area_encode_com_exmem_w_len = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5568055622177238757ull);
    vlSelf->top__DOT__Decode_area_encode_com_exmem_r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12195724905170810379ull);
    vlSelf->top__DOT__Decode_area_encode_com_exmem_r_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15191960870320113702ull);
    vlSelf->top__DOT__Decode_area_encode_com_exmem_r_len = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18267547958152850604ull);
    vlSelf->top__DOT__pip_ctrl_3_up_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13928032456287421275ull);
    vlSelf->top__DOT__pip_ctrl_2_up_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9203051997513661226ull);
    vlSelf->top__DOT__pip_ctrl_1_up_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 837623201625044922ull);
    vlSelf->top__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17483046977668594442ull);
    vlSelf->top__DOT__Pc_area_pc__DOT__rom_code = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15764729214794699865ull);
    vlSelf->top__DOT__Pc_area_pc__DOT__PC_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8326028562529068937ull);
    vlSelf->top__DOT__Decode_area_encode__DOT__com_grp_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9765972450936793860ull);
    vlSelf->top__DOT__Decode_area_encode__DOT__com_grp_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8253472125426187721ull);
    vlSelf->top__DOT__Decode_area_encode__DOT___zz_com_grp_rd_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15714215656201535370ull);
    vlSelf->top__DOT__Decode_area_encode__DOT___zz_com_exmem_w_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1633296606305075337ull);
    vlSelf->top__DOT__Decode_area_encode__DOT__ErrorReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18013199514279129247ull);
    vlSelf->top__DOT__Decode_area_encode__DOT__ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5785110413847118405ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4979756539718508402ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12307393046918962232ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6963468989229451493ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6809831288202756726ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13537151373391109946ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7451206789412396290ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8503986500739135543ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8350348799712308692ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10944674578223985524ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16494484769558846291ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3782107352634463787ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13595309447559523164ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10872729302430043633ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9375088334468431134ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 825442414952883379ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11183226826165765865ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15389033750565806687ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12121871289148423363ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10070459618169634144ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13605098068418931274ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14492410927690947822ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12985581573000024174ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17191388497400122844ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2059612270078830092ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5835266373486171054ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15407452815253221614ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13356041144274496456ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17886759781101269723ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2974654157641054512ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13666538668010214016ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12422202200246803648ull);
    vlSelf->top__DOT__Grp_area_grp__DOT__reg_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10370790529267850723ull);
    vlSelf->top__DOT__Exmem_area_exmem__DOT__mem_r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3946740664658209643ull);
    vlSelf->__Vfunc_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r__0__Vfuncout = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
