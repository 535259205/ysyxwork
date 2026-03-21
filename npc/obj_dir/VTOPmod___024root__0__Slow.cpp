// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOPmod.h for the primary calling header

#include "VTOPmod__pch.h"

VL_ATTR_COLD void VTOPmod___024root___eval_static__TOP(VTOPmod___024root* vlSelf);
VL_ATTR_COLD void VTOPmod___024root____Vm_traceActivitySetAll(VTOPmod___024root* vlSelf);

VL_ATTR_COLD void VTOPmod___024root___eval_static(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_static\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTOPmod___024root___eval_static__TOP(vlSelf);
    VTOPmod___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step__0 
        = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__step;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__TOPmod__DOT__divReg__0 
        = vlSelfRef.TOPmod__DOT__divReg;
    vlSelfRef.__Vtrigprevexpr___TOP__TOPmod__DOT__externalPins_spi_sck__0 
        = vlSelfRef.TOPmod__DOT__externalPins_spi_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__TOPmod__DOT__u_flash__DOT__reset__0 
        = vlSelfRef.TOPmod__DOT__u_flash__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__TOPmod__DOT____Vcellinp__u_psram__ce_n__0 
        = vlSelfRef.TOPmod__DOT____Vcellinp__u_psram__ce_n;
    vlSelfRef.__Vtrigprevexpr___TOP__TOPmod__DOT__psram_sck__0 
        = vlSelfRef.TOPmod__DOT__psram_sck;
}

VL_ATTR_COLD void VTOPmod___024root___eval_static__TOP(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_static__TOP\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
}

VL_ATTR_COLD void VTOPmod___024root___eval_initial__TOP(VTOPmod___024root* vlSelf);

VL_ATTR_COLD void VTOPmod___024root___eval_initial(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_initial\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTOPmod___024root___eval_initial__TOP(vlSelf);
    VTOPmod___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VTOPmod___024root___eval_initial__TOP(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_initial__TOP\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_w_ready = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_d[0U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_d[0U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0x0aU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0x0bU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0x0cU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0x0dU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0x0eU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0x0fU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__unnamedblk1__DOT__i = 0x00000010U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9U] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0x0aU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0x0bU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0x0cU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0x0dU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0x0eU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0x0fU] = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__unnamedblk1__DOT__i = 0x00000010U;
}

VL_ATTR_COLD void VTOPmod___024root___eval_final(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_final\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOPmod___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTOPmod___024root___eval_phase__stl(VTOPmod___024root* vlSelf);

VL_ATTR_COLD void VTOPmod___024root___eval_settle(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_settle\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VTOPmod___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/temp/TOPmod.v", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (VTOPmod___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void VTOPmod___024root___eval_triggers__stl(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___eval_triggers__stl\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTOPmod___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool VTOPmod___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOPmod___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VTOPmod___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VTOPmod___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<IData/*31:0*/, 8> VTOPmod__ConstPool__TABLE_h30ab60d4_0;
extern const VlUnpacked<CData/*7:0*/, 256> VTOPmod__ConstPool__TABLE_h65cd9ac3_0;
extern const VlUnpacked<SData/*9:0*/, 256> VTOPmod__ConstPool__TABLE_h53d02be3_0;
extern const VlUnpacked<VlWide<3>/*71:0*/, 8> VTOPmod__ConstPool__TABLE_h2c495b23_0;
extern const VlUnpacked<CData/*2:0*/, 8> VTOPmod__ConstPool__TABLE_h34fb27aa_0;
extern const VlUnpacked<CData/*3:0*/, 4> VTOPmod__ConstPool__TABLE_h19403ecc_0;
extern const VlUnpacked<CData/*3:0*/, 8> VTOPmod__ConstPool__TABLE_h4883b175_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTOPmod__ConstPool__TABLE_h5fa38408_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTOPmod__ConstPool__TABLE_hcc3bb1ef_0;
extern const VlUnpacked<CData/*0:0*/, 256> VTOPmod__ConstPool__TABLE_ha45689c1_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTOPmod__ConstPool__TABLE_h7a4cc5ea_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTOPmod__ConstPool__TABLE_h6388e771_0;
extern const VlUnpacked<CData/*2:0*/, 4> VTOPmod__ConstPool__TABLE_hccd55a0a_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTOPmod__ConstPool__TABLE_h9441969b_0;
extern const VlUnpacked<CData/*7:0*/, 256> VTOPmod__ConstPool__TABLE_h53528664_0;
void VTOPmod___024root____Vdpiimwrap_TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak_module__DOT__ebreak_TOP(IData/*31:0*/ test);
extern const VlUnpacked<CData/*0:0*/, 128> VTOPmod__ConstPool__TABLE_hb21d3c4f_0;

VL_ATTR_COLD void VTOPmod___024root___stl_sequent__TOP__0(VTOPmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOPmod___024root___stl_sequent__TOP__0\n"); );
    VTOPmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[0].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[1].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[2].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[3].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[4].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[5].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[6].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[7].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[8].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[9].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[10].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[11].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[12].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[13].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[14].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[15].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[16].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[17].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[18].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[19].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[20].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[21].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[22].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[23].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[24].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[25].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[26].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[27].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[28].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[29].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[30].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: plic_gateway.sv:117: Assertion failed in %NTOPmod.asic.lplic.m.u_plic_core.PLIC_GATEPWAY_BLOCK[31].u_plic_gateway: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/plic/rtl/plic_gateway.sv", 117, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_i2s_fsm_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_i2s_fsm_q)))))))) {
        if ((0U == (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_i2s_fsm_q) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_i2s_fsm_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: i2s_core.sv:107: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core: unique case, but none matched for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_i2s_fsm_q));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/i2s/rtl/i2s_core.sv", 107, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: i2s_core.sv:107: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core: unique case, but multiple matches found for '1'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),1,(IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_i2s_fsm_q));
            VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/i2s/rtl/i2s_core.sv", 107, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                     >> 5U)) | (1U 
                                                & (~ 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                    >> 6U)))))))) {
        if ((0U != ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                           >> 5U)) | (1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                               >> 6U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: shift_reg.sv:51: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core.I2S_RX_SHIFT_ONE_BLOCK[1].u_i2s_rx_shift_reg: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(1U 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                      >> 6U)));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils/shift_reg.sv", 51, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                     >> 5U)) | (1U 
                                                & (~ 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                    >> 6U)))))))) {
        if ((0U != ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                           >> 5U)) | (1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                               >> 6U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: shift_reg.sv:51: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core.I2S_RX_SHIFT_ONE_BLOCK[2].u_i2s_rx_shift_reg: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(1U 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                      >> 6U)));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils/shift_reg.sv", 51, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                     >> 5U)) | (1U 
                                                & (~ 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                    >> 6U)))))))) {
        if ((0U != ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                           >> 5U)) | (1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                               >> 6U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: shift_reg.sv:51: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core.I2S_RX_SHIFT_ONE_BLOCK[3].u_i2s_rx_shift_reg: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(1U 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                      >> 6U)));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils/shift_reg.sv", 51, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                     >> 5U)) | (1U 
                                                & (~ 
                                                   (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                    >> 6U)))))))) {
        if ((0U != ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                           >> 5U)) | (1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                               >> 6U)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: shift_reg.sv:51: Assertion failed in %NTOPmod.asic.li2s.m.u_i2s_core.I2S_RX_SHIFT_ONE_BLOCK[4].u_i2s_rx_shift_reg: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),2,(1U 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                      >> 6U)));
                VL_STOP_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/../WORK/ysyxSoC/perip/retroSoC/common/rtl/utils/shift_reg.sv", 51, "");
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ErrorReg = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0 = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0 = 1U;
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_baudgen_en = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_mem_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_mem_d[__Vilp1] 
            = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_psel 
        = (2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__spi_state));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_data_rx_valid 
        = (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__elements));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_ctrl_data_tx_valid 
        = (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__elements));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__full 
        = (0x20U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__elements));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__full 
        = (0x20U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__elements));
    vlSelfRef.TOPmod__DOT__u_flash__DOT__data_bswap 
        = ((((0x0000ff00U & (vlSelfRef.TOPmod__DOT__u_flash__DOT__rdata 
                             << 8U)) | (0x000000ffU 
                                        & (vlSelfRef.TOPmod__DOT__u_flash__DOT__rdata 
                                           >> 8U))) 
            << 0x00000010U) | ((0x0000ff00U & (vlSelfRef.TOPmod__DOT__u_flash__DOT__rdata 
                                               >> 8U)) 
                               | (vlSelfRef.TOPmod__DOT__u_flash__DOT__rdata 
                                  >> 0x00000018U)));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT___zz_mcycle 
        = (1ULL + vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle);
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_ready 
        = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtime_d 
        = (1ULL + vlSelfRef.TOPmod__DOT__asic__DOT__lclint__DOT__m__DOT__s_mtime_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.TOPmod__DOT__u_psram__DOT__end_rdata 
        = (((((0x000000f0U & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                              >> 0x00000014U)) | (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                                  >> 0x0000001cU)) 
             << 0x00000018U) | (((0x000000f0U & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                                 >> 0x0000000cU)) 
                                 | (0x0000000fU & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                                   >> 0x00000014U))) 
                                << 0x00000010U)) | 
           ((((0x000000f0U & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                              >> 4U)) | (0x0000000fU 
                                         & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                            >> 0x0000000cU))) 
             << 8U) | ((0x000000f0U & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                       << 4U)) | (0x0000000fU 
                                                  & (vlSelfRef.TOPmod__DOT__u_psram__DOT__r_data 
                                                     >> 4U)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_sample_data = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_wr_ptr_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_wr_ptr_q;
    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_ctrl_q) 
                  >> 1U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_wr_ptr_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_wr_ptr_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_wr_ptr_q;
    if ((8U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_rx_fifo__DOT__s_wr_ptr_d = 0U;
    }
    if ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
        if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
            if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                    = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg;
                vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb 
                    = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg;
            } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                    = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg;
                vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb 
                    = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg;
            } else {
                vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                    = ((IData)(2U) + vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg);
                vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb = 0x0cU;
            }
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg;
        } else if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg;
        } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg;
        } else {
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                = ((IData)(3U) + vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg);
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                = (0x000000ffU & vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg);
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
        if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg;
        } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg;
        } else {
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                = ((IData)(2U) + vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg);
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                = (0x000000ffU & vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg);
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb = 1U;
        }
    } else if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
        if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg;
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg;
        } else {
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
                = ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg);
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
                = (0x000000ffU & vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg);
            vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb = 1U;
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__addr 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__addrReg;
        vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__data 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wdataReg;
        vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__strb 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
           | (IData)(vlSelfRef.reset));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__extra_gpio_out_o 
        = ((((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000001fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                           >> 0x0000001eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000001eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                      >> 0x0000001eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000001dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                             >> 0x0000001cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000001cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                       >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000001bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                 >> 0x0000001aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000001aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000019U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                       >> 0x00000018U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 0x00000018U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                         >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 0x00000017U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                              >> 0x00000016U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 0x00000016U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((~ 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000015U)) 
                                                 << 1U) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                   >> 0x00000014U))) 
                                              | (1U 
                                                 & ((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000014U)) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                       >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x00000013U)) 
                                              << 1U) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                >> 0x00000012U))) 
                                      | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000012U)) 
                                               & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000011U)) 
                                                    << 1U) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                      >> 0x00000010U))) 
                                               | (1U 
                                                  & ((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000010U)) 
                                                     & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                        >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000000fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                           >> 0x0000000eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000000eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                      >> 0x0000000eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000000dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                             >> 0x0000000cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000000cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                       >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000000bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                 >> 0x0000000aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000000aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 9U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                       >> 8U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 8U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                         >> 8U)))))) 
             << 8U) | (((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                      >> 7U)) << 1U) 
                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                    >> 6U))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 6U)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                      >> 6U)))) 
                         << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 5U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                              >> 4U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 4U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 3U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                       >> 2U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 2U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q 
                                                         >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 1U)) 
                                                      << 1U) 
                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q)) 
                                                 | (1U 
                                                    & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q) 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_out_q)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__extra_gpio_dir_o 
        = ((((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000001fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                           >> 0x0000001eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000001eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 0x0000001eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000001dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                             >> 0x0000001cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000001cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                       >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000001bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                 >> 0x0000001aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000001aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000019U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 0x00000018U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 0x00000018U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                         >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 0x00000017U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                              >> 0x00000016U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 0x00000016U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((~ 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000015U)) 
                                                 << 1U) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                   >> 0x00000014U))) 
                                              | (1U 
                                                 & ((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000014U)) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x00000013U)) 
                                              << 1U) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                >> 0x00000012U))) 
                                      | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000012U)) 
                                               & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000011U)) 
                                                    << 1U) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 0x00000010U))) 
                                               | (1U 
                                                  & ((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000010U)) 
                                                     & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                        >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000000fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                           >> 0x0000000eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000000eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 0x0000000eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000000dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                             >> 0x0000000cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000000cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                       >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000000bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                 >> 0x0000000aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000000aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 9U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 8U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 8U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                         >> 8U)))))) 
             << 8U) | (((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                      >> 7U)) << 1U) 
                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                    >> 6U))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 6U)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 6U)))) 
                         << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 5U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                              >> 4U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 4U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 3U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 2U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 2U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q 
                                                         >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 1U)) 
                                                      << 1U) 
                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q)) 
                                                 | (1U 
                                                    & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_iofcfg_q) 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_dir_q)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__extra_gpio_out_o 
        = ((((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000001fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                           >> 0x0000001eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000001eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                      >> 0x0000001eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000001dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                             >> 0x0000001cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000001cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                       >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000001bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                 >> 0x0000001aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000001aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000019U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                       >> 0x00000018U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 0x00000018U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                         >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 0x00000017U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                              >> 0x00000016U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 0x00000016U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((~ 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000015U)) 
                                                 << 1U) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                   >> 0x00000014U))) 
                                              | (1U 
                                                 & ((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000014U)) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                       >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x00000013U)) 
                                              << 1U) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                >> 0x00000012U))) 
                                      | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000012U)) 
                                               & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000011U)) 
                                                    << 1U) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                      >> 0x00000010U))) 
                                               | (1U 
                                                  & ((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000010U)) 
                                                     & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                        >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000000fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                           >> 0x0000000eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000000eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                      >> 0x0000000eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000000dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                             >> 0x0000000cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000000cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                       >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000000bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                 >> 0x0000000aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000000aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 9U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                       >> 8U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 8U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                         >> 8U)))))) 
             << 8U) | (((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                      >> 7U)) << 1U) 
                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                    >> 6U))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 6U)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                      >> 6U)))) 
                         << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 5U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                              >> 4U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 4U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 3U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                       >> 2U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 2U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q 
                                                         >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 1U)) 
                                                      << 1U) 
                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q)) 
                                                 | (1U 
                                                    & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q) 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_out_q)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__extra_gpio_dir_o 
        = ((((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000001fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                           >> 0x0000001eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000001eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 0x0000001eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000001dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                             >> 0x0000001cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000001cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                       >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000001bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                 >> 0x0000001aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000001aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000019U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 0x00000018U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 0x00000018U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                         >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 0x00000017U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                              >> 0x00000016U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 0x00000016U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((~ 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000015U)) 
                                                 << 1U) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                   >> 0x00000014U))) 
                                              | (1U 
                                                 & ((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000014U)) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x00000013U)) 
                                              << 1U) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                >> 0x00000012U))) 
                                      | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000012U)) 
                                               & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000011U)) 
                                                    << 1U) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 0x00000010U))) 
                                               | (1U 
                                                  & ((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000010U)) 
                                                     & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                        >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000000fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                           >> 0x0000000eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000000eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 0x0000000eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000000dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                             >> 0x0000000cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000000cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                       >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000000bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                 >> 0x0000000aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000000aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 9U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 8U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 8U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                         >> 8U)))))) 
             << 8U) | (((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                      >> 7U)) << 1U) 
                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                    >> 6U))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 6U)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 6U)))) 
                         << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 5U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                              >> 4U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 4U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 3U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 2U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 2U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q 
                                                         >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 1U)) 
                                                      << 1U) 
                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q)) 
                                                 | (1U 
                                                    & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_iofcfg_q) 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_dir_q)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__extra_gpio_out_o 
        = ((((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000001fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                           >> 0x0000001eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000001eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                      >> 0x0000001eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000001dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                             >> 0x0000001cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000001cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                       >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000001bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                 >> 0x0000001aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000001aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000019U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                       >> 0x00000018U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 0x00000018U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                         >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 0x00000017U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                              >> 0x00000016U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 0x00000016U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((~ 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000015U)) 
                                                 << 1U) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                   >> 0x00000014U))) 
                                              | (1U 
                                                 & ((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000014U)) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                       >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x00000013U)) 
                                              << 1U) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                >> 0x00000012U))) 
                                      | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000012U)) 
                                               & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000011U)) 
                                                    << 1U) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                      >> 0x00000010U))) 
                                               | (1U 
                                                  & ((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000010U)) 
                                                     & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                        >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000000fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                           >> 0x0000000eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000000eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                      >> 0x0000000eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000000dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                             >> 0x0000000cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000000cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                       >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000000bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                 >> 0x0000000aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000000aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 9U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                       >> 8U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 8U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                         >> 8U)))))) 
             << 8U) | (((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                      >> 7U)) << 1U) 
                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                    >> 6U))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 6U)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                      >> 6U)))) 
                         << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 5U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                              >> 4U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 4U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 3U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                       >> 2U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 2U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q 
                                                         >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 1U)) 
                                                      << 1U) 
                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q)) 
                                                 | (1U 
                                                    & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q) 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_out_q)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__extra_gpio_dir_o 
        = ((((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000001fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                           >> 0x0000001eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000001eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 0x0000001eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000001dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                             >> 0x0000001cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000001cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                       >> 0x0000001cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000001bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                 >> 0x0000001aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000001aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                   >> 0x0000001aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000019U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 0x00000018U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 0x00000018U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                         >> 0x00000018U)))))) 
             << 0x00000018U) | ((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 0x00000017U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                              >> 0x00000016U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 0x00000016U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                >> 0x00000016U)))) 
                                   << 6U) | (((2U & 
                                               (((~ 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000015U)) 
                                                 << 1U) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                   >> 0x00000014U))) 
                                              | (1U 
                                                 & ((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000014U)) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 0x00000014U)))) 
                                             << 4U)) 
                                 | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x00000013U)) 
                                              << 1U) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                >> 0x00000012U))) 
                                      | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x00000012U)) 
                                               & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                  >> 0x00000012U)))) 
                                     << 2U) | ((2U 
                                                & (((~ 
                                                     (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                      >> 0x00000011U)) 
                                                    << 1U) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 0x00000010U))) 
                                               | (1U 
                                                  & ((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 0x00000010U)) 
                                                     & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                        >> 0x00000010U)))))) 
                                << 0x00000010U)) | 
           (((((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                             >> 0x0000000fU)) << 1U) 
                        & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                           >> 0x0000000eU))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 0x0000000eU)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 0x0000000eU)))) 
                << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                       >> 0x0000000dU)) 
                                   << 1U) & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                             >> 0x0000000cU))) 
                           | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                        >> 0x0000000cU)) 
                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                       >> 0x0000000cU)))) 
                          << 4U)) | ((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                   >> 0x0000000bU)) 
                                               << 1U) 
                                              & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                 >> 0x0000000aU))) 
                                       | (1U & ((~ 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                  >> 0x0000000aU)) 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 9U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 8U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 8U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                         >> 8U)))))) 
             << 8U) | (((((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                      >> 7U)) << 1U) 
                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                    >> 6U))) | (1U 
                                                & ((~ 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                     >> 6U)) 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                      >> 6U)))) 
                         << 6U) | (((2U & (((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                >> 5U)) 
                                            << 1U) 
                                           & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                              >> 4U))) 
                                    | (1U & ((~ (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                 >> 4U)) 
                                             & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                >> 4U)))) 
                                   << 4U)) | ((((2U 
                                                 & (((~ 
                                                      (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                       >> 3U)) 
                                                     << 1U) 
                                                    & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                       >> 2U))) 
                                                | (1U 
                                                   & ((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 2U)) 
                                                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q 
                                                         >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((~ 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q 
                                                        >> 1U)) 
                                                      << 1U) 
                                                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q)) 
                                                 | (1U 
                                                    & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_iofcfg_q) 
                                                       & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_dir_q)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_mst_ws 
        = (1U & ((0x00000800U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                  ? ((0x00000400U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                      ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_q)
                      : (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                         >> 5U)) : ((0x00000400U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                                     ? (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                           >> 5U)) : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_cnt_d 
        = (0x000000ffU & ((1U & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q) 
                                 | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_cnt_q))))
                           ? ((0x00002000U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                               ? ((0x00001000U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                                   ? 0x7fU : 0x5fU)
                               : ((0x00001000U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                                   ? 0x3fU : 0x1fU))
                           : ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_cnt_q) 
                              - (IData)(1U))));
    if ((0x00000040U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d 
            = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q), 1U));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d 
            = (0x0000ffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q), 1U));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d 
            = (0x00ffffffU & VL_SHIFTR_III(24,24,32, vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q, 1U));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d 
            = VL_SHIFTR_III(32,32,32, vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q, 1U);
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_out__BRA__0__KET__ 
            = (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o 
            = (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o 
            = (1U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q);
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o 
            = (1U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q);
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d 
            = (0x000000ffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q), 1U));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d 
            = (0x0000ffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q), 1U));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d 
            = (0x00ffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q, 1U));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_d 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q, 1U);
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_out__BRA__0__KET__ 
            = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q) 
                     >> 7U));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o 
            = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q) 
                     >> 0x0000000fU));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o 
            = (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q 
                     >> 0x00000017U));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o 
            = (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__s_sf_q 
                     >> 0x0000001fU));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_pready_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_sync_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__u_i2c_master_byte_ctrl__DOT__go 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_done)) 
           & (0U != (0x70U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_irq_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_ext_trg_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0x0000000fU & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0x0aU] 
                                                                     | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0x0bU] 
                                                                        | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0x0cU] 
                                                                           | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0x0dU] 
                                                                              | (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0eU] 
                                                                                | vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0fU])))))))))))))))) 
           | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 1U));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 2U));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_pready_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_ov_irq_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_ov_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_ov_irq_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_ov_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_alrm_irq_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_alrm_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_alrm_irq_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_alrm_irq_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_tick_edge_det_re__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_cnt_cdc_sync_det__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_parity_bit_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_parity_bit_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_parity_bit_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_parity_bit_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_q;
    if ((1U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)) {
        if ((vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
             & (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_cnt_q)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_d 
                = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_q)));
        }
        if ((vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
             & (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_cnt_q)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_d 
                = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_d 
            = (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                     >> 5U));
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_ws_d 
            = (1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                        >> 5U)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al_d 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al) 
           | ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_q) 
                  >> 7U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_cnt_d 
        = (0x0000ffffU & ((1U & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q) 
                                 | (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_cnt_q))))
                           ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_div_q)
                           : ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_cnt_q) 
                              - (IData)(1U))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
            ? vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.TOPmod__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT__s_sync_dat[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_tgt_d 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_clk_div_valid)
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_clk_div)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_tgt_q));
    vlSelfRef.__Vtableidx2 = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg;
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg_string 
        = VTOPmod__ConstPool__TABLE_h30ab60d4_0[vlSelfRef.__Vtableidx2];
    vlSelfRef.__Vtableidx6 = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_value 
        = VTOPmod__ConstPool__TABLE_h65cd9ac3_0[vlSelfRef.__Vtableidx6];
    vlSelfRef.__Vtableidx9 = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VTOPmod__ConstPool__TABLE_h53d02be3_0[vlSelfRef.__Vtableidx9];
    vlSelfRef.__Vtableidx10 = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string[0U] 
        = VTOPmod__ConstPool__TABLE_h2c495b23_0[vlSelfRef.__Vtableidx10][0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string[1U] 
        = VTOPmod__ConstPool__TABLE_h2c495b23_0[vlSelfRef.__Vtableidx10][1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string[2U] 
        = VTOPmod__ConstPool__TABLE_h2c495b23_0[vlSelfRef.__Vtableidx10][2U];
    vlSelfRef.__Vtableidx14 = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pprot 
        = VTOPmod__ConstPool__TABLE_h34fb27aa_0[vlSelfRef.__Vtableidx14];
    vlSelfRef.TOPmod__DOT__asic__DOT__uart1_uart_tx_o = 1U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_data_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_data_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_4 = 0U;
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_4 = 1U;
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_data_d 
        = (0x00000080U | (0x0000007fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_data_q) 
                                         >> 1U)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_set_error = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss 
        = (0x000000ffU & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                             & ((- (IData)(((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                            & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                               >> 0x0000000dU)))) 
                                | (- (IData)((1U & 
                                              (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                  >> 0x0000000dU)))))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 
        = ((0x00000080U & ((~ (0U != (0x0000007fU & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))) 
                           << 7U)) | (0x0000007fU & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt))) 
           & (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgRegularize_h6cef7f4e_0_3 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_al) 
           | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_done));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_trg = 0U;
    if ((1U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_trg 
            = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__s_dat_q)) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    } else if ((2U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
                             >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_trg 
            = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_edge_det__DOT__s_dat_q));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_trg = 0U;
    if ((1U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_trg 
            = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__s_dat_q)) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    } else if ((2U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
                             >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_trg 
            = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_edge_det__DOT__s_dat_q));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_trg = 0U;
    if ((1U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_trg 
            = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__s_dat_q)) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    } else if ((2U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
                             >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_trg 
            = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_edge_det__DOT__s_dat_q));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_trg = 0U;
    if ((1U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_trg 
            = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__s_dat_q)) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    } else if ((2U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
                             >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_trg 
            = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)) 
               & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_edge_det__DOT__s_dat_q));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr__DOT__dat_i 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_cnt_q 
           >= (vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_cmp_q 
               - (IData)(1U)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bresp 
        = ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__state))
            ? 0U : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ctrl_q) 
            >> 4U) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_done_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_ctrl_q) 
            >> 2U) & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____VdfgExtracted_h1c0d4ea0__0 
        = (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_q)) 
            & (3U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_ctrl_q))) 
           & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_fifo__DOT__s_cnt_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q) 
            >> 1U) & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q) 
            >> 1U) & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_in[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__1__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_in[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_in[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_in[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_RX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_rx_shift_reg__DOT__s_sf_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid = 0U;
    if ((1U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
        if ((2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr 
                = (0xfffffff0U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt);
            vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid 
                = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag)));
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 0x0fU;
    vlSelfRef.__Vtableidx5 = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VTOPmod__ConstPool__TABLE_h19403ecc_0[vlSelfRef.__Vtableidx5];
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_cs = 1U;
    vlSelfRef.__Vtableidx16 = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pstrb 
        = VTOPmod__ConstPool__TABLE_h4883b175_0[vlSelfRef.__Vtableidx16];
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__i2s_sck_i 
        = (1U & ((vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                  >> 4U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_clkgen__DOT__s_sck_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1 
        = (7U & ((3U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1)) 
                 + ((8U == (8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1)))
                     ? 3U : ((4U == (0x0cU & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1)))
                              ? 2U : ((2U == (0x0eU 
                                              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1)))
                                       ? 1U : 0U)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase 
        = (7U & ((3U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size)) 
                 + ((8U == (8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len)))
                     ? 3U : ((4U == (0x0cU & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len)))
                              ? 2U : ((2U == (0x0eU 
                                              & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len)))
                                       ? 1U : 0U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_q) 
                                                 == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_tgt_q));
    vlSelfRef.__Vtableidx28 = vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_mode;
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT____Vcellout__u_spi_core__spi_oe0 
        = VTOPmod__ConstPool__TABLE_h5fa38408_0[vlSelfRef.__Vtableidx28];
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT____Vcellout__u_spi_core__spi_oe1 
        = VTOPmod__ConstPool__TABLE_hcc3bb1ef_0[vlSelfRef.__Vtableidx28];
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT____Vcellout__u_spi_core__spi_oe2 
        = VTOPmod__ConstPool__TABLE_hcc3bb1ef_0[vlSelfRef.__Vtableidx28];
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT____Vcellout__u_spi_core__spi_oe3 
        = VTOPmod__ConstPool__TABLE_hcc3bb1ef_0[vlSelfRef.__Vtableidx28];
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data 
        = ((((0x0b00U == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                          >> 0x00000014U)) | (0x0b80U 
                                              == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 0x00000014U))) 
            | (((0x0300U == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                             >> 0x00000014U)) | (0x0305U 
                                                 == 
                                                 (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 0x00000014U))) 
               | ((0x0342U == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                               >> 0x00000014U)) | (
                                                   (0x0341U 
                                                    == 
                                                    (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                     >> 0x00000014U)) 
                                                   | ((0x0f11U 
                                                       == 
                                                       (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                        >> 0x00000014U)) 
                                                      | (0x0f12U 
                                                         == 
                                                         (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                          >> 0x00000014U)))))))
            ? ((0x0b00U == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                            >> 0x00000014U)) ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle)
                : ((0x0b80U == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                >> 0x00000014U)) ? (IData)(
                                                           (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle 
                                                            >> 0x00000020U))
                    : ((0x0300U == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                    >> 0x00000014U))
                        ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mstatus
                        : ((0x0305U == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                        >> 0x00000014U))
                            ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec
                            : ((0x0342U == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                            >> 0x00000014U))
                                ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcause
                                : ((0x0341U == (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                >> 0x00000014U))
                                    ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc
                                    : ((0x0f11U == 
                                        (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                         >> 0x00000014U))
                                        ? 0x79737978U
                                        : 0x018ce19aU)))))))
            : 0U);
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr = 0U;
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata 
                    = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data;
                vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr 
                    = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
        if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata = 0U;
            vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr;
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
            >> 2U) & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
            >> 2U) & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
            >> 2U) & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_normal_mode 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
            >> 2U) & (7U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data = 0U;
    if ((0x02000000U == (0xfffffffcU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data 
            = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data 
            = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L;
    } else if ((0x02000004U == (0xfffffffcU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data 
            = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data 
            = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H;
    }
    vlSelfRef.__Vtableidx25 = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q) 
                                << 2U) | (3U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_fcr_q) 
                                                >> 2U)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_irq__DOT__s_trg_level_done 
        = VTOPmod__ConstPool__TABLE_ha45689c1_0[vlSelfRef.__Vtableidx25];
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_dst_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q) 
           != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT___zz_com_pc_nPC_1 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc 
           + (((- (IData)((vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                           >> 0x0000001fU))) << 0x0000000dU) 
              | ((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                          >> 0x0000001eU)) | (1U & 
                                              (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                               >> 7U))) 
                  << 0x0000000bU) | ((0x000007e0U & 
                                      (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                           >> 7U))))));
    vlSelfRef.__Vtableidx15 = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwrite 
        = VTOPmod__ConstPool__TABLE_h7a4cc5ea_0[vlSelfRef.__Vtableidx15];
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_pready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_clk_fe 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__u_ps2_clk_edge_det_fe__DOT__s_dat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_tx_pop_ready = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_pready 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_req_src_q) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__u_ack_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall = 0U;
    vlSelfRef.__Vtableidx12 = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_psel 
        = VTOPmod__ConstPool__TABLE_h6388e771_0[vlSelfRef.__Vtableidx12];
    vlSelfRef.__Vtableidx13 = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_penable 
        = VTOPmod__ConstPool__TABLE_h6388e771_0[vlSelfRef.__Vtableidx13];
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q_rev 
        = (((((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                       << 1U)) | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                        >> 1U))) << 6U) 
              | (((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                         >> 1U)) | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                          >> 3U))) 
                 << 4U)) | ((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                     >> 3U)) | (1U 
                                                & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                                   >> 5U))) 
                             << 2U) | ((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                              >> 5U)) 
                                       | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                                >> 7U))))) 
            << 8U) | (((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                >> 7U)) | (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                                 >> 9U))) 
                        << 6U) | (((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                          >> 9U)) | 
                                   (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                          >> 0x0000000bU))) 
                                  << 4U)) | ((((2U 
                                                & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                                     >> 0x0000000dU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                                    >> 0x0000000dU)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q) 
                                                      >> 0x0000000fU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q_rev 
        = ((((((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                        << 1U)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                          >> 1U)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                                                    >> 0x0000001fU))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_rx_fall 
        = (IData)((4U == (6U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync))));
    vlSelfRef.__Vtableidx24 = (3U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q) 
                                     >> 3U));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_target_bits 
        = VTOPmod__ConstPool__TABLE_hccd55a0a_0[vlSelfRef.__Vtableidx24];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_stat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_stat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_stat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_stat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_stat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_stat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_stat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_irq_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ista_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_re 
        = ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__active));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q) 
           != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1));
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_in_trg 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_pscr_q 
           == vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_tc_trg 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_pscr_q) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_tc_trg 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_pscr_q) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q));
    vlSelfRef.__Vtableidx18 = vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg;
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_wantStart 
        = VTOPmod__ConstPool__TABLE_h9441969b_0[vlSelfRef.__Vtableidx18];
    vlSelfRef.__Vtableidx32 = vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_q_rev 
        = VTOPmod__ConstPool__TABLE_h53528664_0[vlSelfRef.__Vtableidx32];
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_is_int_all 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inten_q 
           & ((vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype1_q 
               & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype0_q) 
                  & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__s_dat_q) 
                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) 
              | ((vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype1_q 
                  & (((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4) 
                      & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__s_dat_q) 
                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype0_q)) 
                 | (((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype1_q) 
                     & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__s_dat_q) 
                        & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype0_q)) 
                    | ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype1_q) 
                       & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_inttype0_q) 
                          & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__u_edge_det__DOT__s_dat_q))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_is_int_all 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inten_q 
           & ((vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype1_q 
               & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype0_q) 
                  & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__s_dat_q) 
                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) 
              | ((vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype1_q 
                  & (((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4) 
                      & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__s_dat_q) 
                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype0_q)) 
                 | (((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype1_q) 
                     & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__s_dat_q) 
                        & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype0_q)) 
                    | ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype1_q) 
                       & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_inttype0_q) 
                          & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__u_edge_det__DOT__s_dat_q))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_is_int_all 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inten_q 
           & ((vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype1_q 
               & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype0_q) 
                  & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__s_dat_q) 
                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4))) 
              | ((vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype1_q 
                  & (((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__u_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4) 
                      & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__s_dat_q) 
                     & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype0_q)) 
                 | (((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype1_q) 
                     & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__s_dat_q) 
                        & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype0_q)) 
                    | ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype1_q) 
                       & ((~ vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_inttype0_q) 
                          & vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__u_edge_det__DOT__s_dat_q))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc8_07__DOT____VdfgRegularize_h9d5c102f_0_0 
        = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_q) 
                 ^ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc8_q) 
                    >> 1U)));
    vlSelfRef.__Vtableidx23 = (3U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q) 
                                     >> 3U));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_target_bits 
        = VTOPmod__ConstPool__TABLE_hccd55a0a_0[vlSelfRef.__Vtableidx23];
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_push_valid = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_1021__DOT____VdfgRegularize_hb4a0f88e_0_0 
        = (1U & VL_REDXOR_16((0x1100U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__tx_data_i 
        = (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 5U)))
             ? 0U : (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[
                     (((IData)(0x0000001fU) + (0x000007ffU 
                                               & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 5U))) 
                      >> 5U)] << ((IData)(0x00000020U) 
                                  - (0x0000001fU & 
                                     VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 5U))))) 
           | (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[
              (0x0000003fU & (VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 5U) 
                              >> 5U))] >> (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 5U))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_0 
        = (1U & VL_REDXOR_16((0x0300U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_2 
        = (1U & VL_REDXOR_16((0x0c00U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_4 
        = (1U & VL_REDXOR_16((0x3000U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_7 
        = (1U & VL_REDXOR_16((0xc000U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_5 
        = (1U & VL_REDXOR_16((0x6000U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_3 
        = (1U & VL_REDXOR_16((0x1800U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_8005__DOT____VdfgRegularize_h1668e132_0_1 
        = (1U & VL_REDXOR_16((0x0600U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_src_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q) 
           != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_in_trg 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_pscr_q 
           == vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_in_trg 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_pscr_q 
           == vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_in_trg 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_pscr_q 
           == vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_in_trg 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_pscr_q 
           == vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q) 
           != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_penable 
        = ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__spi_state)) 
           | (2U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__spi_state)));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_S 
        = (((- (IData)((vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000fe0U & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                              >> 0x00000014U)) | (0x0000001fU 
                                                  & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                     >> 7U))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__ip_o 
        = ((((((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                        << 1U)) | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                << 6U) | (((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                  << 1U)) | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                          << 4U)) | ((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                                      << 2U) | ((2U 
                                                 & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))))) 
             << 0x00000018U) | ((((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                                   << 6U) | (((2U & 
                                               ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                                             << 4U)) 
                                 | ((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                             << 1U)) 
                                      | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                                     << 2U) | ((2U 
                                                & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                        << 1U)) | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                << 6U) | (((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                  << 1U)) | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                          << 4U)) | ((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                                      << 2U) | ((2U 
                                                 & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))))) 
             << 8U) | (((((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                 << 1U)) | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                         << 6U) | (((2U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                                   << 4U)) | ((((2U 
                                                 & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_plic_gateway__DOT__s_gw_fsm_q)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[1U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio1_q 
                          >> 4U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[2U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio1_q 
                          >> 8U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[3U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio1_q 
                          >> 0x0000000cU));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[4U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio1_q 
                          >> 0x00000010U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[5U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio1_q 
                          >> 0x00000014U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[6U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio1_q 
                          >> 0x00000018U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[7U] 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio1_q 
           >> 0x0000001cU);
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[8U] 
        = (0x0000000fU & vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[9U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q 
                          >> 4U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000000aU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q 
                          >> 8U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000000bU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q 
                          >> 0x0000000cU));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000000cU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q 
                          >> 0x00000010U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000000dU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q 
                          >> 0x00000014U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000000eU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q 
                          >> 0x00000018U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000000fU] 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio2_q 
           >> 0x0000001cU);
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000010U] 
        = (0x0000000fU & vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000011U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q 
                          >> 4U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000012U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q 
                          >> 8U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000013U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q 
                          >> 0x0000000cU));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000014U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q 
                          >> 0x00000010U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000015U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q 
                          >> 0x00000014U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000016U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q 
                          >> 0x00000018U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000017U] 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio3_q 
           >> 0x0000001cU);
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000018U] 
        = (0x0000000fU & vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x00000019U] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q 
                          >> 4U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000001aU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q 
                          >> 8U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000001bU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q 
                          >> 0x0000000cU));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000001cU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q 
                          >> 0x00000010U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000001dU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q 
                          >> 0x00000014U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000001eU] 
        = (0x0000000fU & (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q 
                          >> 0x00000018U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in[0x0000001fU] 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_prio4_q 
           >> 0x0000001cU);
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_11 
        = (1U & VL_REDXOR_32((0x0c000000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_1 
        = (1U & VL_REDXOR_32((0x06000000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_13 
        = (1U & VL_REDXOR_32((0x88000000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_14 
        = (1U & VL_REDXOR_32((0x44000000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__irq_o 
        = (IData)((0U != (3U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_stat_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_wr_valid 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ctrl_q) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_ssta_q) 
              >> 1U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q 
           == vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1 
        = (0x00000fffU & ((~ (((1U < (3U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                               << 1U) | (0U < (3U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))))) 
                          & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base 
        = (0x00000fffU & ((~ (((1U < (3U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size))) 
                               << 1U) | (0U < (3U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size))))) 
                          & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_1021__DOT____VdfgRegularize_hb4a0f88e_0_2 
        = (1U & VL_REDXOR_16((0x4400U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc16_1021__DOT____VdfgRegularize_hb4a0f88e_0_1 
        = (1U & VL_REDXOR_16((0x2200U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc16_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_4 
        = ((0U == (3U & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                         >> 4U))) ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0)
            : ((1U == (3U & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                             >> 4U))) ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1)
                : ((2U == (3U & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                 >> 4U))) ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2)
                    : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_trans_done 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_cnt_q) 
           == (7U & ((IData)(1U) + (3U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_ctrl_q) 
                                          >> 5U)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_re 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__u_ws_edge_det_sync__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_fe 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__u_ws_edge_det_sync__DOT__s_dat_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_2 
        = (1U & VL_REDXOR_32((0x05000000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_0 
        = (1U & VL_REDXOR_32((0x03000000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_17 
        = (1U & VL_REDXOR_32((0x18000000U & vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2 
        = ((0U == (0x0000001fU & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                  >> 0x00000014U)))
            ? 0U : ((0x01000000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                     ? ((0x00800000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                         ? ((0x00400000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00200000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30)
                                 : ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28))
                             : ((0x00200000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26)
                                 : ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24)))
                         : ((0x00400000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00200000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22)
                                 : ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20))
                             : ((0x00200000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18)
                                 : ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16))))
                     : ((0x00800000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                         ? ((0x00400000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00200000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14)
                                 : ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12))
                             : ((0x00200000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10)
                                 : ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8)))
                         : ((0x00400000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00200000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6)
                                 : ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4))
                             : ((0x00200000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2)
                                 : ((0x00100000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_pop_data 
        = ((0x011fU >= (0x000001ffU & ((IData)(9U) 
                                       * (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q))))
            ? (0x000001ffU & (((0U == (0x0000001fU 
                                       & ((IData)(9U) 
                                          * (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q))))
                                ? 0U : (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[
                                        (((IData)(8U) 
                                          + (0x000001ffU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q)))) 
                                         >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((IData)(9U) 
                                               * (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q)))))) 
                              | (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[
                                 (0x0000000fU & (((IData)(9U) 
                                                  * (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q)) 
                                                 >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((IData)(9U) * (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_rd_ptr_q))))))
            : 0U);
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I 
        = (((- (IData)((vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
              >> 0x00000014U));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state) 
                      >> 3U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_cs 
                = ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state) 
                             >> 2U))) && ((1U & (~ 
                                                 ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state) 
                                                  >> 1U))) 
                                          && ((1U & 
                                               (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))) 
                                              && (1U 
                                                  & (~ 
                                                     ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_rd) 
                                                        | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_wr)) 
                                                       | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_qrd)) 
                                                      | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_qwr)))))));
            vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status 
                = ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))
                    ? ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))
                        ? (0x00000040U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status))
                        : ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))
                            ? (0x00000020U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status))
                            : (0x00000010U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status))))
                    : ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))
                        ? ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))
                            ? (8U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status))
                            : (4U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status)))
                        : ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__state))
                            ? (2U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status))
                            : (1U | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_ctrl_status)))));
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_prio_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_id_dffr____pinNumber4;
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_rise = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h02ce69e7_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h2ccb80ab_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__0__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_hf183d12a_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h5cb1b302_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h4f81a988_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h704cd1d9_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__9__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h5d6e1c92_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__15__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_ha117777b_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h36413ce4_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__18__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__19__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h7b9ed883_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__16__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__17__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h7a5e8e33_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__22__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__23__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h9e6487be_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__20__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__21__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h0e3ed8d6_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__26__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__27__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_hb939ed0f_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__24__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__25__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT____VdfgRegularize_h37701fa9_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__30__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__31__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT____VdfgRegularize_h2c3f9f0e_0_0 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__28__KET____DOT__u_prio_dffr____pinNumber4) 
           < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT____Vcellout__PLIC_GATEPWAY_BLOCK__BRA__29__KET____DOT__u_prio_dffr____pinNumber4));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_rise_int_tx 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_int_en) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_txfifo__DOT__elements) 
              < (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_th_tx)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_rise_int_rx 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_int_en) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_rxfifo__DOT__elements) 
              > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__s_th_rx)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_txreg__DOT__en_quad_in 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_qrd) 
           | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_qwr) 
              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__en_quad_int)));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready = 0U;
    if ((1U & (~ ((((((((0x00000033U == (0xfe00707fU 
                                         & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                       | (0x00007033U == (0xfe00707fU 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00006033U == (0xfe00707fU 
                                         & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (0x00004033U == (0xfe00707fU 
                                        & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (0x00001033U == (0xfe00707fU 
                                       & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x00005033U == (0xfe00707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x40005033U == (0xfe00707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
        if ((1U & (~ ((((((((0x00002033U == (0xfe00707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                            | (0x00003033U == (0xfe00707fU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                           | (0x00000013U == (0x0000707fU 
                                              & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00004013U == (0x0000707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                         | (0x00006013U == (0x0000707fU 
                                            & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                        | (0x00007013U == (0x0000707fU 
                                           & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                       | (0x00001013U == (0xfe00707fU 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00005013U == (0xfe00707fU 
                                         & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
            if ((1U & (~ ((((((((0x40005013U == (0xfe00707fU 
                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                                | (0x00002013U == (0x0000707fU 
                                                   & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                               | (0x00003013U == (0x0000707fU 
                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                              | (3U == (0x0000707fU 
                                        & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                             | (0x00001003U == (0x0000707fU 
                                                & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                            | (0x00002003U == (0x0000707fU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                           | (0x00004003U == (0x0000707fU 
                                              & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00005003U == (0x0000707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
                if ((1U & (~ ((((((((0x00000067U == 
                                     (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                                    | (0x00002023U 
                                       == (0x0000707fU 
                                           & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                   | (0x00001023U == 
                                      (0x0000707fU 
                                       & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                  | (0x00000023U == 
                                     (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                 | (0x00000063U == 
                                    (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                | (0x00001063U == (0x0000707fU 
                                                   & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                               | (0x00004063U == (0x0000707fU 
                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                              | (0x00005063U == (0x0000707fU 
                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
                    if (((((((((0x00006063U == (0x0000707fU 
                                                & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                               | (0x00007063U == (0x0000707fU 
                                                  & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                              | (0x00000037U == (0x0000007fU 
                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                             | (0x00000017U == (0x0000007fU 
                                                & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                            | (0x0000006fU == (0x0000007fU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                           | (0x00001073U == (0x0000707fU 
                                              & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00002073U == (0x0000707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                         | (0x00003073U == (0x0000707fU 
                                            & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
                        if ((0x00006063U != (0x0000707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((0x00007063U != (0x0000707fU 
                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                if ((0x00000037U != 
                                     (0x0000007fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                    if ((0x00000017U 
                                         != (0x0000007fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                        if ((0x0000006fU 
                                             != (0x0000007fU 
                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                            vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x00005073U == (0x0000707fU 
                                                & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 1U;
                    } else if ((0x00006073U == (0x0000707fU 
                                                & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 1U;
                    } else if ((0x00007073U == (0x0000707fU 
                                                & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild = 1U;
                    }
                    if ((1U & (~ ((((((((0x00006063U 
                                         == (0x0000707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                                        | (0x00007063U 
                                           == (0x0000707fU 
                                               & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                       | (0x00000037U 
                                          == (0x0000007fU 
                                              & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                      | (0x00000017U 
                                         == (0x0000007fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                     | (0x0000006fU 
                                        == (0x0000007fU 
                                            & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                    | (0x00001073U 
                                       == (0x0000707fU 
                                           & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                   | (0x00002073U == 
                                      (0x0000707fU 
                                       & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                                  | (0x00003073U == 
                                     (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))))) {
                        if ((0x00005073U != (0x0000707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((0x00006073U != (0x0000707fU 
                                                 & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                if ((0x00007073U != 
                                     (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                    if ((0x00100073U 
                                         != vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                        if ((0x00000073U 
                                             != vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                            if ((0x30200073U 
                                                 != vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                                if (
                                                    (0x0000100fU 
                                                     == vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                                    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i = 1U;
                                                }
                                                if (
                                                    (0x0000100fU 
                                                     != vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                                    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ErrorReg = 1U;
                                                }
                                            }
                                            if ((0x30200073U 
                                                 == vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret = 1U;
                                            }
                                        }
                                        if ((0x00000073U 
                                             == vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                            vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall = 1U;
                                        }
                                    }
                                    if ((0x00100073U 
                                         == vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) {
                                        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if (((((((((0x00000067U == (0x0000707fU 
                                            & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                           | (0x00002023U == (0x0000707fU 
                                              & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                          | (0x00001023U == (0x0000707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                         | (0x00000023U == (0x0000707fU 
                                            & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                        | (0x00000063U == (0x0000707fU 
                                           & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                       | (0x00001063U == (0x0000707fU 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00004063U == (0x0000707fU 
                                         & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (0x00005063U == (0x0000707fU 
                                        & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
                    if ((0x00000067U != (0x0000707fU 
                                         & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((0x00002023U == (0x0000707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid 
                                = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag;
                        } else if ((0x00001023U == 
                                    (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid 
                                = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag;
                        } else if ((0x00000023U == 
                                    (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid 
                                = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag;
                        }
                    }
                }
            }
            if (((((((((0x40005013U == (0xfe00707fU 
                                        & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)) 
                       | (0x00002013U == (0x0000707fU 
                                          & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                      | (0x00003013U == (0x0000707fU 
                                         & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                     | (3U == (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                    | (0x00001003U == (0x0000707fU 
                                       & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                   | (0x00002003U == (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                  | (0x00004003U == (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) 
                 | (0x00005003U == (0x0000707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)))) {
                if ((0x40005013U != (0xfe00707fU & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                    if ((0x00002013U != (0x0000707fU 
                                         & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                        if ((0x00003013U != (0x0000707fU 
                                             & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                            if ((3U == (0x0000707fU 
                                        & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 1U;
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            } else if ((0x00001003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 3U;
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            } else if ((0x00002003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 0x0fU;
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            } else if ((0x00004003U 
                                        == (0x0000707fU 
                                            & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code))) {
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 1U;
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            } else {
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size = 3U;
                                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready 
                                    = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag) 
                                       & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag)));
                            }
                            vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid 
                                = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1 
        = ((0U == (0x0000001fU & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                  >> 0x0000000fU)))
            ? 0U : ((0x00080000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                     ? ((0x00040000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                         ? ((0x00020000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00010000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30)
                                 : ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28))
                             : ((0x00010000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26)
                                 : ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24)))
                         : ((0x00020000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00010000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22)
                                 : ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20))
                             : ((0x00010000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18)
                                 : ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16))))
                     : ((0x00040000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                         ? ((0x00020000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00010000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14)
                                 : ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12))
                             : ((0x00010000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10)
                                 : ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8)))
                         : ((0x00020000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                             ? ((0x00010000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6)
                                 : ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4))
                             : ((0x00010000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                 ? ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2)
                                 : ((0x00008000U & vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)
                                     ? vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1
                                     : vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_fall = 0U;
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_q) 
         == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_tgt_q))) {
        if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_spi_clk_q)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_rise 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__r_running;
        }
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_spi_clk_q) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_fall 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__r_running;
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_we 
        = ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__wstrbReg)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__active));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_in 
        = (0x000000ffU & ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_cnt_q))
                           ? (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_q 
                              >> 0x00000018U) : ((2U 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_cnt_q))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_cnt_q))
                                                   ? vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_q
                                                   : 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_q 
                                                   >> 8U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_cnt_q))
                                                   ? 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_q 
                                                   >> 0x00000010U)
                                                   : 
                                                  (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc_data_q 
                                                   >> 0x00000018U)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__ie_i 
        = (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ie_q 
           & (- (IData)((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.TOPmod__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((0x00000010U 
                                                 & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr))
                                                 ? 
                                                ((0x0000000cU 
                                                  & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                          >> 3U))))
                                                 : 8U);
    if ((3U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0ULL;
    } else if ((4U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
                             >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0x00000000ffffffffULL;
    } else if ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
                 >> 7U) & (1U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_gap_cnt_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
            = (0x00000001ffffffffULL & (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                                        - 1ULL));
    }
    if ((3U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0ULL;
    } else if ((4U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
                             >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0x00000000ffffffffULL;
    } else if ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
                 >> 7U) & (1U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_gap_cnt_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
            = (0x00000001ffffffffULL & (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                                        - 1ULL));
    }
    if ((3U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0ULL;
    } else if ((4U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
                             >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0x00000000ffffffffULL;
    } else if ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
                 >> 7U) & (1U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_gap_cnt_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
            = (0x00000001ffffffffULL & (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                                        - 1ULL));
    }
    if ((3U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0ULL;
    } else if ((4U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
                             >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0x00000000ffffffffULL;
    } else if ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
                 >> 7U) & (1U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_gap_cnt_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
            = (0x00000001ffffffffULL & (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cap_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                                        - 1ULL));
    }
    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q)))) {
                if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_bit_done) {
                    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_sample_data = 1U;
                }
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_parity_bit_d 
                    = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_parity_bit_q) 
                       ^ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync) 
                          >> 2U));
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_data_d 
                    = ((0x00000010U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))
                        ? ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))
                            ? ((0x00000080U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync) 
                                               << 5U)) 
                               | (0x0000007fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_data_q) 
                                                 >> 1U)))
                            : ((0x00000040U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync) 
                                               << 4U)) 
                               | (0x0000003fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_data_q) 
                                                 >> 1U))))
                        : ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))
                            ? ((0x00000020U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync) 
                                               << 3U)) 
                               | (0x0000001fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_data_q) 
                                                 >> 1U)))
                            : ((0x00000010U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync) 
                                               << 2U)) 
                               | (0x0000000fU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_data_q) 
                                                 >> 1U)))));
            }
            if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_push_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_parity_bit_d = 0U;
        }
    }
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q)))) {
                if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_bit_done) {
                    if ((0x00000100U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))) {
                        if ((0x00000080U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))) {
                            if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync) 
                                          >> 2U)))) {
                                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_set_error = 1U;
                            }
                        } else if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync))) {
                            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_set_error = 1U;
                        }
                    } else if ((0x00000080U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))) {
                        if (((1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync) 
                                    >> 2U)) != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_parity_bit_q))) {
                            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_set_error = 1U;
                        }
                    } else if (((1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__reg_rx_sync) 
                                       >> 2U)) != (1U 
                                                   & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_parity_bit_q))))) {
                        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_set_error = 1U;
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q)))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_parity_bit_d 
                    = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_parity_bit_q) 
                             ^ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_data_q)));
            }
        } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_parity_bit_d = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q)))) {
                if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q))) {
                    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_data_d 
                        = (0x000000ffU & (((0U == (0x0000001fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 3U)))
                                            ? 0U : 
                                           (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[
                                            (((IData)(7U) 
                                              + (0x000000ffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 3U))))) 
                                          | (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT____Vcellout__u_mem_dffr____pinNumber4[
                                             (7U & 
                                              (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 3U) 
                                               >> 5U))] 
                                             >> (0x0000001fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_rd_ptr_q), 3U)))));
                }
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_tx_pop_ready = 1U;
            }
        }
    }
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_baudgen_en = 1U;
            vlSelfRef.TOPmod__DOT__asic__DOT__uart1_uart_tx_o = 1U;
        }
    } else if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_baudgen_en = 1U;
        vlSelfRef.TOPmod__DOT__asic__DOT__uart1_uart_tx_o 
            = (1U & ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))
                      ? ((0x00000100U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))
                          ? ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q) 
                             >> 7U) : ((0x00000080U 
                                        & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))
                                        ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_parity_bit_q)
                                        : (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_parity_bit_q))))
                      : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_data_q)));
    } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_baudgen_en = 1U;
        vlSelfRef.TOPmod__DOT__asic__DOT__uart1_uart_tx_o = 0U;
    }
    if (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak) {
        VTOPmod___024root____Vdpiimwrap_TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak_module__DOT__ebreak_TOP(1U);
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
        = ((0x00000010U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__srx_pad));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__rd_vaild 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_4) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse));
    vlSelfRef.TOPmod__DOT__u_flash__DOT__reset = (1U 
                                                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss));
    vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0x000000ffU & ((0x00000800U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                           ? ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                              - ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                 + (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                          >> 9U))))
                           : ((0x00000200U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                               ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                               : ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                  - (IData)(1U)))));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_irq_d 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_cmd_q)) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT____VdfgRegularize_h6cef7f4e_0_3) 
              | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2c__DOT__m__DOT__s_i2c_irq_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_gap_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_gap_cnt_q;
    if ((3U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_gap_cnt_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_trg) 
                & (1U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_gap_cnt_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_gap_cnt_d 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_cap_gap_cnt_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_gap_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_gap_cnt_q;
    if ((3U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_gap_cnt_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_trg) 
                & (1U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_gap_cnt_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_gap_cnt_d 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_cap_gap_cnt_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_gap_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_gap_cnt_q;
    if ((3U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_gap_cnt_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_trg) 
                & (1U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_gap_cnt_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_gap_cnt_d 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_cap_gap_cnt_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_gap_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_gap_cnt_q;
    if ((3U == (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q) 
                      >> 4U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_gap_cnt_d = 0U;
    } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_trg) 
                & (1U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_gap_cnt_q)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_gap_cnt_d 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_cap_gap_cnt_q)));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_cnt_d 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_normal_mode)
            ? ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_feed_q)
                ? 0U : ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__u_irq_cdc_sync__DOT__genblk1__BRA__0__KET____DOT__CDC_SYNC_0_BLOCK__DOT__u_sync_dffr__DOT__dat_i)
                         ? 0U : ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_cnt_q)))
            : vlSelfRef.TOPmod__DOT__asic__DOT__lwdg__DOT__m__DOT__s_wdg_cnt_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_q;
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_ctrl_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_normal_mode) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_d 
            = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_q) 
                >= ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cmp_q) 
                    - (IData)(1U))) ? 0U : (0x0000ffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm0__DOT__m__DOT__s_pwm_cnt_q))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_q;
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_ctrl_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_normal_mode) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_d 
            = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_q) 
                >= ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cmp_q) 
                    - (IData)(1U))) ? 0U : (0x0000ffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpwm1__DOT__m__DOT__s_pwm_cnt_q))));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_push_data = 0U;
    if ((1U & (~ (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                  >> 7U)))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_rx_push_data 
            = ((0x00002000U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                ? ((0x00001000U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                    ? vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_in
                   [3U] : vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_in
                   [2U]) : ((0x00001000U & vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q)
                             ? vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_in
                            [1U] : vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_in
                            [0U]));
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size 
        = ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size))
            ? 0U : ((3U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size))
                     ? 1U : 2U));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT____Vcellout__m__spi_spi_nss_o 
        = ((0xf0U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT____Vcellout__m__spi_spi_nss_o)) 
           | ((((2U & (((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_csreg) 
                            >> 3U)) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_cs)) 
                       << 1U)) | (1U & ((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_csreg) 
                                            >> 2U)) 
                                        | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_cs)))) 
               << 2U) | ((2U & (((~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_csreg) 
                                     >> 1U)) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_cs)) 
                                << 1U)) | (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__spi_csreg)) 
                                                 | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__spi_cs))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sck_re 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__u_sck_edge_det_sync_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__i2s_sck_i));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_spi_clk_d 
            = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_spi_clk_q)));
        vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_d = 0U;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_spi_clk_d 
            = (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_spi_clk_q));
        vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_d 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lqspi__DOT__m__DOT__u_spi_core__DOT__u_spictrl__DOT__u_clkgen__DOT__s_cnt_q)));
    }
    vlSelfRef.__Vtableidx29 = ((((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_sd_out__BRA__0__KET__) 
                                   << 3U) | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__2__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__3__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o) 
                                     << 1U) | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__I2S_TX_SHIFT_ONE_BLOCK__BRA__4__KET____DOT__u_i2s_tx_shift_reg__DOT__ser_dat_o))) 
                                << 3U) | ((6U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                 >> 0x0000000bU)) 
                                          | (1U & (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__s_i2s_ctrl_q 
                                                   >> 7U))));
    vlSelfRef.TOPmod__DOT__asic__DOT__i2s_sd_o = VTOPmod__ConstPool__TABLE_hb21d3c4f_0
        [vlSelfRef.__Vtableidx29];
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i 
        = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_dst_valid)
                  ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q))
                  : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_dst_valid) 
            | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0) 
               == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1)))
            ? vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q
            : vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_q;
    if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_ctrl_q))) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_clk_fe) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_d 
                = ((0x0aU == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_q))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_q))));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_dat_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_dat_q;
    if ((((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_ps2_ctrl_q) 
          >> 1U) & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_clk_fe))) {
        if ((0x0aU > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____Vlvbound_hc3d30b7d__0 = 0U;
            if ((9U >= (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_q))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_dat_d 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_q))) 
                        & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_dat_d)) 
                       | (0x03ffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT____Vlvbound_hc3d30b7d__0) 
                                     << (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lps2__DOT__m__DOT__s_cnt_q))));
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__pop_hdshk 
        = ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_tx_pop_ready));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc = 0U;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall) {
        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc 
            = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret) {
        vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc 
            = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_start_bit = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_baudgen_en = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_bit_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_bit_cnt_q;
    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_start_bit = 1U;
            } else if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_rx_fall) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_start_bit = 1U;
            }
        }
        if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q)))) {
                if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_bit_done) {
                    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_bit_cnt_d 
                        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_bit_cnt_q) 
                            == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_bit_cnt_q))));
                }
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q;
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_baudgen_en = 1U;
        }
        if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
            if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_bit_done) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_d = 0U;
            }
        } else if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_bit_done) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_d = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_baudgen_en = 1U;
        if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
            if ((0x20U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_d 
                    = ((0x00000040U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))
                        ? 4U : 5U);
            }
        } else if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_bit_done) {
            if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_reg_bit_cnt_q) 
                 == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_target_bits))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_baudgen_en = 1U;
        if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_bit_done) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_d = 2U;
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_rx_fall) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_baudgen_en = 1U;
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_rx__DOT__s_fsm_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__1__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__2__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__3__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__4__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__5__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__6__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__7__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__10__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__11__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__12__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__13__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_edge_dec_q) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
        } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
                         - (IData)(1U)));
        }
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg) {
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q) 
             < (7U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_plic_ctrl_q) 
                      >> 1U)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__14__KET____DOT__u_plic_gateway__DOT__s_trg_cnt_q;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__npsram__DOT__u_psram_top_apb__DOT__u0__DOT__wb_re));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_d 
            = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_normal_mode) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_d 
            = ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_cnt_q);
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid) 
            | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0) 
               == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1)))
            ? vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q
            : vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q);
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT____VdfgExtracted_h8b551abc__0 
        = ((~ (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_gpio_intstat_q)) 
           & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio0__DOT__m__DOT__s_is_int_all));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT____VdfgExtracted_h8b551abc__0 
        = ((~ (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_gpio_intstat_q)) 
           & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio1__DOT__m__DOT__s_is_int_all));
    vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT____VdfgExtracted_h8b551abc__0 
        = ((~ (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_gpio_intstat_q)) 
           & (0U != vlSelfRef.TOPmod__DOT__asic__DOT__lgpio2__DOT__m__DOT__s_is_int_all));
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_bit_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_bit_cnt_q;
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_sample_data = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
            if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q)))) {
                if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_bit_done) {
                    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_bit_cnt_d 
                        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_bit_cnt_q) 
                            == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_target_bits))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_bit_cnt_q))));
                    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_bit_cnt_q) 
                         != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_target_bits))) {
                        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_sample_data = 1U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q)))) {
            if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_sample_data = 1U;
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q;
    if ((4U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
        if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
            if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_bit_done) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_d = 0U;
            }
        } else if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_bit_done) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_d 
                = ((0x00000020U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))
                    ? 5U : 0U);
        }
    } else if ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
        if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
            if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_bit_done) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_d = 4U;
            }
        } else if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_bit_done) {
            if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_reg_bit_cnt_q) 
                 == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_target_bits))) {
                vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_d 
                    = ((0x00000040U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_uart_lcr_q))
                        ? 3U : 4U);
            }
        }
    } else if ((1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_q))) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_bit_done) {
            vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_d = 2U;
        }
    } else if ((0U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_tx_fifo__DOT__s_cnt_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_uart_tx__DOT__s_fsm_d = 1U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__push_hdshk 
        = ((0x20U != (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__u_rx_fifo__DOT__s_cnt_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__luart1__DOT__m__DOT__s_rx_push_valid));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_src_valid) 
            | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0) 
               == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1)))
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_src_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_normal_mode) {
        if ((1U & (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4)) 
                   | (IData)((vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                              >> 0x00000020U))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
                = (QData)((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_cmp_q));
        } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_normal_mode) 
                    & ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q))
                        ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)
                        : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_in_trg)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
                = (0x00000001ffffffffULL & ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__s_tmr_ctrl_q))
                                             ? (vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                                                - 1ULL)
                                             : (1ULL 
                                                + vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim0__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0ULL;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_normal_mode) {
        if ((1U & (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4)) 
                   | (IData)((vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                              >> 0x00000020U))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
                = (QData)((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_cmp_q));
        } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_normal_mode) 
                    & ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q))
                        ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)
                        : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_in_trg)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
                = (0x00000001ffffffffULL & ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__s_tmr_ctrl_q))
                                             ? (vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                                                - 1ULL)
                                             : (1ULL 
                                                + vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim1__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0ULL;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_normal_mode) {
        if ((1U & (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4)) 
                   | (IData)((vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                              >> 0x00000020U))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
                = (QData)((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_cmp_q));
        } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_normal_mode) 
                    & ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q))
                        ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)
                        : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_in_trg)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
                = (0x00000001ffffffffULL & ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__s_tmr_ctrl_q))
                                             ? (vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                                                - 1ULL)
                                             : (1ULL 
                                                + vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim2__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0ULL;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_normal_mode) {
        if ((1U & (((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__1__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4)) 
                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_cnt_cdc_sync_det__DOT____Vcellout__CDC_SYNC_DET_BLOCK__BRA__0__KET____DOT__genblk1__DOT__u_sync_dffr____pinNumber4)) 
                   | (IData)((vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                              >> 0x00000020U))))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
                = (QData)((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_cmp_q));
        } else if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_normal_mode) 
                    & ((2U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q))
                        ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_ext_trg_cdc_sync__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CDC_SYNC_N0_BLOCK__DOT__u_sync_dffr____pinNumber4)
                        : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_in_trg)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d 
                = (0x00000001ffffffffULL & ((8U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__s_tmr_ctrl_q))
                                             ? (vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q 
                                                - 1ULL)
                                             : (1ULL 
                                                + vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_q)));
        }
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__ltim3__DOT__m__DOT__u_tmr_cnt_counter__DOT__u_delta_counter__DOT__s_cnt_d = 0ULL;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_data_dst_dffr__DOT__dat_i 
        = (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid) 
            | ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q0) 
               == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__r_req_q1)))
            ? (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_data_dst_q)
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_src__DOT__s_data_src_q));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__s_prio_in
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__s_irq_re_trg 
        = ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__PLIC_GATEPWAY_BLOCK__BRA__8__KET____DOT__u_plic_gateway__DOT__u_irq_re__DOT__s_dat_q)) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__irq_o));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i 
            = (1U & (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q)));
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d = 0U;
    } else {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i 
            = (1U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_div_valid_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q));
        if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg) 
             & (7U > (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)))) {
            vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_d 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_div_done_q)));
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__u_ack_dst_dffr__DOT__dat_i 
        = (1U & (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_wr_dst_valid) 
                  & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg))
                  ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q))
                  : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_wr_cdc_2phase__DOT__u_cdc_2phase_dst__DOT__s_ack_dst_q)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d 
        = (0x000fffffU & ((IData)(1U) + vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q));
    if (((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid) 
         | (0U == vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q))) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg) {
        vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__u_clk_dffr__DOT__dat_i 
        = (1U & ((~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_valid)) 
                 & ((((0U != vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q) 
                      & (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_cnt_q 
                         == VL_SHIFTR_III(32,32,32, 
                                          (vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rtc_pscr_q 
                                           - (IData)(1U)), 1U))) 
                     | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg))
                     ? (~ (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))
                     : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_clk_int_div_simple__DOT__s_clk_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__u_rd_cdc_2phase__DOT__src_valid_i 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_rd_src_valid) 
           & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lrtc__DOT__m__DOT__s_tc_trg));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1 
        = (0x00000fffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1) 
                          + (((2U == (3U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                              << 2U) | (((1U == (3U 
                                                 & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                                         << 1U) | (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr 
        = (0x00000fffU & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base) 
                          + (((2U == (3U & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size))) 
                              << 2U) | (((1U == (3U 
                                                 & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size))) 
                                         << 1U) | (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size)))))));
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code = 0U;
    vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_valid = 0U;
    if ((1U == (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))) {
        if (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT___zz_4) {
            vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code 
                = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem
                [(0x0000000fU & ((0x0000001fU & VL_SHIFTL_III(5,5,32, 
                                                              (3U 
                                                               & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                                  >> 4U)), 2U)) 
                                 + (3U & (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                          >> 2U))))];
            if (vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready) {
                vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_valid 
                    = vlSelfRef.TOPmod__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_start_flag;
            }
        }
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_cnt_d 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_trans_done)
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_calc_cnt_q))));
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_chd_d 
        = vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_chd_q;
    if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_re) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_chd_d = 1U;
    } else if (vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_fe) {
        vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_chd_d = 0U;
    }
    vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__tx_ready_o 
        = ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_i2s_fsm_q)
            ? ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_re) 
               | (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_fe))
            : (IData)(vlSelfRef.TOPmod__DOT__asic__DOT__li2s__DOT__m__DOT__u_i2s_core__DOT__s_ws_fe));
    vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_3 
        = (1U & ((IData)(vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__u_crc32_04c11db7__DOT____VdfgRegularize_h7082500c_0_2) 
                 ^ (vlSelfRef.TOPmod__DOT__asic__DOT__lcrc__DOT__m__DOT__s_crc32_q 
                    >> 0x0000001bU)));
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_hig_prio_tree__DOT__prio_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_prio_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__id_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [5U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[6U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [6U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[7U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [7U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[8U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [8U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[9U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [9U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000000fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000000fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000010U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000010U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000011U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000011U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000012U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000012U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000013U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000013U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000014U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000014U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000015U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000015U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000016U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000016U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000017U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000017U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000018U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000018U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x00000019U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x00000019U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001aU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001aU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001bU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001bU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001cU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001cU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001dU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001dU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001eU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001eU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0x0000001fU] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0x0000001fU];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[0U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [0U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[1U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [1U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[2U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [2U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[3U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [3U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[4U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [4U];
    vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__u_root_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__PLIC_RECU_GEN_BLOCK__DOT__u_low_prio_tree__DOT__id_i[5U] 
        = vlSelfRef.TOPmod__DOT__asic__DOT__lplic__DOT__m__DOT__u_plic_core__DOT__s_id_in_q
        [5U];
}
