// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern "C" void debug(int addr, int data);

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(IData/*31:0*/ addr, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    debug(addr__Vcvt, data__Vcvt);
}

extern "C" void ebreak(int test);

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP\n"); );
    // Body
    int test__Vcvt;
    test__Vcvt = test;
    ebreak(test__Vcvt);
}

extern "C" void mem_w(int data, int addr, int len);

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_w_TOP(IData/*31:0*/ data, IData/*31:0*/ addr, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_w_TOP\n"); );
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

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_r_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &mem_r__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_r_TOP\n"); );
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

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__uart__DOT__mmio__DOT__mmio_w_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__uart__DOT__mmio__DOT__mmio_w_TOP\n"); );
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

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__uart__DOT__mmio__DOT__mmio_r_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &mmio_r__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__uart__DOT__mmio__DOT__mmio_r_TOP\n"); );
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

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__ctrl__DOT__step_fun_1__DOT__SimStep1_TOP(IData/*31:0*/ step_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__ctrl__DOT__step_fun_1__DOT__SimStep1_TOP\n"); );
    // Body
    int step_data__Vcvt;
    step_data__Vcvt = step_data;
    SimStep1(step_data__Vcvt);
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
                                                    ((IData)(vlSelfRef.clock) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
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

extern const VlUnpacked<IData/*31:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h30ab60d4_0;
extern const VlUnpacked<CData/*1:0*/, 32> VysyxSoCFull__ConstPool__TABLE_hd023cda9_0;
extern const VlUnpacked<CData/*0:0*/, 32> VysyxSoCFull__ConstPool__TABLE_h68b19cab_0;
extern const VlUnpacked<CData/*0:0*/, 32> VysyxSoCFull__ConstPool__TABLE_h5008ca46_0;
extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h4ade42b4_0;
extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_hae0125a9_0;

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_r__42__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_r__42__Vfuncout = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__pc_1__DOT__PC_cnt;
    __Vdly__ysyxSoCFull__DOT__pc_1__DOT__PC_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__pc_1__DOT__npc_flag;
    __Vdly__ysyxSoCFull__DOT__pc_1__DOT__npc_flag = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__pc_1__DOT__flag;
    __Vdly__ysyxSoCFull__DOT__pc_1__DOT__flag = 0;
    // Body
    if (vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__step_fun_1__DOT__step) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__ctrl__DOT__step_fun_1__DOT__SimStep1_TOP(1U);
    }
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000020U, vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000021U, 
                                                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild)
                                                                                 ? vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC
                                                                                 : vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt));
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000022U, vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__code_reg);
    __Vdly__ysyxSoCFull__DOT__pc_1__DOT__flag = vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__flag;
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000027U, (IData)(vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle));
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000028U, (IData)(
                                                                                (vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle 
                                                                                >> 0x00000020U)));
    __Vdly__ysyxSoCFull__DOT__pc_1__DOT__PC_cnt = vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt;
    __Vdly__ysyxSoCFull__DOT__pc_1__DOT__npc_flag = vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__npc_flag;
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__uart__DOT__mmio__DOT__mmio_w_TOP(
                                                                                ((2U 
                                                                                & ((IData)(1U) 
                                                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                                                                 ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr
                                                                                 : 0U), vlSelfRef.ysyxSoCFull__DOT__uart__DOT__mmio__DOT__w_data, 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__mmio_w_len)));
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__uart__DOT__mmio__DOT__mmio_w_TOP(
                                                                                ((8U 
                                                                                & ((IData)(1U) 
                                                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                                                                 ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr
                                                                                 : 0U), vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data, 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio_w_len)));
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_w_TOP(
                                                                                ((1U 
                                                                                & ((IData)(1U) 
                                                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                                                                 ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data
                                                                                 : 0U), 
                                                                                ((1U 
                                                                                & ((IData)(1U) 
                                                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                                                                 ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr
                                                                                 : 0U), 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_w_len)));
    }
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000024U, vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcause);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000025U, vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mstatus);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000023U, vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mtvec);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000026U, vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mepc);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_0);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(1U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_1);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(2U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_2);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(3U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_3);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(4U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_4);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(5U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_5);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(6U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_6);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(7U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_7);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(8U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_8);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(9U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_9);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000aU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_10);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000bU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_11);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000cU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_12);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000dU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_13);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000eU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_14);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000000fU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_15);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000010U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_16);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000011U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_17);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000012U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_18);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000013U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_19);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000014U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_20);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000015U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_21);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000016U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_22);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000017U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_23);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000018U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_24);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x00000019U, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_25);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001aU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_26);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001bU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_27);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001cU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_28);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001dU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_29);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001eU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_30);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__pc_1__DOT__debug__DOT__debug_fun_1__DOT__debug_TOP(0x0000001fU, vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_31);
    if (vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__axi4lite_ar_fire) {
        vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_ar_valid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_r_ready = 1U;
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl_u_vaild_0) 
                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__flag)))) {
        vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_ar_valid = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT___zz_1 = 
        ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid));
    if (vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__finish) {
        vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_r_ready = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rValid)))) {
        vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rData_prot 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1_AxiOut_2_ar_payload_prot;
        vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rData_addr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rValid)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rData_prot 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1_AxiOut_1_ar_payload_prot;
        vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rData_addr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rValid)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_prot 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1_AxiOut_3_ar_payload_prot;
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_addr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))) {
        vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp = 0U;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__clint__DOT__mtime = 0ULL;
        __Vdly__ysyxSoCFull__DOT__pc_1__DOT__flag = 0U;
        __Vdly__ysyxSoCFull__DOT__pc_1__DOT__PC_cnt = 0x80000000U;
        __Vdly__ysyxSoCFull__DOT__pc_1__DOT__npc_flag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready = 0U;
        vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__clint__DOT__mtime 
            = (1ULL + vlSelfRef.ysyxSoCFull__DOT__clint__DOT__mtime);
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__axi4lite_ar_fire)))) {
            if (((IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl_u_vaild_0) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__flag)))) {
                __Vdly__ysyxSoCFull__DOT__pc_1__DOT__flag = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl_u_vaild_0)))) {
            __Vdly__ysyxSoCFull__DOT__pc_1__DOT__flag = 0U;
            __Vdly__ysyxSoCFull__DOT__pc_1__DOT__npc_flag = 0U;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__finish) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl_u_vaild_0))) {
            __Vdly__ysyxSoCFull__DOT__pc_1__DOT__PC_cnt 
                = ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt);
        } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__npc_flag)))) {
            __Vdly__ysyxSoCFull__DOT__pc_1__DOT__PC_cnt 
                = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC;
            __Vdly__ysyxSoCFull__DOT__pc_1__DOT__npc_flag = 1U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_b_fire) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid = 0U;
        } else if (vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid = 1U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_w_fire) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready = 0U;
        } else if (vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready = 1U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_r_fire) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid = 0U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid = 1U;
        }
        vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg 
            = vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid))) {
            vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag = 1U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__axi4lite_b_fire) {
            vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag = 0U;
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_r_TOP(
                                                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)
                                                                                 ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_payload_addr
                                                                                 : vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt), 4U, __Vfunc_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_r__42__Vfuncout);
        vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_r_data 
            = __Vfunc_ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__mem_r__42__Vfuncout;
    }
    if ((0x10000000U == ((2U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                          ? (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr)
                          : 0U))) {
        if (vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready) {
            vlSelfRef.ysyxSoCFull__DOT__uart__DOT__uart_reg 
                = vlSelfRef.ysyxSoCFull__DOT__uart__DOT__mmio__DOT__w_data;
            vlSelfRef.ysyxSoCFull__DOT__uart__DOT__uart_reg 
                = vlSelfRef.ysyxSoCFull__DOT__uart__DOT__mmio__DOT__w_data;
        }
    }
    if ((0x10000000U == ((8U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                          ? (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr)
                          : 0U))) {
        if (vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready) {
            vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__uart_reg 
                = vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data;
            vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__uart_reg 
                = vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd_vaild = 1U;
    vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__npc_flag 
        = __Vdly__ysyxSoCFull__DOT__pc_1__DOT__npc_flag;
    vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__flag = __Vdly__ysyxSoCFull__DOT__pc_1__DOT__flag;
    vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_readRsp_data = 0U;
    if ((0x1100bff8U == (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rData_addr))) {
        vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__clint__DOT___zz_slaveFactory_readRsp_data;
        vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__clint__DOT___zz_slaveFactory_readRsp_data;
    }
    vlSelfRef.ysyxSoCFull__DOT__ctrl_u_vaild_0 = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg))) {
                vlSelfRef.ysyxSoCFull__DOT__ctrl_u_vaild_0 = 1U;
            }
        }
    }
    vlSelfRef.__Vtableidx7 = vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg_string 
        = VysyxSoCFull__ConstPool__TABLE_h30ab60d4_0
        [vlSelfRef.__Vtableidx7];
    __Vtableidx3 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire) 
                     << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid) 
                                << 1U) | (IData)(vlSelfRef.reset)));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_hd023cda9_0
         [__Vtableidx3])) {
        vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid 
            = VysyxSoCFull__ConstPool__TABLE_h68b19cab_0
            [__Vtableidx3];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_hd023cda9_0
         [__Vtableidx3])) {
        vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rValid 
            = VysyxSoCFull__ConstPool__TABLE_h5008ca46_0
            [__Vtableidx3];
    }
    __Vtableidx6 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire) 
                     << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid) 
                                << 1U) | (IData)(vlSelfRef.reset)));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_hd023cda9_0
         [__Vtableidx6])) {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid 
            = VysyxSoCFull__ConstPool__TABLE_h68b19cab_0
            [__Vtableidx6];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_hd023cda9_0
         [__Vtableidx6])) {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rValid 
            = VysyxSoCFull__ConstPool__TABLE_h5008ca46_0
            [__Vtableidx6];
    }
    vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_readRsp_data = 0U;
    if ((0x10000000U == (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rData_addr))) {
        vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__uart__DOT__uart_reg;
        vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__uart__DOT__uart_reg;
    }
    vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data = 0U;
    if ((0x10000000U == (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_addr))) {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__uart_reg;
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data 
            = vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__uart_reg;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__step_fun_1__DOT__step) {
            vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag = 1U;
            vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag = 1U;
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid)) 
             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag = 0U;
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_valid)) 
             & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)) 
                >> 1U))) {
            vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag = 0U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl_r_sel));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__code_reg = 0U;
        vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle = 0ULL;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__finish) {
            vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__code_reg 
                = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_0_r_payload_data;
        }
        vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle 
            = vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT___zz_mcycle;
    }
    vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT___zz_mcycle 
        = (1ULL + vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle);
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready = 0U;
        vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcause = 0x0000000bU;
        vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mstatus = 0x00001800U;
        vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mtvec = 0x80000000U;
        vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mepc = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_2 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_3 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_4 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_5 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_6 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_7 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_8 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_9 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_10 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_11 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_12 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_13 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_14 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_15 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_16 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_17 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_18 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_19 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_20 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_21 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_22 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_23 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_24 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_25 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_26 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_27 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_28 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_29 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_30 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_31 = 0U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__wen) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready = 0U;
        } else if (vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_ecall)))) {
            if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_mret)))) {
                if (vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_vaild) {
                    if ((0x0300U != (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                     >> 0x00000014U))) {
                        if ((0x0305U != (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                         >> 0x00000014U))) {
                            if ((0x0342U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                             >> 0x00000014U))) {
                                vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcause 
                                    = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data;
                            }
                        }
                        if ((0x0305U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                         >> 0x00000014U))) {
                            vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mtvec 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data;
                        }
                    }
                    if ((0x0300U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                     >> 0x00000014U))) {
                        vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mstatus 
                            = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data;
                    }
                }
            }
        }
        if (vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_ecall) {
            vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mepc 
                = (vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt 
                   - (IData)(4U));
        } else if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_mret)))) {
            if (vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_vaild) {
                if ((0x0300U != (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                 >> 0x00000014U))) {
                    if ((0x0305U != (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                     >> 0x00000014U))) {
                        if ((0x0342U != (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                         >> 0x00000014U))) {
                            if ((0x0341U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                             >> 0x00000014U))) {
                                vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mepc 
                                    = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data;
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__rd_vaild) {
            if ((0U != (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                       >> 7U)))) {
                if ((1U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_0 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((2U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_1 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((4U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_2 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((8U & ((IData)(1U) << (0x0000001fU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                              >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_3 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000010U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_4 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000020U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_5 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000040U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_6 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000080U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_7 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000100U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_8 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000200U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_9 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000400U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_10 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00000800U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_11 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00001000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_12 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00002000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_13 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00004000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_14 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00008000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_15 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00010000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_16 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00020000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_17 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00040000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_18 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00080000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_19 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00100000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_20 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00200000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_21 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00400000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_22 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x00800000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_23 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x01000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_24 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x02000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_25 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x04000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_26 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x08000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_27 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x10000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_28 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x20000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_29 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((0x40000000U & ((IData)(1U) << 
                                    (0x0000001fU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                      >> 7U))))) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_30 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
                if ((((IData)(1U) << (0x0000001fU & 
                                      (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                       >> 7U))) >> 0x1fU)) {
                    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_31 
                        = vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd;
                }
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd = 0U;
    if (((((((((0x00000033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
               | (0x40000033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
              | (0x00007033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
             | (0x00006033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
            | (0x00004033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
           | (0x00001033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
          | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
         | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd 
            = ((0x00000033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                   + vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)
                : ((0x40000033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                    ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                       - vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)
                    : ((0x00007033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                        ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)
                        : ((0x00006033U == (0xfe00707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                            ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                               | vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)
                            : ((0x00004033U == (0xfe00707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                                   ^ vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)
                                : ((0x00001033U == 
                                    (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                    ? (IData)((0x7fffffffffffffffULL 
                                               & ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1)) 
                                                  << 
                                                  (0x0000001fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2))))
                                    : ((0x00005033U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                        ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                                           >> (0x0000001fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2))
                                        : VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1, 
                                                         (0x0000001fU 
                                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)))))))));
    } else if (((((((((0x00002033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                      | (0x00003033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00000013U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                    | (0x00004013U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                   | (0x00006013U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                  | (0x00007013U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                 | (0x00001013U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                | (0x00005013U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd 
            = ((0x00002033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_grp_rd_24)
                : ((0x00003033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                    ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                       < vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)
                    : ((0x00000013U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                        ? vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_grp_rd_28
                        : ((0x00004013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                            ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                               ^ vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_I)
                            : ((0x00006013U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                                   | vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_I)
                                : ((0x00007013U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                    ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_I)
                                    : ((0x00001013U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                        ? (IData)((0x7fffffffffffffffULL 
                                                   & ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1)) 
                                                      << 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                          >> 0x00000014U)))))
                                        : (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                                           >> (0x0000001fU 
                                               & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                  >> 0x00000014U))))))))));
    } else if (((((((((0x40005013U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                      | (0x00002013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00003013U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                    | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                   | (0x00001003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                  | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                 | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd 
            = ((0x40005013U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1, 
                                 (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                 >> 0x00000014U)))
                : ((0x00002013U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                    ? VL_LTS_III(32, vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1, vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_I)
                    : ((0x00003013U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                        ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                           < vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_I)
                        : ((3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                            ? (((- (IData)((1U & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2 
                                                  >> 7U)))) 
                                << 8U) | (0x000000ffU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2))
                            : ((0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2 
                                                   >> 0x0000000fU)))) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2))
                                : ((0x00002003U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                    ? vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data
                                    : ((0x00004003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                        ? (0x000000ffU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2)
                                        : (0x0000ffffU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2))))))));
    } else if (((((((((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                      | (0x00002023U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00001023U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                    | (0x00000023U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                   | (0x00000063U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                  | (0x00001063U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                 | (0x00004063U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                | (0x00005063U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
        if ((0x00000067U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
            vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd 
                = ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__pc_pc);
        }
    } else if (((((((((0x00006063U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                      | (0x00007063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00000037U == (0x0000007fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                    | (0x00000017U == (0x0000007fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                   | (0x0000006fU == (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                  | (0x00001073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                 | (0x00002073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                | (0x00003073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
        if ((0x00006063U != (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
            if ((0x00007063U != (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd 
                    = ((0x00000037U == (0x0000007fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                        ? (0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                        : ((0x00000017U == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                            ? (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__pc_pc 
                               + (0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                            : ((0x0000006fU == (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                ? ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__pc_pc)
                                : vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data)));
            }
        }
    } else if ((0x00005073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd 
            = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data;
    } else if ((0x00006073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd 
            = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data;
    } else if ((0x00007073U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd 
            = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rValid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready = 0U;
        vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__pc_pc = 0x80000000U;
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid) {
            vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid = 1U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire) {
            vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid = 0U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready = 0U;
        } else if (vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid) {
            vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready = 1U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__step_fun_1__DOT__step) {
            vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__pc_pc 
                = vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt;
        }
    }
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd_vaild = 0U;
                    }
                } else if (((((((((0x00006063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                                  | (0x00007063U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                 | (0x00000037U == 
                                    (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                | (0x00000017U == (0x0000007fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                               | (0x0000006fU == (0x0000007fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                              | (0x00001073U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                             | (0x00002073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                            | (0x00003073U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
                    if ((0x00006063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd_vaild = 0U;
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd_vaild = 0U;
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            if ((0x00100073U != vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                if ((0x00000073U == vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd_vaild = 0U;
                                } else if ((0x30200073U 
                                            == vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd_vaild = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code = 0x00000013U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__step_fun_1__DOT__step) {
        vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_0_r_payload_data;
    }
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__axi4lite_ar_fire 
        = ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_ar_valid));
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data 
        = ((2U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)))
            ? vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_r_data
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid 
        = (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__finish = 
        ((IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_r_ready) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt = __Vdly__ysyxSoCFull__DOT__pc_1__DOT__PC_cnt;
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_0_r_payload_data 
        = ((1U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)))
            ? vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_r_data
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_vaild = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1_ar_size = 0x0fU;
    vlSelfRef.ysyxSoCFull__DOT__encode_1_fence_i = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__ErrorReg = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__ebreak = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data 
        = ((((0x0b00U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                          >> 0x00000014U)) | (0x0b80U 
                                              == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                  >> 0x00000014U))) 
            | (((0x0300U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                             >> 0x00000014U)) | (0x0305U 
                                                 == 
                                                 (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                  >> 0x00000014U))) 
               | ((0x0342U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                               >> 0x00000014U)) | (
                                                   (0x0341U 
                                                    == 
                                                    (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                     >> 0x00000014U)) 
                                                   | ((0x0f11U 
                                                       == 
                                                       (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                        >> 0x00000014U)) 
                                                      | (0x0f12U 
                                                         == 
                                                         (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                          >> 0x00000014U)))))))
            ? ((0x0b00U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                            >> 0x00000014U)) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle)
                : ((0x0b80U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                >> 0x00000014U)) ? (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle 
                                                            >> 0x00000020U))
                    : ((0x0300U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                    >> 0x00000014U))
                        ? vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mstatus
                        : ((0x0305U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                        >> 0x00000014U))
                            ? vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mtvec
                            : ((0x0342U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                            >> 0x00000014U))
                                ? vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcause
                                : ((0x0341U == (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                >> 0x00000014U))
                                    ? vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mepc
                                    : ((0x0f11U == 
                                        (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                         >> 0x00000014U))
                                        ? 0x79737978U
                                        : 0x018ce19aU)))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_pc_nPC_1 
        = (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__pc_pc 
           + (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                           >> 0x0000001fU))) << 0x0000000dU) 
              | ((((2U & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                          >> 0x0000001eU)) | (1U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                               >> 7U))) 
                  << 0x0000000bU) | ((0x000007e0U & 
                                      (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                           >> 7U))))));
    vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_mret = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_ecall = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_I 
        = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
              >> 0x00000014U));
    vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_valid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2 
        = ((0U == (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                  >> 0x00000014U)))
            ? 0U : ((0x01000000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                     ? ((0x00800000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                         ? ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                             ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_30)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_28))
                             : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_26)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_24)))
                         : ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                             ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_22)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_20))
                             : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_18)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_16))))
                     : ((0x00800000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                         ? ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                             ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_14)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_12))
                             : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_10)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_8)))
                         : ((0x00400000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                             ? ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_6)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_4))
                             : ((0x00200000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_2)
                                 : ((0x00100000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_0))))));
    vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_S 
        = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000fe0U & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                              >> 0x00000014U)) | (0x0000001fU 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                     >> 7U))));
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
        = ((0U == (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                  >> 0x0000000fU)))
            ? 0U : ((0x00080000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                     ? ((0x00040000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                         ? ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                             ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_30)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_28))
                             : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_26)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_24)))
                         : ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                             ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_22)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_20))
                             : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_18)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_16))))
                     : ((0x00040000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                         ? ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                             ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_14)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_12))
                             : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_10)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_8)))
                         : ((0x00020000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                             ? ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_6)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_4))
                             : ((0x00010000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_2)
                                 : ((0x00008000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)
                                     ? vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_0))))));
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                            vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_vaild = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_vaild = 1U;
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_vaild = 1U;
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_vaild = 1U;
                    }
                    if ((1U & (~ ((((((((0x00006063U 
                                         == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                                        | (0x00007063U 
                                           == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                       | (0x00000037U 
                                          == (0x0000007fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                      | (0x00000017U 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                     | (0x0000006fU 
                                        == (0x0000007fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                    | (0x00001073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                   | (0x00002073U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                  | (0x00003073U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
                        if ((0x00005073U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            if ((0x00006073U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                if ((0x00007073U != 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                    if ((0x00100073U 
                                         != vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                        if ((0x00000073U 
                                             != vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                            if ((0x30200073U 
                                                 != vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                                if (
                                                    (0x0000100fU 
                                                     == vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                                    vlSelfRef.ysyxSoCFull__DOT__encode_1_fence_i = 1U;
                                                }
                                                if (
                                                    (0x0000100fU 
                                                     != vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                                    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__ErrorReg = 1U;
                                                }
                                            }
                                            if ((0x30200073U 
                                                 == vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                                vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_mret = 1U;
                                            }
                                        }
                                        if ((0x00000073U 
                                             == vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                            vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_ecall = 1U;
                                        }
                                    }
                                    if ((0x00100073U 
                                         == vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                        vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__ebreak = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag;
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag;
                        }
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            if ((3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_ar_size = 1U;
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag)));
                            } else if ((0x00001003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_ar_size = 3U;
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag)));
                            } else if ((0x00002003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_ar_size = 0x0fU;
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag)));
                            } else if ((0x00004003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_ar_size = 1U;
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag)));
                            } else {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_ar_size = 3U;
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag)));
                            }
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_valid 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag;
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__ebreak) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__encode_1__DOT__ebreak_module__DOT__ebreak_TOP(1U);
    }
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_r_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready)
             : (IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_r_ready)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid));
    vlSelfRef.ysyxSoCFull__DOT__csr_1_com_encode_r_pc = 0U;
    if (vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_ecall) {
        vlSelfRef.ysyxSoCFull__DOT__csr_1_com_encode_r_pc 
            = vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mtvec;
    } else if (vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_mret) {
        vlSelfRef.ysyxSoCFull__DOT__csr_1_com_encode_r_pc 
            = vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mepc;
    }
    vlSelfRef.ysyxSoCFull__DOT__ctrl_r_sel = 0U;
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_valid)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_ar_valid));
    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT____VdfgExtracted_hf015dc25__0 
        = VL_LTES_III(32, vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2, vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1);
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_grp_rd_24 
        = VL_LTS_III(32, vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1, vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2);
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_grp_rd_28 
        = (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
           + vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_I);
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr 
        = (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
           + vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_S);
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready));
    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_payload_addr = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz___05Fzz_com_grp_rd_1_2 
        = (vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data 
           >> (0x00000018U & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_grp_rd_28 
                              << 3U)));
    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb = 0U;
    vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr = 0U;
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))))) {
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                            vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data 
                                                = (
                                                   (0x00001073U 
                                                    == 
                                                    (0x0000707fU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1
                                                    : 
                                                   ((0x00002073U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                                                     | vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data)
                                                     : 
                                                    (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data 
                                                     & (~ vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1))));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data 
                            = (0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                              >> 0x0000000fU));
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data 
                            = ((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                               >> 0x0000000fU)) 
                               | vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data);
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data 
                            = (0x0000001fU & ((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                               >> 0x0000000fU) 
                                              & (~ vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data)));
                    }
                }
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
                    if ((0x00000067U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                            = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_grp_rd_28;
                    } else if ((0x00002023U != (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((0x00001023U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            if ((0x00000023U != (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                if ((0x00000063U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                    if ((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                                         == vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)) {
                                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00001063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                    if ((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                                         != vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)) {
                                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if ((0x00004063U 
                                            == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                    if (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_grp_rd_24) {
                                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                        vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                                            = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                    }
                                } else if (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT____VdfgExtracted_hf015dc25__0) {
                                    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                                }
                            }
                        }
                    }
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2;
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb = 0x0fU;
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr 
                                = (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                                   + vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_S);
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            if ((0U == (3U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data 
                                    = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2;
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb = 3U;
                            } else if ((2U == (3U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data 
                                    = (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2 
                                       << 0x10U);
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb = 0x0cU;
                            } else {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data 
                                    = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2;
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb = 3U;
                            }
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data 
                                = VL_SHIFTL_III(32,32,6, vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2, 
                                                (0x0000003fU 
                                                 & VL_SHIFTL_III(6,6,32, 
                                                                 (3U 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr), 3U)));
                            if ((0U == (3U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb = 1U;
                            } else if ((1U == (3U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb = 2U;
                            } else if ((2U == (3U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb = 4U;
                            } else if ((3U == (3U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb = 8U;
                            }
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr;
                        }
                    }
                } else if (((((((((0x00006063U == (0x0000707fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                                  | (0x00007063U == 
                                     (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                 | (0x00000037U == 
                                    (0x0000007fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                                | (0x00000017U == (0x0000007fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                               | (0x0000006fU == (0x0000007fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                              | (0x00001073U == (0x0000707fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                             | (0x00002073U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                            | (0x00003073U == (0x0000707fU 
                                               & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
                    if ((0x00006063U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1 
                             < vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2)) {
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00007063U == (0x0000707fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2 
                             <= vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1)) {
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_pc_nPC_1;
                        }
                    } else if ((0x00000037U != (0x0000007fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((0x00000017U != (0x0000007fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            if ((0x0000006fU == (0x0000007fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                                    = (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__pc_pc 
                                       + ((((0x00000ffeU 
                                             & ((- (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                            >> 0x0000001fU))) 
                                                << 1U)) 
                                            | (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                               >> 0x0000001fU)) 
                                           << 0x00000014U) 
                                          | ((((0x000001feU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                     >> 0x00000014U))) 
                                              << 0x0000000bU) 
                                             | (0x000007feU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                   >> 0x00000014U)))));
                            }
                        }
                    }
                } else if ((0x00005073U != (0x0000707fU 
                                            & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                    if ((0x00006073U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((0x00007073U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            if ((0x00100073U != vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                if ((0x00000073U == vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.ysyxSoCFull__DOT__csr_1_com_encode_r_pc;
                                } else if ((0x30200073U 
                                            == vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) {
                                    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild = 1U;
                                    vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC 
                                        = vlSelfRef.ysyxSoCFull__DOT__csr_1_com_encode_r_pc;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code))) {
                            vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_payload_addr 
                                = vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT___zz_com_grp_rd_28;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel 
        = (((0x80000000U <= vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr) 
            & (0x80ffffffU > vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr))
            ? 0U : (((0x10000000U <= vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr) 
                     & (0x1000ffffU > vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr))
                     ? 1U : (((0x11000000U <= vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr) 
                              & (0x1100ffffU > vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr))
                              ? 2U : 3U)));
    if ((2U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart__DOT__mmio__DOT__w_data 
            = vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data;
        vlSelfRef.__Vtableidx2 = vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__uart__DOT__mmio__DOT__w_data = 0U;
        vlSelfRef.__Vtableidx2 = 0U;
    }
    if ((8U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data 
            = vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data;
        vlSelfRef.__Vtableidx5 = vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data = 0U;
        vlSelfRef.__Vtableidx5 = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_b_fire 
        = ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid));
    vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
              >> 3U));
    vlSelfRef.__Vtableidx1 = ((1U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb)
                               : 0U);
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_w_len 
        = VysyxSoCFull__ConstPool__TABLE_h4ade42b4_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyxSoCFull__DOT__uart__DOT__mmio_w_len 
        = VysyxSoCFull__ConstPool__TABLE_hae0125a9_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.__Vtableidx4 = ((4U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb)
                               : 0U);
    vlSelfRef.ysyxSoCFull__DOT__clint__DOT__mmio_w_len 
        = VysyxSoCFull__ConstPool__TABLE_hae0125a9_0
        [vlSelfRef.__Vtableidx4];
    vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio_w_len 
        = VysyxSoCFull__ConstPool__TABLE_hae0125a9_0
        [vlSelfRef.__Vtableidx5];
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid 
        = (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid));
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
              >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid)
            : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel))
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel))
                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)
                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid))));
    vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__axi4lite_b_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag));
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__wen 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_w_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid));
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel))) {
        vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready;
    } else if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel))) {
        vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready;
    } else if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel))) {
        vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready;
    }
    vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_wantStart = 0U;
    vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext 
        = vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg;
    if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg))) {
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))) {
                if (((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_valid) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready))) {
                    vlSelfRef.ysyxSoCFull__DOT__ctrl_r_sel = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg))) {
            vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_wantStart = 1U;
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg))) {
            vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext = 1U;
        } else if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT___zz_1))) {
            vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg))) {
        vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext 
            = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg))
                ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid))
                    ? 5U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_valid) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid))
                             ? 4U : 5U)) : 3U);
    } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg))) {
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_r_ready) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid))) {
            vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext = 2U;
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_wantStart = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_wantStart) {
        vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__step_fun_1__DOT__step 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
           & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)));
    vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__rd_vaild 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd_vaild) 
           & ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
              & (5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg))));
    vlSelfRef.__Vtableidx8 = vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext;
    vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext_string 
        = VysyxSoCFull__ConstPool__TABLE_h30ab60d4_0
        [vlSelfRef.__Vtableidx8];
}

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void VysyxSoCFull___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VysyxSoCFull___024root___eval_phase__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull___024root___eval_triggers__act(vlSelf);
    VysyxSoCFull___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VysyxSoCFull___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VysyxSoCFull___024root___eval_phase__nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VysyxSoCFull___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VysyxSoCFull___024root___eval_nba(vlSelf);
        VysyxSoCFull___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc_npc/cpu/ysyxSoCFull.v", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc_npc/cpu/ysyxSoCFull.v", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (VysyxSoCFull___024root___eval_phase__act(vlSelf));
    } while (VysyxSoCFull___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
}
#endif  // VL_DEBUG
