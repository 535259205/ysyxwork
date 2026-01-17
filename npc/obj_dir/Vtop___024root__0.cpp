// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" int rom_r(int addr);

void Vtop___024root____Vdpiimwrap_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r_TOP(IData/*31:0*/ addr, IData/*31:0*/ &rom_r__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int rom_r__Vfuncrtn__Vcvt;
    rom_r__Vfuncrtn__Vcvt = rom_r(addr__Vcvt);
    rom_r__Vfuncrtn = (rom_r__Vfuncrtn__Vcvt);
}

extern "C" void ebreak(int test);

void Vtop___024root____Vdpiimwrap_top__DOT__Decode_area_encode__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__Decode_area_encode__DOT__ebreak_module__DOT__ebreak_TOP\n"); );
    // Body
    int test__Vcvt;
    test__Vcvt = test;
    ebreak(test__Vcvt);
}

extern "C" void mem_w(int data, int addr, int len);

void Vtop___024root____Vdpiimwrap_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_w_TOP(IData/*31:0*/ data, IData/*31:0*/ addr, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_w_TOP\n"); );
    // Body
    int data__Vcvt;
    data__Vcvt = data;
    int addr__Vcvt;
    addr__Vcvt = addr;
    int len__Vcvt;
    len__Vcvt = len;
    mem_w(data__Vcvt, addr__Vcvt, len__Vcvt);
}

extern "C" int mem_r(int addr, int len);

void Vtop___024root____Vdpiimwrap_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_r_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &mem_r__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_r_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int len__Vcvt;
    len__Vcvt = len;
    int mem_r__Vfuncrtn__Vcvt;
    mem_r__Vfuncrtn__Vcvt = mem_r(addr__Vcvt, len__Vcvt);
    mem_r__Vfuncrtn = (mem_r__Vfuncrtn__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)) 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.rst)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_r__2__Vfuncout;
    __Vfunc_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_r__2__Vfuncout = 0;
    // Body
    if (vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_vaild) {
        Vtop___024root____Vdpiimwrap_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_w_TOP(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_data, vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_addr, 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_len)));
    }
    if (vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_ready) {
        Vtop___024root____Vdpiimwrap_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_r_TOP(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_addr, 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_len)), __Vfunc_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_r__2__Vfuncout);
        vlSelfRef.top__DOT__Exmem_area_exmem__DOT__mem_r_data 
            = __Vfunc_top__DOT__Exmem_area_exmem__DOT__mem__DOT__mem_r__2__Vfuncout;
    }
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__Pc_area_pc__DOT__PC_cnt 
            = ((IData)(vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC_vaild)
                ? vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC
                : ((IData)(4U) + vlSelfRef.top__DOT__Pc_area_pc__DOT__PC_cnt));
        if (vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd_vaild) {
            if ((0U != (0x0000001fU & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                       >> 7U)))) {
                if ((0x08000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_27 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x04000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_26 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x02000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_25 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x01000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_24 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00800000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_23 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00400000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_22 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00200000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_21 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00100000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_20 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00080000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_19 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00040000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_18 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00020000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_17 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00010000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_16 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00008000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_15 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00000800U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_11 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00000400U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_10 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00000200U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_9 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00000010U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_4 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00000100U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_8 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((8U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                              >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_3 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((1U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                              >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_0 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00000080U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_7 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00004000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_14 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((((IData)(1U) << (0x0000001fU & 
                                      (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                       >> 7U))) >> 0x1fU)) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_31 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((4U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                              >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_2 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00000040U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_6 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00002000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_13 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x40000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_30 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((2U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                              >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_1 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00000020U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_5 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x00001000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_12 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x10000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_28 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
                if ((0x20000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_29 
                        = vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd;
                }
            }
        }
    } else {
        vlSelfRef.top__DOT__Pc_area_pc__DOT__PC_cnt = 0x80000000U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_27 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_26 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_25 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_24 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_23 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_22 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_21 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_20 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_19 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_18 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_17 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_16 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_15 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_11 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_10 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_9 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_4 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_8 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_3 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_0 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_7 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_14 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_31 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_2 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_6 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_13 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_30 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_1 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_5 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_12 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_28 = 0U;
        vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_29 = 0U;
    }
    vlSelfRef.top__DOT__pip_ctrl_3_up_valid = ((IData)(vlSelfRef.rst) 
                                               && (IData)(vlSelfRef.top__DOT__pip_ctrl_2_up_valid));
    Vtop___024root____Vdpiimwrap_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r_TOP(vlSelfRef.top__DOT__Pc_area_pc__DOT__PC_cnt, vlSelfRef.__Vfunc_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r__0__Vfuncout);
    vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code = vlSelfRef.__Vfunc_top__DOT__Pc_area_pc__DOT__rom__DOT__rom_r__0__Vfuncout;
    vlSelfRef.top__DOT__pip_ctrl_2_up_valid = ((IData)(vlSelfRef.rst) 
                                               && (IData)(vlSelfRef.top__DOT__pip_ctrl_1_up_valid));
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
    vlSelfRef.top__DOT__pip_ctrl_1_up_valid = vlSelfRef.rst;
    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_addr = 0U;
    vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC = 0U;
    vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_addr = 0U;
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
    }
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd = 0U;
    if (((((((((0x00000033U == (0xfe00707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)) 
               | (0x00000013U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
              | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
             | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
            | (0x00002023U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
           | (0x00000023U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
          | (0x00000067U == (0x0000707fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code))) 
         | (0x00000037U == (0x0000007fU & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)))) {
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc/top.v", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/top.v", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
}
#endif  // VL_DEBUG
