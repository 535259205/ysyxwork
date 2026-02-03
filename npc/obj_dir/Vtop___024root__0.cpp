// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" void debug(int addr, int data);

void Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(IData/*31:0*/ addr, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    debug(addr__Vcvt, data__Vcvt);
}

extern "C" void ebreak(int test);

void Vtop___024root____Vdpiimwrap_top__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP\n"); );
    // Body
    int test__Vcvt;
    test__Vcvt = test;
    ebreak(test__Vcvt);
}

extern "C" void mem_w(int data, int addr, int len);

void Vtop___024root____Vdpiimwrap_top__DOT__aximem_1__DOT__mem__DOT__mem_w_TOP(IData/*31:0*/ data, IData/*31:0*/ addr, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__aximem_1__DOT__mem__DOT__mem_w_TOP\n"); );
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

void Vtop___024root____Vdpiimwrap_top__DOT__aximem_1__DOT__mem__DOT__mem_r_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &mem_r__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__aximem_1__DOT__mem__DOT__mem_r_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int len__Vcvt;
    len__Vcvt = len;
    int mem_r__Vfuncrtn__Vcvt;
    mem_r__Vfuncrtn__Vcvt = mem_r(addr__Vcvt, len__Vcvt);
    mem_r__Vfuncrtn = (mem_r__Vfuncrtn__Vcvt);
}

extern "C" void mmio_w(int addr, int data, int len);

void Vtop___024root____Vdpiimwrap_top__DOT__uart__DOT__mmio__DOT__mmio_w_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__uart__DOT__mmio__DOT__mmio_w_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int len__Vcvt;
    len__Vcvt = len;
    mmio_w(addr__Vcvt, data__Vcvt, len__Vcvt);
}

extern "C" int mmio_r(int addr, int len);

void Vtop___024root____Vdpiimwrap_top__DOT__uart__DOT__mmio__DOT__mmio_r_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &mmio_r__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__uart__DOT__mmio__DOT__mmio_r_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int len__Vcvt;
    len__Vcvt = len;
    int mmio_r__Vfuncrtn__Vcvt;
    mmio_r__Vfuncrtn__Vcvt = mmio_r(addr__Vcvt, len__Vcvt);
    mmio_r__Vfuncrtn = (mmio_r__Vfuncrtn__Vcvt);
}

extern "C" void SimStep1(int step_data);

void Vtop___024root____Vdpiimwrap_top__DOT__ctrl__DOT__step_fun_1__DOT__SimStep1_TOP(IData/*31:0*/ step_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ctrl__DOT__step_fun_1__DOT__SimStep1_TOP\n"); );
    // Body
    int step_data__Vcvt;
    step_data__Vcvt = step_data;
    SimStep1(step_data__Vcvt);
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
                                                    (((((~ (IData)(vlSelfRef.top__DOT__ctrl__DOT__step)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ctrl__DOT__step__0)) 
                                                       << 3U) 
                                                      | (((~ (IData)(vlSelfRef.clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.rst)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ctrl__DOT__step__0 
        = vlSelfRef.top__DOT__ctrl__DOT__step;
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
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__ctrl__DOT__step_fun_1__DOT__SimStep1_TOP(1U);
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000020U, vlSelfRef.top__DOT__pc_1__DOT__PC_cnt);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000021U, 
                                                                                ((IData)(vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild)
                                                                                 ? vlSelfRef.top__DOT__encode_1_com_pc_nPC
                                                                                 : vlSelfRef.top__DOT__pc_1__DOT__PC_cnt));
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000027U, (IData)(vlSelfRef.top__DOT__csr_1__DOT__mcycle));
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000028U, (IData)(
                                                                                (vlSelfRef.top__DOT__csr_1__DOT__mcycle 
                                                                                >> 0x00000020U)));
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000022U, 
                                                                                ((1U 
                                                                                & ((IData)(1U) 
                                                                                << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))
                                                                                 ? vlSelfRef.top__DOT__aximem_1__DOT__mem_r_data
                                                                                 : 0U));
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000024U, vlSelfRef.top__DOT__csr_1__DOT__mcause);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000025U, vlSelfRef.top__DOT__csr_1__DOT__mstatus);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000023U, vlSelfRef.top__DOT__csr_1__DOT__mtvec);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000026U, vlSelfRef.top__DOT__csr_1__DOT__mepc);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0U, vlSelfRef.top__DOT__grp_1__DOT__reg_0);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(1U, vlSelfRef.top__DOT__grp_1__DOT__reg_1);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(2U, vlSelfRef.top__DOT__grp_1__DOT__reg_2);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(3U, vlSelfRef.top__DOT__grp_1__DOT__reg_3);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(4U, vlSelfRef.top__DOT__grp_1__DOT__reg_4);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(5U, vlSelfRef.top__DOT__grp_1__DOT__reg_5);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(6U, vlSelfRef.top__DOT__grp_1__DOT__reg_6);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(7U, vlSelfRef.top__DOT__grp_1__DOT__reg_7);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(8U, vlSelfRef.top__DOT__grp_1__DOT__reg_8);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(9U, vlSelfRef.top__DOT__grp_1__DOT__reg_9);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000aU, vlSelfRef.top__DOT__grp_1__DOT__reg_10);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000bU, vlSelfRef.top__DOT__grp_1__DOT__reg_11);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000cU, vlSelfRef.top__DOT__grp_1__DOT__reg_12);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000dU, vlSelfRef.top__DOT__grp_1__DOT__reg_13);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000eU, vlSelfRef.top__DOT__grp_1__DOT__reg_14);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000fU, vlSelfRef.top__DOT__grp_1__DOT__reg_15);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000010U, vlSelfRef.top__DOT__grp_1__DOT__reg_16);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000011U, vlSelfRef.top__DOT__grp_1__DOT__reg_17);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000012U, vlSelfRef.top__DOT__grp_1__DOT__reg_18);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000013U, vlSelfRef.top__DOT__grp_1__DOT__reg_19);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000014U, vlSelfRef.top__DOT__grp_1__DOT__reg_20);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000015U, vlSelfRef.top__DOT__grp_1__DOT__reg_21);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000016U, vlSelfRef.top__DOT__grp_1__DOT__reg_22);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000017U, vlSelfRef.top__DOT__grp_1__DOT__reg_23);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000018U, vlSelfRef.top__DOT__grp_1__DOT__reg_24);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000019U, vlSelfRef.top__DOT__grp_1__DOT__reg_25);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001aU, vlSelfRef.top__DOT__grp_1__DOT__reg_26);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001bU, vlSelfRef.top__DOT__grp_1__DOT__reg_27);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001cU, vlSelfRef.top__DOT__grp_1__DOT__reg_28);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001dU, vlSelfRef.top__DOT__grp_1__DOT__reg_29);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001eU, vlSelfRef.top__DOT__grp_1__DOT__reg_30);
    Vtop___024root____Vdpiimwrap_top__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001fU, vlSelfRef.top__DOT__grp_1__DOT__reg_31);
}

extern const VlUnpacked<IData/*31:0*/, 8> Vtop__ConstPool__TABLE_h30ab60d4_0;

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__top__DOT__pc_1__DOT__PC_cnt = vlSelfRef.top__DOT__pc_1__DOT__PC_cnt;
    if (vlSelfRef.rst) {
        if (((IData)(vlSelfRef.top__DOT__pc_1__DOT__axi4lite_r_fire) 
             & (IData)(vlSelfRef.top__DOT__ctrl_u_vaild_0))) {
            vlSelfRef.__Vdly__top__DOT__pc_1__DOT__PC_cnt 
                = ((IData)(4U) + vlSelfRef.top__DOT__pc_1__DOT__PC_cnt);
        } else if (vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild) {
            vlSelfRef.__Vdly__top__DOT__pc_1__DOT__PC_cnt 
                = vlSelfRef.top__DOT__encode_1_com_pc_nPC;
        }
        if (vlSelfRef.top__DOT__aximem_1__DOT__axi4lite_b_fire) {
            vlSelfRef.top__DOT__aximem_1_axi4lite_b_valid = 0U;
        } else if (vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid) {
            vlSelfRef.top__DOT__aximem_1_axi4lite_b_valid = 1U;
        }
        if (vlSelfRef.top__DOT__aximem_1__DOT__axi4lite_w_fire) {
            vlSelfRef.top__DOT__aximem_1_axi4lite_w_ready = 0U;
        } else if (vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid) {
            vlSelfRef.top__DOT__aximem_1_axi4lite_w_ready = 1U;
        }
        if (vlSelfRef.top__DOT__aximem_1__DOT__axi4lite_r_fire) {
            vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid = 0U;
        }
        if (vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__ren) {
            vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready = 0U;
            vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid = 1U;
        } else if (vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid) {
            vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready = 1U;
        }
        vlSelfRef.top__DOT__ctrl__DOT__s_stateReg = vlSelfRef.top__DOT__ctrl__DOT__s_stateNext;
        if (vlSelfRef.top__DOT__ctrl__DOT__u_vaild_1) {
            vlSelfRef.top__DOT__encode_1__DOT__mem_flag = 1U;
        }
        if (((IData)(vlSelfRef.top__DOT__ctrl__DOT__axi_w_fire) 
             | ((IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready) 
                & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid)))) {
            vlSelfRef.top__DOT__encode_1__DOT__mem_flag = 0U;
        }
        vlSelfRef.top__DOT__csr_1__DOT__mcycle = vlSelfRef.top__DOT__csr_1__DOT___zz_mcycle;
        if (vlSelfRef.top__DOT__encode_1_com_csr_ecall) {
            vlSelfRef.top__DOT__csr_1__DOT__mcause = 8U;
            vlSelfRef.top__DOT__csr_1__DOT__mepc = vlSelfRef.top__DOT__pc_1__DOT__PC_cnt;
        } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__encode_1_com_csr_mret)))) {
            if (vlSelfRef.top__DOT__encode_1_com_csr_vaild) {
                if ((0x0300U != (vlSelfRef.top__DOT__encode_1__DOT__code 
                                 >> 0x00000014U))) {
                    if ((0x0305U != (vlSelfRef.top__DOT__encode_1__DOT__code 
                                     >> 0x00000014U))) {
                        if ((0x0342U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                         >> 0x00000014U))) {
                            vlSelfRef.top__DOT__csr_1__DOT__mcause 
                                = vlSelfRef.top__DOT__encode_1_com_csr_w_data;
                        }
                        if ((0x0342U != (vlSelfRef.top__DOT__encode_1__DOT__code 
                                         >> 0x00000014U))) {
                            if ((0x0341U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                             >> 0x00000014U))) {
                                vlSelfRef.top__DOT__csr_1__DOT__mepc 
                                    = vlSelfRef.top__DOT__encode_1_com_csr_w_data;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__encode_1_com_csr_ecall)))) {
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__encode_1_com_csr_mret)))) {
                if (vlSelfRef.top__DOT__encode_1_com_csr_vaild) {
                    if ((0x0300U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                     >> 0x00000014U))) {
                        vlSelfRef.top__DOT__csr_1__DOT__mstatus 
                            = vlSelfRef.top__DOT__encode_1_com_csr_w_data;
                    }
                    if ((0x0300U != (vlSelfRef.top__DOT__encode_1__DOT__code 
                                     >> 0x00000014U))) {
                        if ((0x0305U == (vlSelfRef.top__DOT__encode_1__DOT__code 
                                         >> 0x00000014U))) {
                            vlSelfRef.top__DOT__csr_1__DOT__mtvec 
                                = vlSelfRef.top__DOT__encode_1_com_csr_w_data;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.top__DOT__grp_1__DOT__rd_vaild) {
            if ((0U != (0x0000001fU & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                       >> 7U)))) {
                if ((1U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_0 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((2U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_1 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((4U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_2 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((8U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_3 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000010U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_4 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000020U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_5 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000040U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_6 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000080U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_7 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000100U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_8 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000200U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_9 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000400U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_10 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000800U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_11 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00001000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_12 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00002000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_13 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00004000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_14 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00008000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_15 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00010000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_16 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00020000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_17 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00040000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_18 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00080000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_19 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00100000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_20 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00200000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_21 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00400000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_22 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x00800000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_23 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x01000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_24 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x02000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_25 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x04000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_26 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x08000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_27 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x10000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_28 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x20000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_29 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((0x40000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.top__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_30 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
                if ((((IData)(1U) << (0x0000001fU & 
                                      (vlSelfRef.top__DOT__encode_1__DOT__code 
                                       >> 7U))) >> 0x1fU)) {
                    vlSelfRef.top__DOT__grp_1__DOT__reg_31 
                        = vlSelfRef.top__DOT__encode_1_com_grp_rd;
                }
            }
        }
    } else {
        vlSelfRef.__Vdly__top__DOT__pc_1__DOT__PC_cnt = 0x80000000U;
        vlSelfRef.top__DOT__aximem_1_axi4lite_b_valid = 0U;
        vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready = 0U;
        vlSelfRef.top__DOT__aximem_1_axi4lite_w_ready = 0U;
        vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid = 0U;
        vlSelfRef.top__DOT__ctrl__DOT__s_stateReg = 0U;
        vlSelfRef.top__DOT__encode_1__DOT__mem_flag = 0U;
        vlSelfRef.top__DOT__csr_1__DOT__mcycle = 0ULL;
        vlSelfRef.top__DOT__csr_1__DOT__mcause = 0U;
        vlSelfRef.top__DOT__csr_1__DOT__mstatus = 0x00001800U;
        vlSelfRef.top__DOT__csr_1__DOT__mtvec = 0x80000000U;
        vlSelfRef.top__DOT__csr_1__DOT__mepc = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_0 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_1 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_2 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_3 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_4 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_5 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_6 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_7 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_8 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_9 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_10 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_11 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_12 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_13 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_14 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_15 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_16 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_17 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_18 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_19 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_20 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_21 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_22 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_23 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_24 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_25 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_26 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_27 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_28 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_29 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_30 = 0U;
        vlSelfRef.top__DOT__grp_1__DOT__reg_31 = 0U;
    }
    vlSelfRef.__Vtableidx4 = vlSelfRef.top__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.top__DOT__ctrl__DOT__s_stateReg_string 
        = Vtop__ConstPool__TABLE_h30ab60d4_0[vlSelfRef.__Vtableidx4];
    vlSelfRef.top__DOT__csr_1__DOT___zz_mcycle = (1ULL 
                                                  + vlSelfRef.top__DOT__csr_1__DOT__mcycle);
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid) 
         & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready))) {
        Vtop___024root____Vdpiimwrap_top__DOT__uart__DOT__mmio__DOT__mmio_w_TOP(
                                                                                ((2U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                                                                 ? vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr
                                                                                 : 0U), vlSelfRef.top__DOT__uart__DOT__mmio__DOT__w_data, 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.top__DOT__uart__DOT__mmio_w_len)));
    }
    if (((IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_aw_ready) 
         & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid))) {
        Vtop___024root____Vdpiimwrap_top__DOT__aximem_1__DOT__mem__DOT__mem_w_TOP(
                                                                                ((1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                                                                 ? vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_data
                                                                                 : 0U), 
                                                                                ((1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                                                                 ? vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr
                                                                                 : 0U), 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.top__DOT__aximem_1__DOT__mem_w_len)));
    }
    if (vlSelfRef.top__DOT__pc_1__DOT__axi4lite_ar_fire) {
        vlSelfRef.top__DOT__pc_1_axi4lite_ar_valid = 0U;
    } else if (((IData)(vlSelfRef.top__DOT__ctrl_u_vaild_0) 
                & (~ (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid)))) {
        vlSelfRef.top__DOT__pc_1_axi4lite_ar_valid = 1U;
    }
    vlSelfRef.top__DOT__ctrl__DOT__axi_r_fire_regNext 
        = ((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid) 
           & (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready));
    if (vlSelfRef.top__DOT__pc_1__DOT__axi4lite_r_fire) {
        vlSelfRef.top__DOT__pc_1_axi4lite_r_ready = 0U;
    } else if (vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid) {
        vlSelfRef.top__DOT__pc_1_axi4lite_r_ready = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rValid)))) {
        vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rData_prot 
            = vlSelfRef.top__DOT__axiarbiter_1_AxiOut_1_ar_payload_prot;
        vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rData_addr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))) {
        vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp = 0U;
    }
    if ((0x10000000U == ((2U & ((IData)(1U) << (1U 
                                                & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                          ? (0xfffffffcU & vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr)
                          : 0U))) {
        if (vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready) {
            vlSelfRef.top__DOT__uart__DOT__uart_reg 
                = vlSelfRef.top__DOT__uart__DOT__mmio__DOT__w_data;
            vlSelfRef.top__DOT__uart__DOT__uart_reg 
                = vlSelfRef.top__DOT__uart__DOT__mmio__DOT__w_data;
        }
    }
    vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 1U;
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
                        vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
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
                        vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                            if ((0x00100073U != vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                if ((0x00000073U == vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
                                } else if ((0x30200073U 
                                            == vlSelfRef.top__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__encode_1_com_grp_rd = 0U;
    if (((((((((0x00000033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code)) 
               | (0x40000033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
              | (0x00007033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
             | (0x00006033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
            | (0x00004033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
           | (0x00001033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
          | (0x00005033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
         | (0x40005033U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = (
                                                   (0x00000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                    ? 
                                                   (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                    + vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                     ? 
                                                    (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                     - vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                     : 
                                                    ((0x00007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                      ? 
                                                     (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                      & vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                      : 
                                                     ((0x00006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                       ? 
                                                      (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                       | vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                       : 
                                                      ((0x00004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                        ? 
                                                       (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                        ^ vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                        : 
                                                       ((0x00001033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                         ? (IData)(
                                                                   (0x7fffffffffffffffULL 
                                                                    & ((QData)((IData)(vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1)) 
                                                                       << 
                                                                       (0x0000001fU 
                                                                        & vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2))))
                                                         : 
                                                        ((0x00005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.top__DOT__encode_1__DOT__code))
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
                                       & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                      | (0x00003033U == (0xfe00707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (0x00000013U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                    | (0x00004013U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                   | (0x00006013U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                  | (0x00007013U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                 | (0x00001013U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                | (0x00005013U == (0xfe00707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = (
                                                   (0x00002033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                    ? (IData)(vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_18)
                                                    : 
                                                   ((0x00003033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                     ? 
                                                    (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                     < vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2)
                                                     : 
                                                    ((0x00000013U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                      ? vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_22
                                                      : 
                                                     ((0x00004013U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                       ? 
                                                      (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                       ^ vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                       : 
                                                      ((0x00006013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                        ? 
                                                       (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                        | vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                        : 
                                                       ((0x00007013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                         ? 
                                                        (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                         & vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                         : 
                                                        ((0x00001013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                          ? (IData)(
                                                                    (0x7fffffffffffffffULL 
                                                                     & ((QData)((IData)(vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1)) 
                                                                        << 
                                                                        (0x0000001fU 
                                                                         & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                                            >> 0x00000014U)))))
                                                          : 
                                                         (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                          >> 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                              >> 0x00000014U))))))))));
    } else if (((((((((0x40005013U == (0xfe00707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                      | (0x00002013U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (0x00003013U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                    | (3U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                   | (0x00001003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                  | (0x00002003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                 | (0x00004003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                | (0x00005003U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1, 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                                      >> 0x00000014U)))
                                                    : 
                                                   ((0x00002013U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                     ? 
                                                    VL_LTS_III(32, vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1, vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                     : 
                                                    ((0x00003013U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                      ? 
                                                     (vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1 
                                                      < vlSelfRef.top__DOT__encode_1__DOT__imm_I)
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_37 
                                                                       >> 7U)))) 
                                                        << 8U) 
                                                       | (0x000000ffU 
                                                          & vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_37))
                                                       : 
                                                      ((0x00001003U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_37 
                                                                        >> 0x0000000fU)))) 
                                                         << 0x00000010U) 
                                                        | (0x0000ffffU 
                                                           & vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_37))
                                                        : 
                                                       ((0x00002003U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                         ? vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data
                                                         : 
                                                        ((0x00004003U 
                                                          == 
                                                          (0x0000707fU 
                                                           & vlSelfRef.top__DOT__encode_1__DOT__code))
                                                          ? 
                                                         (0x000000ffU 
                                                          & vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_37)
                                                          : 
                                                         (0x0000ffffU 
                                                          & vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_37))))))));
    } else if (((((((((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                      | (0x00002023U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (0x00001023U == (0x0000707fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                    | (0x00000023U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                   | (0x00000063U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                  | (0x00001063U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                 | (0x00004063U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                | (0x00005063U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
        if ((0x00000067U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
            vlSelfRef.top__DOT__encode_1_com_grp_rd 
                = ((IData)(4U) + vlSelfRef.top__DOT__encode_1__DOT__pc_pc);
        }
    } else if (((((((((0x00006063U == (0x0000707fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code)) 
                      | (0x00007063U == (0x0000707fU 
                                         & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                     | (0x00000037U == (0x0000007fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                    | (0x00000017U == (0x0000007fU 
                                       & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                   | (0x0000006fU == (0x0000007fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                  | (0x00001073U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                 | (0x00002073U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) 
                | (0x00003073U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code)))) {
        if ((0x00006063U != (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
            if ((0x00007063U != (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
                vlSelfRef.top__DOT__encode_1_com_grp_rd 
                    = ((0x00000037U == (0x0000007fU 
                                        & vlSelfRef.top__DOT__encode_1__DOT__code))
                        ? (0xfffff000U & vlSelfRef.top__DOT__encode_1__DOT__code)
                        : ((0x00000017U == (0x0000007fU 
                                            & vlSelfRef.top__DOT__encode_1__DOT__code))
                            ? (vlSelfRef.top__DOT__encode_1__DOT__pc_pc 
                               + (0xfffff000U & vlSelfRef.top__DOT__encode_1__DOT__code))
                            : ((0x0000006fU == (0x0000007fU 
                                                & vlSelfRef.top__DOT__encode_1__DOT__code))
                                ? ((IData)(4U) + vlSelfRef.top__DOT__encode_1__DOT__pc_pc)
                                : vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data)));
            }
        }
    } else if ((0x00005073U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data;
    } else if ((0x00006073U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data;
    } else if ((0x00007073U == (0x0000707fU & vlSelfRef.top__DOT__encode_1__DOT__code))) {
        vlSelfRef.top__DOT__encode_1_com_grp_rd = vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data;
    }
    vlSelfRef.top__DOT__uart__DOT__slaveFactory_readRsp_data = 0U;
    if ((0x10000000U == (0xfffffffcU & vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rData_addr))) {
        vlSelfRef.top__DOT__uart__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.top__DOT__uart__DOT__uart_reg;
        vlSelfRef.top__DOT__uart__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.top__DOT__uart__DOT__uart_reg;
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_h457eefa7_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hba7fe287_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hd0bd9749_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hae0125a9_0;

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
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
    if (vlSelfRef.rst) {
        if (vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__wen) {
            vlSelfRef.top__DOT__aximem_1_axi4lite_aw_ready = 0U;
        } else if (vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid) {
            vlSelfRef.top__DOT__aximem_1_axi4lite_aw_ready = 1U;
        }
        if (vlSelfRef.top__DOT__ctrl__DOT__u_vaild_1) {
            vlSelfRef.top__DOT__encode_1__DOT__pc_pc 
                = vlSelfRef.top__DOT__pc_1__DOT__PC_cnt;
            vlSelfRef.top__DOT__encode_1__DOT__code 
                = ((1U & ((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))
                    ? vlSelfRef.top__DOT__aximem_1__DOT__mem_r_data
                    : 0U);
        }
    } else {
        vlSelfRef.top__DOT__aximem_1_axi4lite_aw_ready = 0U;
        vlSelfRef.top__DOT__encode_1__DOT__pc_pc = 0x80000000U;
        vlSelfRef.top__DOT__encode_1__DOT__code = 0x00000013U;
    }
    __Vtableidx3 = (((IData)(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire) 
                     << 2U) | (((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid) 
                                << 1U) | (IData)(vlSelfRef.rst)));
    if ((1U & Vtop__ConstPool__TABLE_h457eefa7_0[__Vtableidx3])) {
        vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid 
            = Vtop__ConstPool__TABLE_hba7fe287_0[__Vtableidx3];
    }
    if ((2U & Vtop__ConstPool__TABLE_h457eefa7_0[__Vtableidx3])) {
        vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rValid 
            = Vtop__ConstPool__TABLE_hd0bd9749_0[__Vtableidx3];
    }
    vlSelfRef.top__DOT__encode_1__DOT__ErrorReg = 0U;
    vlSelfRef.top__DOT__encode_1_com_csr_vaild = 0U;
    vlSelfRef.top__DOT__encode_1__DOT__ebreak = 0U;
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
    vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild = 0U;
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
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_top__DOT__aximem_1__DOT__mem__DOT__mem_r__42__Vfuncout;
    __Vfunc_top__DOT__aximem_1__DOT__mem__DOT__mem_r__42__Vfuncout = 0;
    // Body
    if (vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__ren) {
        Vtop___024root____Vdpiimwrap_top__DOT__aximem_1__DOT__mem__DOT__mem_r_TOP(
                                                                                ((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
                                                                                 ? vlSelfRef.top__DOT__encode_1_axi4lite_ar_payload_addr
                                                                                 : vlSelfRef.top__DOT__pc_1__DOT__PC_cnt), 4U, __Vfunc_top__DOT__aximem_1__DOT__mem__DOT__mem_r__42__Vfuncout);
        vlSelfRef.top__DOT__aximem_1__DOT__mem_r_data 
            = __Vfunc_top__DOT__aximem_1__DOT__mem__DOT__mem_r__42__Vfuncout;
    }
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__encode_1_axi4lite_ar_payload_addr = 0U;
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
    vlSelfRef.top__DOT__pc_1__DOT__PC_cnt = vlSelfRef.__Vdly__top__DOT__pc_1__DOT__PC_cnt;
    vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel = ((IData)(vlSelfRef.rst) 
                                                   && (IData)(vlSelfRef.top__DOT__ctrl_r_sel));
    vlSelfRef.top__DOT__ctrl_r_sel = 0U;
    if ((4U & (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))) {
                if (vlSelfRef.top__DOT__encode_1_axi4lite_r_ready) {
                    vlSelfRef.top__DOT__ctrl_r_sel = 1U;
                }
            }
        }
    }
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid 
        = ((IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
              >> 1U));
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid 
        = (((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
           & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid));
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__pc_1__DOT__axi4lite_ar_fire 
        = ((((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
            & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready)) 
           & (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_ar_valid));
    vlSelfRef.top__DOT__aximem_1__DOT__axi4lite_r_fire 
        = (((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
             ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready)
             : (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_r_ready)) 
           & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid));
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data 
        = ((2U & ((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))
            ? vlSelfRef.top__DOT__aximem_1__DOT__mem_r_data
            : 0U);
    vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid 
        = ((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
            ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready)
            : (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_ar_valid));
    vlSelfRef.top__DOT__pc_1__DOT__axi4lite_r_fire 
        = ((IData)(vlSelfRef.top__DOT__pc_1_axi4lite_r_ready) 
           & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid));
    vlSelfRef.top__DOT__ctrl__DOT__s_wantStart = 0U;
    vlSelfRef.top__DOT__ctrl__DOT__s_stateNext = vlSelfRef.top__DOT__ctrl__DOT__s_stateReg;
    if ((4U & (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg))) {
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
    vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_37 
        = (vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data 
           >> (0x00000018U & (vlSelfRef.top__DOT__encode_1__DOT___zz_com_grp_rd_22 
                              << 3U)));
    vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__ren 
        = ((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid) 
           & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready));
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
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
