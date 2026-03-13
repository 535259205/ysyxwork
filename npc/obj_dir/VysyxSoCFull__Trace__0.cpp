// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VysyxSoCFull___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsRIO_filtered_2_0_valid));
        bufp->chgBit(oldp+1,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsRIO_filtered_2_1_valid));
        bufp->chgBit(oldp+2,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsBIO_filtered_2_0_valid));
        bufp->chgBit(oldp+3,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsBIO_filtered_2_1_valid));
        bufp->chgIData(oldp+4,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result),32);
        bufp->chgSData(oldp+5,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base),12);
        bufp->chgSData(oldp+6,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr),12);
        bufp->chgCData(oldp+7,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+8,(vlSelfRef.ysyxSoCFull__DOT__divReg));
        bufp->chgIData(oldp+9,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr),32);
        bufp->chgBit(oldp+10,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel));
        bufp->chgBit(oldp+11,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
        bufp->chgBit(oldp+12,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite));
        bufp->chgIData(oldp+13,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata),32);
        bufp->chgCData(oldp+14,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)
                                  ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready)
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb)
                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r))
                                  : 0U)),4);
        bufp->chgBit(oldp+15,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pready));
        bufp->chgIData(oldp+16,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_prdata),32);
        bufp->chgBit(oldp+17,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pslverr));
        bufp->chgBit(oldp+18,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_25) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_25) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgIData(oldp+20,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)),29);
        bufp->chgBit(oldp+21,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_24) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+22,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_24) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+23,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_23) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+24,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_23) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+25,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_22) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+26,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_22) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+27,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_21) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+28,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_21) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+29,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_20) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+30,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_20) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+31,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_19) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+32,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_19) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_18) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+34,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_18) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+35,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_17) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+36,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_17) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+37,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_16) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+38,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_16) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+39,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_15) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+40,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_15) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_14) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_14) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+43,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_13) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_13) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+45,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_12) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+46,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_12) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+47,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_11) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+48,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_11) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+49,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_10) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+50,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_10) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+51,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_9) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+52,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_9) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+53,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_8) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_8) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+55,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_7) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+56,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_7) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+57,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+58,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+59,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+60,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+62,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+63,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_psel));
        bufp->chgBit(oldp+64,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_penable));
        bufp->chgBit(oldp+65,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_penable) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_psel))));
        bufp->chgIData(oldp+66,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_psel)
                                  ? ((((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                        ? ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                            ? ((1U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch)
                                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))
                                            : ((1U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                ? (
                                                   (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                : 0U))
                                        : ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                            ? ((1U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)
                                                : (0x000000c0U 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir)))
                                            : ((1U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                ? (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                                                    >> 8U)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))
                                                : (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))) 
                                      << 0x00000018U) 
                                     | ((0x00ff0000U 
                                         & (((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                              ? ((2U 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                  ? 
                                                 ((1U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch)
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))
                                                  : 
                                                 ((1U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? 
                                                  ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                   : 0U))
                                              : ((2U 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                  ? 
                                                 ((1U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)
                                                   : 
                                                  (0x000000c0U 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir)))
                                                  : 
                                                 ((1U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                                                    >> 8U)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))
                                                   : 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))) 
                                            << 0x00000010U)) 
                                        | ((0x0000ff00U 
                                            & (((4U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                 ? 
                                                ((2U 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                  ? 
                                                 ((1U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch)
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))
                                                  : 
                                                 ((1U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? 
                                                  ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                   : 0U))
                                                 : 
                                                ((2U 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                  ? 
                                                 ((1U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)
                                                   : 
                                                  (0x000000c0U 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir)))
                                                  : 
                                                 ((1U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                                                    >> 8U)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))
                                                   : 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))) 
                                               << 8U)) 
                                           | (0x000000ffU 
                                              & ((4U 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                    ? 
                                                   ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                                  : 
                                                 ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out)))))))))
                                  : 0U)),32);
        bufp->chgBit(oldp+67,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+68,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgIData(oldp+69,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)),30);
        bufp->chgBit(oldp+70,((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state)) 
                                | (8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack))));
        bufp->chgIData(oldp+71,(((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                  ? ((((0x0000ff00U 
                                        & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                           << 8U)) 
                                       | (0x000000ffU 
                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                             >> 8U))) 
                                      << 0x00000010U) 
                                     | ((0x0000ff00U 
                                         & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                            >> 8U)) 
                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                           >> 0x00000018U)))
                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata)),32);
        bufp->chgBit(oldp+72,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+73,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgIData(oldp+74,((0x0fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)),28);
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel))));
        bufp->chgBit(oldp+76,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgIData(oldp+77,((0x03ffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)),26);
        bufp->chgBit(oldp+78,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+79,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
        bufp->chgBit(oldp+81,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+82,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+83,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
        bufp->chgBit(oldp+84,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
        bufp->chgBit(oldp+85,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_7));
        bufp->chgBit(oldp+86,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_8));
        bufp->chgBit(oldp+87,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_9));
        bufp->chgBit(oldp+88,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_10));
        bufp->chgBit(oldp+89,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_11));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_12));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_13));
        bufp->chgBit(oldp+92,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_14));
        bufp->chgBit(oldp+93,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_15));
        bufp->chgBit(oldp+94,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_16));
        bufp->chgBit(oldp+95,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_17));
        bufp->chgBit(oldp+96,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_18));
        bufp->chgBit(oldp+97,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_19));
        bufp->chgBit(oldp+98,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_20));
        bufp->chgBit(oldp+99,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_21));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_22));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_23));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_24));
        bufp->chgBit(oldp+103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_25));
        bufp->chgBit(oldp+104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready));
        bufp->chgBit(oldp+105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awvalid));
        bufp->chgCData(oldp+106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid),4);
        bufp->chgIData(oldp+107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr),32);
        bufp->chgCData(oldp+108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize),3);
        bufp->chgBit(oldp+109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_wvalid));
        bufp->chgIData(oldp+110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata),32);
        bufp->chgCData(oldp+111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb),4);
        bufp->chgBit(oldp+112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bvalid));
        bufp->chgCData(oldp+113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
        bufp->chgCData(oldp+114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bresp),2);
        bufp->chgBit(oldp+115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arready));
        bufp->chgBit(oldp+116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid));
        bufp->chgCData(oldp+117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid),4);
        bufp->chgIData(oldp+118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr),32);
        bufp->chgCData(oldp+119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize),3);
        bufp->chgBit(oldp+120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid));
        bufp->chgCData(oldp+121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
        bufp->chgIData(oldp+122,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_prdata
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
        bufp->chgCData(oldp+123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+129,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pslverr) 
                                  << 1U)),2);
        bufp->chgCData(oldp+130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+132,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full))))));
        bufp->chgBit(oldp+133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid));
        bufp->chgIData(oldp+134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr),32);
        bufp->chgCData(oldp+135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2_axi_aw_payload_size),3);
        bufp->chgBit(oldp+136,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full))))));
        bufp->chgIData(oldp+137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data),32);
        bufp->chgCData(oldp+138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb),4);
        bufp->chgBit(oldp+139,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match))))));
        bufp->chgCData(oldp+140,((7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1] 
                                        >> 2U))),3);
        bufp->chgCData(oldp+141,((3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1])),2);
        bufp->chgBit(oldp+142,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
        bufp->chgBit(oldp+143,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                 ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid))
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid))));
        bufp->chgIData(oldp+144,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                   ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                       ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr)),32);
        bufp->chgCData(oldp+145,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                   ? 0U : 3U)),8);
        bufp->chgCData(oldp+146,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                   ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                       ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size))
                                   : 2U)),3);
        bufp->chgCData(oldp+147,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                   ? 0U : 1U)),2);
        bufp->chgBit(oldp+148,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                 ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready))
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready))));
        bufp->chgBit(oldp+149,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+150,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x00000023U)))),3);
        bufp->chgIData(oldp+151,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 3U))),32);
        bufp->chgCData(oldp+152,((3U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+153,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data))));
        bufp->chgBit(oldp+154,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+155,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x0000002dU)))),3);
        bufp->chgIData(oldp+156,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000dU))),32);
        bufp->chgCData(oldp+157,((0x000000ffU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 5U)))),8);
        bufp->chgCData(oldp+158,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 2U)))),3);
        bufp->chgCData(oldp+159,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))),2);
        bufp->chgBit(oldp+160,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
        bufp->chgIData(oldp+161,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 5U))),32);
        bufp->chgCData(oldp+162,((0x0000000fU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 1U)))),4);
        bufp->chgBit(oldp+163,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data))));
        bufp->chgBit(oldp+164,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
        bufp->chgBit(oldp+165,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
        bufp->chgCData(oldp+166,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x0000002dU)))),3);
        bufp->chgIData(oldp+167,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000dU))),32);
        bufp->chgCData(oldp+168,((0x000000ffU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 5U)))),8);
        bufp->chgCData(oldp+169,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 2U)))),3);
        bufp->chgCData(oldp+170,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))),2);
        bufp->chgBit(oldp+171,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
        bufp->chgBit(oldp+172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
        bufp->chgBit(oldp+173,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+176,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match))));
        bufp->chgBit(oldp+177,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
        bufp->chgCData(oldp+178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1]),5);
        bufp->chgCData(oldp+179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),5);
        bufp->chgCData(oldp+180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),5);
        bufp->chgBit(oldp+181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
        bufp->chgBit(oldp+183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
        bufp->chgBit(oldp+187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
        bufp->chgQData(oldp+188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data),38);
        bufp->chgQData(oldp+190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),38);
        bufp->chgQData(oldp+192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),38);
        bufp->chgBit(oldp+194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
        bufp->chgBit(oldp+196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
        bufp->chgBit(oldp+200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
        bufp->chgBit(oldp+201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data),48);
        bufp->chgQData(oldp+204,((((QData)((IData)(
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                                      ? 0U
                                                      : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr)
                                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr))) 
                                   << 0x0000000dU) 
                                  | (QData)((IData)(
                                                    ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                                        ? 0U
                                                        : 3U) 
                                                      << 5U) 
                                                     | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                                           ? 
                                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                                            ? 0U
                                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size))
                                                           : 2U) 
                                                         << 2U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                                            ? 0U
                                                            : 1U))))))),48);
        bufp->chgQData(oldp+206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),48);
        bufp->chgQData(oldp+208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),48);
        bufp->chgBit(oldp+210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
        bufp->chgBit(oldp+212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
        bufp->chgBit(oldp+216,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full))));
        bufp->chgBit(oldp+217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data),48);
        bufp->chgQData(oldp+220,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr)) 
                                   << 0x0000000dU) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2_axi_aw_payload_size) 
                                                     << 2U))))),48);
        bufp->chgQData(oldp+222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),48);
        bufp->chgQData(oldp+224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),48);
        bufp->chgBit(oldp+226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
        bufp->chgBit(oldp+228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
        bufp->chgBit(oldp+232,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full))));
        bufp->chgBit(oldp+233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_fire));
        bufp->chgQData(oldp+234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data),37);
        bufp->chgQData(oldp+236,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data)) 
                                   << 5U) | (QData)((IData)(
                                                            (1U 
                                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb) 
                                                                << 1U)))))),37);
        bufp->chgQData(oldp+238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),37);
        bufp->chgQData(oldp+240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),37);
        bufp->chgBit(oldp+242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+243,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__maybe_full))))));
        bufp->chgBit(oldp+244,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__maybe_full))))));
        bufp->chgBit(oldp+245,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ptr_match))))));
        bufp->chgCData(oldp+246,((7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1] 
                                        >> 2U))),3);
        bufp->chgCData(oldp+247,((3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1])),2);
        bufp->chgBit(oldp+248,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__maybe_full))))));
        bufp->chgBit(oldp+249,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ptr_match))))));
        bufp->chgCData(oldp+250,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                                >> 0x00000023U)))),3);
        bufp->chgIData(oldp+251,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                          [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                          >> 3U))),32);
        bufp->chgCData(oldp+252,((3U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+253,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                             [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1]))));
        bufp->chgBit(oldp+254,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+255,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x0000002dU)))),3);
        bufp->chgIData(oldp+256,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000dU))),32);
        bufp->chgCData(oldp+257,((0x000000ffU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 5U)))),8);
        bufp->chgCData(oldp+258,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 2U)))),3);
        bufp->chgCData(oldp+259,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))),2);
        bufp->chgBit(oldp+260,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__empty)))));
        bufp->chgIData(oldp+261,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 5U))),32);
        bufp->chgCData(oldp+262,((0x0000000fU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 1U)))),4);
        bufp->chgBit(oldp+263,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data))));
        bufp->chgBit(oldp+264,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__full)))));
        bufp->chgBit(oldp+265,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__empty)))));
        bufp->chgCData(oldp+266,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x0000002dU)))),3);
        bufp->chgIData(oldp+267,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000dU))),32);
        bufp->chgCData(oldp+268,((0x000000ffU & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 5U)))),8);
        bufp->chgCData(oldp+269,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 2U)))),3);
        bufp->chgCData(oldp+270,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))),2);
        bufp->chgBit(oldp+271,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__full)))));
        bufp->chgBit(oldp+272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap));
        bufp->chgBit(oldp+273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+276,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ptr_match))));
        bufp->chgBit(oldp+277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__full));
        bufp->chgCData(oldp+278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__wrap_1]),5);
        bufp->chgCData(oldp+279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),5);
        bufp->chgCData(oldp+280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),5);
        bufp->chgBit(oldp+281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap));
        bufp->chgBit(oldp+283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+286,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ptr_match))));
        bufp->chgBit(oldp+287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__full));
        bufp->chgQData(oldp+288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__wrap_1]),38);
        bufp->chgQData(oldp+290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),38);
        bufp->chgQData(oldp+292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),38);
        bufp->chgBit(oldp+294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap));
        bufp->chgBit(oldp+296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__empty));
        bufp->chgBit(oldp+300,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__maybe_full))));
        bufp->chgBit(oldp+301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data),48);
        bufp->chgQData(oldp+304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),48);
        bufp->chgQData(oldp+306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),48);
        bufp->chgBit(oldp+308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap));
        bufp->chgBit(oldp+310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__empty));
        bufp->chgBit(oldp+314,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__maybe_full))));
        bufp->chgBit(oldp+315,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data),48);
        bufp->chgQData(oldp+318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),48);
        bufp->chgQData(oldp+320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),48);
        bufp->chgBit(oldp+322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap));
        bufp->chgBit(oldp+324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__empty));
        bufp->chgBit(oldp+328,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__maybe_full))));
        bufp->chgBit(oldp+329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data),37);
        bufp->chgQData(oldp+332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),37);
        bufp->chgQData(oldp+334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),37);
        bufp->chgBit(oldp+336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgCData(oldp+337,((7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_1_0)
                                          ? (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 2U))
                                          : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_1_1)
                                                    ? (IData)(
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                               >> 2U))
                                                    : 0U)))),3);
        bufp->chgCData(oldp+338,((7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_muxState_0)
                                          ? (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 2U))
                                          : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_muxState_1)
                                                    ? (IData)(
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                               >> 2U))
                                                    : 0U)))),3);
        bufp->chgCData(oldp+339,((0x0000000fU & (((1U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__io_deq_bits))
                                                   ? (IData)(
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 1U))
                                                   : 0U) 
                                                 | ((2U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__io_deq_bits))
                                                     ? (IData)(
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                >> 1U))
                                                     : 0U)))),4);
        bufp->chgBit(oldp+340,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid));
        bufp->chgCData(oldp+342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awid),4);
        bufp->chgIData(oldp+343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awaddr),32);
        bufp->chgCData(oldp+344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awlen),8);
        bufp->chgCData(oldp+345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awsize),3);
        bufp->chgCData(oldp+346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awburst),2);
        bufp->chgBit(oldp+347,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid));
        bufp->chgIData(oldp+349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wdata),32);
        bufp->chgCData(oldp+350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wstrb),4);
        bufp->chgBit(oldp+351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wlast));
        bufp->chgBit(oldp+352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid));
        bufp->chgCData(oldp+353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid),4);
        bufp->chgCData(oldp+354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp),2);
        bufp->chgBit(oldp+355,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid));
        bufp->chgCData(oldp+357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arid),4);
        bufp->chgIData(oldp+358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_araddr),32);
        bufp->chgCData(oldp+359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arlen),8);
        bufp->chgCData(oldp+360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arsize),3);
        bufp->chgCData(oldp+361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arburst),2);
        bufp->chgBit(oldp+362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid));
        bufp->chgCData(oldp+363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid),4);
        bufp->chgIData(oldp+364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata),32);
        bufp->chgCData(oldp+365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp),2);
        bufp->chgBit(oldp+366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rlast));
        bufp->chgBit(oldp+367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid));
        bufp->chgBit(oldp+368,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))))));
        bufp->chgBit(oldp+369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid));
        bufp->chgBit(oldp+370,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid));
        bufp->chgCData(oldp+372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp),2);
        bufp->chgBit(oldp+373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last));
        bufp->chgBit(oldp+374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid));
        bufp->chgBit(oldp+375,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))))));
        bufp->chgBit(oldp+376,((1U & ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last))) 
                                         << 0x0000000cU) 
                                        | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))) 
                                           << 8U)) 
                                       | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last))) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)))));
        bufp->chgBit(oldp+377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast));
        bufp->chgBit(oldp+378,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
        bufp->chgCData(oldp+382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgBit(oldp+384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
        bufp->chgIData(oldp+388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
        bufp->chgBit(oldp+390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
        bufp->chgSData(oldp+392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgCData(oldp+393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
        bufp->chgIData(oldp+409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr),32);
        bufp->chgCData(oldp+410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len),8);
        bufp->chgCData(oldp+411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst),2);
        bufp->chgQData(oldp+412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgBit(oldp+415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
        bufp->chgIData(oldp+416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr),32);
        bufp->chgCData(oldp+417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len),8);
        bufp->chgCData(oldp+418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst),2);
        bufp->chgQData(oldp+419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgBit(oldp+422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+423,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wlast)))));
        bufp->chgQData(oldp+424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid));
        bufp->chgIData(oldp+428,((0x03ffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr)),26);
        bufp->chgBit(oldp+429,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits))));
        bufp->chgBit(oldp+430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+432,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+433,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
        bufp->chgIData(oldp+434,((0x03ffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)),26);
        bufp->chgBit(oldp+435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+437,(((((0x0000ff00U & 
                                     (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                           >> 0x00000018U)
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                     >> 0x00000010U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                            >> 8U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))),32);
        bufp->chgCData(oldp+438,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+439,((0x00040400U == (0x0007ffffU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 7U)))));
        bufp->chgBit(oldp+440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
        bufp->chgCData(oldp+447,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                 >> 2U))),5);
        bufp->chgIData(oldp+448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data),32);
        bufp->chgCData(oldp+449,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 2U))),5);
        bufp->chgIData(oldp+450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[31]),32);
        bufp->chgBit(oldp+482,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_2_awvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___out_2_awready_T))));
        bufp->chgCData(oldp+483,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_0)
                                    ? (8U | (7U & (IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x0000002dU))))
                                    : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_1)
                                              ? (7U 
                                                 & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))
                                              : 0U))),4);
        bufp->chgIData(oldp+484,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_0)
                                    ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x0000000dU))
                                    : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_1)
                                              ? (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000000dU))
                                              : 0U))),32);
        bufp->chgCData(oldp+485,((0x000000ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_0)
                                                   ? (IData)(
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 5U))
                                                   : 0U) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_1)
                                                     ? (IData)(
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                >> 5U))
                                                     : 0U)))),8);
        bufp->chgCData(oldp+486,((7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_0)
                                          ? (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 2U))
                                          : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_1)
                                                    ? (IData)(
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                               >> 2U))
                                                    : 0U)))),3);
        bufp->chgCData(oldp+487,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_0)
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data)
                                          : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_1)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data)
                                                    : 0U)))),2);
        bufp->chgBit(oldp+488,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_2_wvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_valid))));
        bufp->chgIData(oldp+489,((((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_bits))
                                    ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 5U))
                                    : 0U) | ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_bits))
                                              ? (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 5U))
                                              : 0U))),32);
        bufp->chgCData(oldp+490,((0x0000000fU & (((1U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_bits))
                                                   ? (IData)(
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 1U))
                                                   : 0U) 
                                                 | ((2U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_bits))
                                                     ? (IData)(
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                                                >> 1U))
                                                     : 0U)))),4);
        bufp->chgBit(oldp+491,((1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_bits) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data)) 
                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_bits) 
                                          >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data))))));
        bufp->chgBit(oldp+492,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_2)
                                 : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_2_valid)) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_2_valid))))));
        bufp->chgCData(oldp+493,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                    ? (8U | (7U & (IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 0x0000002dU))))
                                    : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                              ? (7U 
                                                 & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                            >> 0x0000002dU)))
                                              : 0U))),4);
        bufp->chgIData(oldp+494,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                    ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 0x0000000dU))
                                    : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                              ? (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000000dU))
                                              : 0U))),32);
        bufp->chgCData(oldp+495,((0x000000ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                   ? (IData)(
                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 5U))
                                                   : 0U) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                     ? (IData)(
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                                >> 5U))
                                                     : 0U)))),8);
        bufp->chgCData(oldp+496,((7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                          ? (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 2U))
                                          : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                    ? (IData)(
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                               >> 2U))
                                                    : 0U)))),3);
        bufp->chgCData(oldp+497,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data)
                                          : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data)
                                                    : 0U)))),2);
        bufp->chgBit(oldp+498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_2_wvalid));
        bufp->chgBit(oldp+499,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_2) 
                                          >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
        bufp->chgBit(oldp+500,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_2)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)))));
        bufp->chgBit(oldp+501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_2_awvalid));
        bufp->chgBit(oldp+502,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_readys) 
                                          >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_state_1)))));
        bufp->chgBit(oldp+503,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_readys)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_state_0)))));
        bufp->chgBit(oldp+504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_1_wvalid));
        bufp->chgBit(oldp+505,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                          >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1_1)))));
        bufp->chgBit(oldp+506,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1_0)))));
        bufp->chgBit(oldp+507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_1_awvalid));
        bufp->chgBit(oldp+508,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_readys) 
                                          >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_state_1)))));
        bufp->chgBit(oldp+509,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_readys)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_state_0)))));
        bufp->chgBit(oldp+510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_0_wvalid));
        bufp->chgBit(oldp+511,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                          >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1)))));
        bufp->chgBit(oldp+512,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_0)))));
        bufp->chgBit(oldp+513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_0_awvalid));
        bufp->chgBit(oldp+514,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_readys) 
                                          >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_state_1)))));
        bufp->chgBit(oldp+515,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_readys)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_state_0)))));
        bufp->chgBit(oldp+516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+517,((8U == (0x0000000fU 
                                       & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))));
        bufp->chgBit(oldp+518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+519,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_1_0));
        bufp->chgBit(oldp+520,((8U == (0x0000000fU 
                                       & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))));
        bufp->chgBit(oldp+521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_1_2));
        bufp->chgBit(oldp+522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+523,((8U == (0x0000000fU 
                                       & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))));
        bufp->chgBit(oldp+524,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_1_0));
        bufp->chgBit(oldp+526,((8U == (0x0000000fU 
                                       & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 0x00000029U))))));
        bufp->chgBit(oldp+527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_1_2));
        bufp->chgCData(oldp+528,((8U | (7U & (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x0000002dU))))),4);
        bufp->chgCData(oldp+529,((8U | (7U & (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x0000002dU))))),4);
        bufp->chgCData(oldp+530,((0x000000ffU & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                             >> 0x0000002dU)))))),8);
        bufp->chgCData(oldp+531,((0x000000ffU & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                             >> 0x0000002dU)))))),8);
        bufp->chgCData(oldp+532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag),2);
        bufp->chgCData(oldp+533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag),2);
        bufp->chgCData(oldp+534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
        bufp->chgCData(oldp+535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last),2);
        bufp->chgCData(oldp+536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
        bufp->chgCData(oldp+537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last),2);
        bufp->chgCData(oldp+538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
        bufp->chgCData(oldp+539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last),2);
        bufp->chgCData(oldp+540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
        bufp->chgCData(oldp+541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last),2);
        bufp->chgCData(oldp+542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
        bufp->chgCData(oldp+543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last),2);
        bufp->chgCData(oldp+544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
        bufp->chgCData(oldp+545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last),2);
        bufp->chgCData(oldp+546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
        bufp->chgCData(oldp+547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last),2);
        bufp->chgCData(oldp+548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
        bufp->chgCData(oldp+549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last),2);
        bufp->chgCData(oldp+550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
        bufp->chgCData(oldp+551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last),2);
        bufp->chgCData(oldp+552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
        bufp->chgCData(oldp+553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last),2);
        bufp->chgCData(oldp+554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
        bufp->chgCData(oldp+555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last),2);
        bufp->chgCData(oldp+556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
        bufp->chgCData(oldp+557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last),2);
        bufp->chgCData(oldp+558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
        bufp->chgCData(oldp+559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last),2);
        bufp->chgCData(oldp+560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
        bufp->chgCData(oldp+561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last),2);
        bufp->chgCData(oldp+562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
        bufp->chgCData(oldp+563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last),2);
        bufp->chgCData(oldp+564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
        bufp->chgCData(oldp+565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last),2);
        bufp->chgBit(oldp+566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
        bufp->chgBit(oldp+568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgBit(oldp+569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
        bufp->chgCData(oldp+571,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x0000002dU)))),4);
        bufp->chgCData(oldp+572,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x0000002dU)))),4);
        bufp->chgCData(oldp+573,((0x000000ffU & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                             >> 0x0000002dU)))))),8);
        bufp->chgCData(oldp+574,((0x000000ffU & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                             >> 0x0000002dU)))))),8);
        bufp->chgBit(oldp+575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count_1));
        bufp->chgBit(oldp+576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count_1));
        bufp->chgBit(oldp+577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count_1));
        bufp->chgBit(oldp+578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count_1));
        bufp->chgBit(oldp+579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count_1));
        bufp->chgBit(oldp+580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count_1));
        bufp->chgBit(oldp+581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count_1));
        bufp->chgBit(oldp+582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count_1));
        bufp->chgBit(oldp+583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count_1));
        bufp->chgBit(oldp+584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count_1));
        bufp->chgBit(oldp+585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count_1));
        bufp->chgBit(oldp+586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count_1));
        bufp->chgBit(oldp+587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count_1));
        bufp->chgBit(oldp+588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count_1));
        bufp->chgBit(oldp+589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count_1));
        bufp->chgBit(oldp+590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count_1));
        bufp->chgBit(oldp+591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_1));
        bufp->chgBit(oldp+592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_awvalid));
        bufp->chgBit(oldp+593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_enq_valid));
        bufp->chgBit(oldp+594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_wvalid));
        bufp->chgBit(oldp+595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_2));
        bufp->chgBit(oldp+596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_0_awready));
        bufp->chgBit(oldp+597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_0_wready));
        bufp->chgBit(oldp+599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_3));
        bufp->chgBit(oldp+600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__io_enq_valid));
        bufp->chgBit(oldp+601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched_4));
        bufp->chgBit(oldp+602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_2_awready));
        bufp->chgBit(oldp+603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_enq_valid));
        bufp->chgBit(oldp+604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_2_wready));
        bufp->chgBit(oldp+605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_0_valid));
        bufp->chgBit(oldp+606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_valid));
        bufp->chgBit(oldp+607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_2_valid));
        bufp->chgBit(oldp+608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_0_valid));
        bufp->chgBit(oldp+609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_1_valid));
        bufp->chgBit(oldp+610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_2_valid));
        bufp->chgBit(oldp+611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_0_valid));
        bufp->chgBit(oldp+612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_valid));
        bufp->chgBit(oldp+613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_2_valid));
        bufp->chgBit(oldp+614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_0_valid));
        bufp->chgBit(oldp+615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_1_valid));
        bufp->chgBit(oldp+616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_2_valid));
        bufp->chgBit(oldp+617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsRIO_filtered_0_valid));
        bufp->chgBit(oldp+618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsRIO_filtered_1_valid));
        bufp->chgBit(oldp+619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsBIO_filtered_0_valid));
        bufp->chgBit(oldp+620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsBIO_filtered_1_valid));
        bufp->chgBit(oldp+621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_idle));
        bufp->chgBit(oldp+622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_anyValid));
        bufp->chgCData(oldp+623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_valid),2);
        bufp->chgCData(oldp+624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_mask),2);
        bufp->chgCData(oldp+625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_unready),4);
        bufp->chgCData(oldp+626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_readys_readys),2);
        bufp->chgBit(oldp+627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_0));
        bufp->chgBit(oldp+628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_winner_1));
        bufp->chgBit(oldp+629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_state_0));
        bufp->chgBit(oldp+630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_state_1));
        bufp->chgBit(oldp+631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_0));
        bufp->chgBit(oldp+632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0_io_enq_bits_muxState_1));
        bufp->chgBit(oldp+633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle));
        bufp->chgBit(oldp+634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
        bufp->chgCData(oldp+637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_0));
        bufp->chgBit(oldp+640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1));
        bufp->chgBit(oldp+641,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_0));
        bufp->chgBit(oldp+642,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1));
        bufp->chgBit(oldp+643,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_0));
        bufp->chgBit(oldp+644,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_1));
        bufp->chgBit(oldp+645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_idle));
        bufp->chgBit(oldp+646,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_anyValid));
        bufp->chgCData(oldp+647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_valid),2);
        bufp->chgCData(oldp+648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_mask),2);
        bufp->chgCData(oldp+649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_unready),4);
        bufp->chgCData(oldp+650,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_readys_readys),2);
        bufp->chgBit(oldp+651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_winner_0));
        bufp->chgBit(oldp+652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_winner_1));
        bufp->chgBit(oldp+653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_state_0));
        bufp->chgBit(oldp+654,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_state_1));
        bufp->chgBit(oldp+655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_muxState_0));
        bufp->chgBit(oldp+656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1_io_enq_bits_muxState_1));
        bufp->chgBit(oldp+657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1));
        bufp->chgBit(oldp+658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
        bufp->chgCData(oldp+660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
        bufp->chgCData(oldp+661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
        bufp->chgCData(oldp+662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
        bufp->chgBit(oldp+663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1_0));
        bufp->chgBit(oldp+664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_1_1));
        bufp->chgBit(oldp+665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1_0));
        bufp->chgBit(oldp+666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1_1));
        bufp->chgBit(oldp+667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_1_0));
        bufp->chgBit(oldp+668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_1_1));
        bufp->chgBit(oldp+669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_idle));
        bufp->chgBit(oldp+670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_anyValid));
        bufp->chgCData(oldp+671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_valid),2);
        bufp->chgCData(oldp+672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_mask),2);
        bufp->chgCData(oldp+673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_unready),4);
        bufp->chgCData(oldp+674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_readys_readys),2);
        bufp->chgBit(oldp+675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_winner_0));
        bufp->chgBit(oldp+676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_winner_1));
        bufp->chgBit(oldp+677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_state_0));
        bufp->chgBit(oldp+678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_state_1));
        bufp->chgBit(oldp+679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_0));
        bufp->chgBit(oldp+680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2_io_enq_bits_muxState_1));
        bufp->chgBit(oldp+681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
        bufp->chgBit(oldp+682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_2));
        bufp->chgCData(oldp+683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_2),2);
        bufp->chgCData(oldp+684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_2),2);
        bufp->chgCData(oldp+685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_2),4);
        bufp->chgCData(oldp+686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_2),2);
        bufp->chgBit(oldp+687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_0));
        bufp->chgBit(oldp+688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
        bufp->chgBit(oldp+689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
        bufp->chgBit(oldp+690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
        bufp->chgBit(oldp+691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
        bufp->chgBit(oldp+692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
        bufp->chgBit(oldp+693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
        bufp->chgCData(oldp+694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_3),3);
        bufp->chgBit(oldp+695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
        bufp->chgBit(oldp+696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
        bufp->chgBit(oldp+697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_2));
        bufp->chgBit(oldp+698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4));
        bufp->chgCData(oldp+699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_4),3);
        bufp->chgBit(oldp+700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0));
        bufp->chgBit(oldp+701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1));
        bufp->chgBit(oldp+702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2));
        bufp->chgBit(oldp+703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5));
        bufp->chgCData(oldp+704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_5),3);
        bufp->chgBit(oldp+705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_0));
        bufp->chgBit(oldp+706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_1));
        bufp->chgBit(oldp+707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_2));
        bufp->chgBit(oldp+708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6));
        bufp->chgCData(oldp+709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_6),3);
        bufp->chgBit(oldp+710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_0));
        bufp->chgBit(oldp+711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_1));
        bufp->chgBit(oldp+712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_2));
        bufp->chgBit(oldp+713,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
        bufp->chgCData(oldp+714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),3);
        bufp->chgBit(oldp+715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgCData(oldp+716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits),3);
        bufp->chgBit(oldp+717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+726,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__full)))));
        bufp->chgCData(oldp+727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__W0_data),3);
        bufp->chgBit(oldp+728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_deq_valid));
        bufp->chgCData(oldp+729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_deq_bits),3);
        bufp->chgBit(oldp+730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap));
        bufp->chgBit(oldp+731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1));
        bufp->chgBit(oldp+732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__maybe_full));
        bufp->chgBit(oldp+733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ptr_match));
        bufp->chgBit(oldp+734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__empty));
        bufp->chgBit(oldp+735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__full));
        bufp->chgCData(oldp+736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__wrap_1]),3);
        bufp->chgCData(oldp+737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+739,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__full)))));
        bufp->chgCData(oldp+740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__W0_data),2);
        bufp->chgBit(oldp+741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__io_deq_valid));
        bufp->chgCData(oldp+743,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__io_deq_bits),2);
        bufp->chgBit(oldp+744,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap));
        bufp->chgBit(oldp+745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1));
        bufp->chgBit(oldp+746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__maybe_full));
        bufp->chgBit(oldp+747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ptr_match));
        bufp->chgBit(oldp+748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__empty));
        bufp->chgBit(oldp+749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__full));
        bufp->chgBit(oldp+750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__do_deq));
        bufp->chgBit(oldp+751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__wrap_1]),2);
        bufp->chgCData(oldp+753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_0__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+755,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__full)))));
        bufp->chgCData(oldp+756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__W0_data),2);
        bufp->chgBit(oldp+757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__io_deq_valid));
        bufp->chgCData(oldp+758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__io_deq_bits),2);
        bufp->chgBit(oldp+759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap));
        bufp->chgBit(oldp+760,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1));
        bufp->chgBit(oldp+761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__maybe_full));
        bufp->chgBit(oldp+762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ptr_match));
        bufp->chgBit(oldp+763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__empty));
        bufp->chgBit(oldp+764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__full));
        bufp->chgCData(oldp+765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__wrap_1]),2);
        bufp->chgCData(oldp+766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+768,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__full)))));
        bufp->chgCData(oldp+769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__W0_data),2);
        bufp->chgBit(oldp+770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_ready));
        bufp->chgBit(oldp+771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_valid));
        bufp->chgCData(oldp+772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__io_deq_bits),2);
        bufp->chgBit(oldp+773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap));
        bufp->chgBit(oldp+774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1));
        bufp->chgBit(oldp+775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__maybe_full));
        bufp->chgBit(oldp+776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ptr_match));
        bufp->chgBit(oldp+777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__empty));
        bufp->chgBit(oldp+778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__full));
        bufp->chgBit(oldp+779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__do_deq));
        bufp->chgBit(oldp+780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__wrap_1]),2);
        bufp->chgCData(oldp+782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_2__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid));
        bufp->chgBit(oldp+785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid));
        bufp->chgBit(oldp+786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1));
        bufp->chgSData(oldp+790,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)))),16);
        bufp->chgSData(oldp+791,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)))),16);
        bufp->chgSData(oldp+792,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)))),16);
        bufp->chgSData(oldp+793,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)))),16);
        bufp->chgBit(oldp+794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+796,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+797,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+798,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+803,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+805,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+806,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+807,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+812,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgBit(oldp+830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_2));
        bufp->chgBit(oldp+831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),2);
        bufp->chgCData(oldp+833,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),2);
        bufp->chgCData(oldp+834,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),4);
        bufp->chgCData(oldp+835,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),2);
        bufp->chgBit(oldp+836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_2_1));
        bufp->chgBit(oldp+838,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_2_0));
        bufp->chgBit(oldp+839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_2_1));
        bufp->chgBit(oldp+840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_0));
        bufp->chgBit(oldp+841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_2_1));
        bufp->chgBit(oldp+842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
        bufp->chgBit(oldp+843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),2);
        bufp->chgCData(oldp+845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),2);
        bufp->chgCData(oldp+846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),4);
        bufp->chgCData(oldp+847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),2);
        bufp->chgBit(oldp+848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_0));
        bufp->chgBit(oldp+849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+854,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgCData(oldp+855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),2);
        bufp->chgBit(oldp+856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgCData(oldp+857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits),2);
        bufp->chgBit(oldp+858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),2);
        bufp->chgCData(oldp+865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+867,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+871,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+875,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+879,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+883,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+887,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+889,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+890,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+891,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+892,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+895,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+899,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+903,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+907,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+911,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+915,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+919,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+923,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+927,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+931,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+933,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+935,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+936,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+937,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+939,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+943,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+944,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+947,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+951,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+955,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+959,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+961,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+963,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+964,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+965,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+967,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+971,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+972,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+975,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+979,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+981,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+982,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+983,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+984,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+985,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+986,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+987,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+988,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+989,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+990,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+991,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+994,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgCData(oldp+995,((7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1] 
                                        >> 2U))),4);
        bufp->chgCData(oldp+996,((7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x00000023U)))),4);
        bufp->chgBit(oldp+997,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid));
        bufp->chgIData(oldp+998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr),32);
        bufp->chgBit(oldp+999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready));
        bufp->chgIData(oldp+1000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code),32);
        bufp->chgIData(oldp+1001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt),32);
        bufp->chgBit(oldp+1002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__finish));
        bufp->chgIData(oldp+1003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd),32);
        bufp->chgCData(oldp+1004,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 7U))),5);
        bufp->chgBit(oldp+1005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild));
        bufp->chgCData(oldp+1006,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 0x0000000fU))),5);
        bufp->chgCData(oldp+1007,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 0x00000014U))),5);
        bufp->chgIData(oldp+1008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC),32);
        bufp->chgBit(oldp+1009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild));
        bufp->chgIData(oldp+1010,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data),32);
        bufp->chgBit(oldp+1011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild));
        bufp->chgSData(oldp+1012,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                   >> 0x00000014U)),12);
        bufp->chgBit(oldp+1013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall));
        bufp->chgBit(oldp+1014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret));
        bufp->chgBit(oldp+1015,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid));
        bufp->chgIData(oldp+1016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr),32);
        bufp->chgCData(oldp+1017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size),3);
        bufp->chgBit(oldp+1018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready));
        bufp->chgBit(oldp+1019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i));
        bufp->chgIData(oldp+1020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data),32);
        bufp->chgIData(oldp+1021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc),32);
        bufp->chgIData(oldp+1022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1),32);
        bufp->chgIData(oldp+1023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2),32);
        bufp->chgBit(oldp+1024,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1))));
        bufp->chgBit(oldp+1025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid));
        bufp->chgIData(oldp+1026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data),32);
        bufp->chgCData(oldp+1027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_id),4);
        bufp->chgBit(oldp+1028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_last));
        bufp->chgBit(oldp+1029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid));
        bufp->chgCData(oldp+1030,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_id),4);
        bufp->chgCData(oldp+1031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_resp),2);
        bufp->chgBit(oldp+1032,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full))))));
        bufp->chgBit(oldp+1033,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)) 
                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty))))));
        bufp->chgIData(oldp+1034,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                    ? 0U : (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                    >> 3U)))),32);
        bufp->chgCData(oldp+1035,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                    ? 0U : (7U & (IData)(
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                          >> 0x00000023U))))),4);
        bufp->chgCData(oldp+1036,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                    ? 0U : (3U & (IData)(
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                          >> 1U))))),2);
        bufp->chgBit(oldp+1037,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data)))));
        bufp->chgBit(oldp+1038,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                     ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1))
                                     : (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full))))));
        bufp->chgBit(oldp+1039,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid)
                                     : (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty))))));
        bufp->chgIData(oldp+1040,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_payload_data),32);
        bufp->chgCData(oldp+1041,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_id)
                                        : (7U & (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x00000023U))))
                                    : 0U)),4);
        bufp->chgCData(oldp+1042,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                        ? 0U : (3U 
                                                & (IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                           >> 1U))))
                                    : 0U)),2);
        bufp->chgBit(oldp+1043,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_last)
                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data)))));
        bufp->chgBit(oldp+1044,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_valid));
        bufp->chgIData(oldp+1045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_addr),32);
        bufp->chgCData(oldp+1046,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_id),4);
        bufp->chgCData(oldp+1047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len),8);
        bufp->chgCData(oldp+1048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_size),3);
        bufp->chgCData(oldp+1049,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_burst),2);
        bufp->chgBit(oldp+1050,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_r_ready));
        bufp->chgBit(oldp+1051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0));
        bufp->chgBit(oldp+1052,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__vaild));
        bufp->chgBit(oldp+1053,(((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1054,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_4));
        bufp->chgBit(oldp+1055,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_fire));
        bufp->chgBit(oldp+1056,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid));
        bufp->chgBit(oldp+1057,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)) 
                                       | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat))))));
        bufp->chgIData(oldp+1058,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result
                                    : 0U)),32);
        bufp->chgCData(oldp+1059,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id)
                                    : 0U)),4);
        bufp->chgCData(oldp+1060,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size)
                                    : 0U)),3);
        bufp->chgCData(oldp+1061,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst)
                                    : 0U)),2);
        bufp->chgBit(oldp+1062,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid)))));
        bufp->chgBit(oldp+1063,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_valid))));
        bufp->chgBit(oldp+1064,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1));
        bufp->chgBit(oldp+1065,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_payload_last_1));
        bufp->chgIData(oldp+1066,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result_1
                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_addr)),32);
        bufp->chgCData(oldp+1067,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id_1)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_id))),4);
        bufp->chgCData(oldp+1068,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_size))),3);
        bufp->chgCData(oldp+1069,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst_1)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_burst))),2);
        bufp->chgBit(oldp+1070,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1));
        bufp->chgCData(oldp+1071,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1),8);
        bufp->chgCData(oldp+1072,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1),8);
        bufp->chgIData(oldp+1073,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1),32);
        bufp->chgCData(oldp+1074,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id_1),4);
        bufp->chgCData(oldp+1075,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1),3);
        bufp->chgCData(oldp+1076,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst_1),2);
        bufp->chgBit(oldp+1077,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1))));
        bufp->chgCData(oldp+1078,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))),2);
        bufp->chgIData(oldp+1079,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result_1),32);
        bufp->chgIData(oldp+1080,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1 
                                   >> 0x0000000cU)),20);
        bufp->chgCData(oldp+1081,((((2U == (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                                    << 2U) | (((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1)))))),3);
        bufp->chgSData(oldp+1082,((((1U < (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                                    << 1U) | (0U < 
                                              (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))))),12);
        bufp->chgSData(oldp+1083,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1),12);
        bufp->chgSData(oldp+1084,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1),12);
        bufp->chgCData(oldp+1085,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1),3);
        bufp->chgIData(oldp+1086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr),32);
        bufp->chgCData(oldp+1087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_size),3);
        bufp->chgCData(oldp+1088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_burst),2);
        bufp->chgBit(oldp+1089,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_r_ready))));
        bufp->chgIData(oldp+1090,((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr)),32);
        bufp->chgIData(oldp+1091,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                    ? (0xfffffffcU 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result)
                                    : 0U)),32);
        bufp->chgIData(oldp+1092,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L),32);
        bufp->chgIData(oldp+1093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H),32);
        bufp->chgIData(oldp+1094,((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle)),32);
        bufp->chgIData(oldp+1095,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle 
                                           >> 0x00000020U))),32);
        bufp->chgQData(oldp+1096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle),64);
        bufp->chgIData(oldp+1098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mstatus),32);
        bufp->chgIData(oldp+1099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcause),32);
        bufp->chgIData(oldp+1100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc),32);
        bufp->chgIData(oldp+1101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec),32);
        bufp->chgIData(oldp+1102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt),32);
        bufp->chgIData(oldp+1103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt),32);
        bufp->chgIData(oldp+1104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt),32);
        bufp->chgBit(oldp+1105,(((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_wantStart));
        bufp->chgBit(oldp+1107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_grp_flag));
        bufp->chgCData(oldp+1108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg),3);
        bufp->chgCData(oldp+1109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext),3);
        bufp->chgBit(oldp+1110,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1111,(((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1112,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1113,(((3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1114,(((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1115,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1116,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1117,(((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1118,(((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                 & (5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgIData(oldp+1119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg_string),32);
        bufp->chgIData(oldp+1120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext_string),32);
        bufp->chgCData(oldp+1121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size),4);
        bufp->chgBit(oldp+1122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ErrorReg));
        bufp->chgBit(oldp+1123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak));
        bufp->chgIData(oldp+1124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code),32);
        bufp->chgIData(oldp+1125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I),32);
        bufp->chgIData(oldp+1126,((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)),32);
        bufp->chgIData(oldp+1127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_S),32);
        bufp->chgIData(oldp+1128,((((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                >> 0x0000001fU))) 
                                    << 0x0000000dU) 
                                   | ((((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                               >> 0x0000001eU)) 
                                        | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                 >> 7U))) 
                                       << 0x0000000bU) 
                                      | ((0x000007e0U 
                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                             >> 0x00000014U)) 
                                         | (0x0000001eU 
                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                               >> 7U)))))),32);
        bufp->chgIData(oldp+1129,(((((0x00000ffeU & 
                                      ((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                   >> 0x0000001fU))) 
                                       << 1U)) | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 0x0000001fU)) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                 >> 0x00000014U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                            >> 0x00000014U))))),32);
        bufp->chgBit(oldp+1130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag));
        bufp->chgBit(oldp+1131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag));
        bufp->chgBit(oldp+1132,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when) 
                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when_1)
                                        ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1))
                                        : (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))))));
        bufp->chgIData(oldp+1133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc),32);
        bufp->chgIData(oldp+1134,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                  >> 0x0000000fU))),32);
        bufp->chgIData(oldp+1135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0),32);
        bufp->chgIData(oldp+1136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1),32);
        bufp->chgIData(oldp+1137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2),32);
        bufp->chgIData(oldp+1138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3),32);
        bufp->chgIData(oldp+1139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4),32);
        bufp->chgIData(oldp+1140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5),32);
        bufp->chgIData(oldp+1141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6),32);
        bufp->chgIData(oldp+1142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7),32);
        bufp->chgIData(oldp+1143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8),32);
        bufp->chgIData(oldp+1144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9),32);
        bufp->chgIData(oldp+1145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10),32);
        bufp->chgIData(oldp+1146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11),32);
        bufp->chgIData(oldp+1147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12),32);
        bufp->chgIData(oldp+1148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13),32);
        bufp->chgIData(oldp+1149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14),32);
        bufp->chgIData(oldp+1150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15),32);
        bufp->chgIData(oldp+1151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16),32);
        bufp->chgIData(oldp+1152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17),32);
        bufp->chgIData(oldp+1153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18),32);
        bufp->chgIData(oldp+1154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19),32);
        bufp->chgIData(oldp+1155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20),32);
        bufp->chgIData(oldp+1156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21),32);
        bufp->chgIData(oldp+1157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22),32);
        bufp->chgIData(oldp+1158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23),32);
        bufp->chgIData(oldp+1159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24),32);
        bufp->chgIData(oldp+1160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25),32);
        bufp->chgIData(oldp+1161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26),32);
        bufp->chgIData(oldp+1162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27),32);
        bufp->chgIData(oldp+1163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28),32);
        bufp->chgIData(oldp+1164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29),32);
        bufp->chgIData(oldp+1165,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30),32);
        bufp->chgIData(oldp+1166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31),32);
        bufp->chgBit(oldp+1167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__rd_vaild));
        bufp->chgBit(oldp+1168,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_valid));
        bufp->chgBit(oldp+1169,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid));
        bufp->chgBit(oldp+1170,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready));
        bufp->chgIData(oldp+1171,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem
                                  [(0x0000000fU & (
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(5,5,32, 
                                                                    (3U 
                                                                     & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                                        >> 4U)), 2U)) 
                                                   + 
                                                   (3U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                       >> 2U))))]),32);
        bufp->chgIData(oldp+1172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt),32);
        bufp->chgBit(oldp+1173,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0));
        bufp->chgBit(oldp+1174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1));
        bufp->chgBit(oldp+1175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2));
        bufp->chgBit(oldp+1176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3));
        bufp->chgCData(oldp+1177,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1178,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                         >> 4U))),2);
        bufp->chgIData(oldp+1179,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                   >> 6U)),26);
        bufp->chgCData(oldp+1180,((0x0000001fU & (VL_SHIFTL_III(5,5,32, 
                                                                (3U 
                                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                                    >> 4U)), 2U) 
                                                  + 
                                                  (3U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                      >> 2U))))),5);
        bufp->chgIData(oldp+1181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag),26);
        bufp->chgBit(oldp+1182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_wantStart));
        bufp->chgBit(oldp+1183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_start_flag));
        bufp->chgCData(oldp+1184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt),3);
        bufp->chgBit(oldp+1185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag));
        bufp->chgCData(oldp+1186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg),2);
        bufp->chgCData(oldp+1187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext),2);
        bufp->chgBit(oldp+1188,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full))) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid))));
        bufp->chgBit(oldp+1189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__axi_r_fire));
        bufp->chgBit(oldp+1190,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                 & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1191,(((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                 & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1192,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                 & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1193,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                 & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1194,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                 & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1195,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                 & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgQData(oldp+1196,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))
                                    ? 0x000000424f4f5420ULL
                                    : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))
                                        ? 0x0000007374617274ULL
                                        : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))
                                            ? 0x0000006178695f72ULL
                                            : 0x0000003f3f3f3f3fULL)))),40);
        bufp->chgQData(oldp+1198,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext))
                                    ? 0x000000424f4f5420ULL
                                    : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext))
                                        ? 0x0000007374617274ULL
                                        : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext))
                                            ? 0x0000006178695f72ULL
                                            : 0x0000003f3f3f3f3fULL)))),40);
        bufp->chgIData(oldp+1200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[0]),32);
        bufp->chgIData(oldp+1201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[1]),32);
        bufp->chgIData(oldp+1202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[2]),32);
        bufp->chgIData(oldp+1203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[3]),32);
        bufp->chgIData(oldp+1204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[4]),32);
        bufp->chgIData(oldp+1205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[5]),32);
        bufp->chgIData(oldp+1206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[6]),32);
        bufp->chgIData(oldp+1207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[7]),32);
        bufp->chgIData(oldp+1208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[8]),32);
        bufp->chgIData(oldp+1209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[9]),32);
        bufp->chgIData(oldp+1210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[10]),32);
        bufp->chgIData(oldp+1211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[11]),32);
        bufp->chgIData(oldp+1212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[12]),32);
        bufp->chgIData(oldp+1213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[13]),32);
        bufp->chgIData(oldp+1214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[14]),32);
        bufp->chgIData(oldp+1215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[15]),32);
        bufp->chgIData(oldp+1216,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild)
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC
                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt)),32);
        bufp->chgBit(oldp+1217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag));
        bufp->chgBit(oldp+1218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag));
        bufp->chgIData(oldp+1219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__code_reg),32);
        bufp->chgBit(oldp+1220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT___zz_when));
        bufp->chgBit(oldp+1221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__clint_en));
        bufp->chgBit(oldp+1222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+1226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+1227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+1228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+1229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+1230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+1231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgCData(oldp+1232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state),4);
        bufp->chgCData(oldp+1233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state),2);
        bufp->chgBit(oldp+1234,((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state))));
        bufp->chgBit(oldp+1235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack));
        bufp->chgIData(oldp+1236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_paddr),32);
        bufp->chgBit(oldp+1237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_penable));
        bufp->chgBit(oldp+1238,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)
                                  : (8U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state)))));
        bufp->chgIData(oldp+1239,(((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                    ? 0x00003540U : 
                                   ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                     ? 1U : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                              ? 0U : 
                                             ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                               ? (0x03000000U 
                                                  | (0x00fffffcU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr))
                                               : ((2U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                                   ? 0U
                                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwdata)))))),32);
        bufp->chgCData(oldp+1240,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__in_pwrite)
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awready)
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb)
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r))
                                        : 0U) : 0x0fU)),4);
        bufp->chgBit(oldp+1241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready));
        bufp->chgIData(oldp+1242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata),32);
        bufp->chgBit(oldp+1243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out));
        bufp->chgIData(oldp+1244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr),32);
        bufp->chgBit(oldp+1245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_psel));
        bufp->chgBit(oldp+1246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_penable));
        bufp->chgCData(oldp+1247,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pprot)
                                    : 1U)),3);
        bufp->chgBit(oldp+1248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite));
        bufp->chgIData(oldp+1249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in),32);
        bufp->chgCData(oldp+1250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel),4);
        bufp->chgBit(oldp+1251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i));
        bufp->chgIData(oldp+1252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_prdata_i),32);
        bufp->chgCData(oldp+1253,((0x0000001fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr)),5);
        bufp->chgSData(oldp+1254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+1255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+1256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgIData(oldp+1257,(((0U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                 >> 2U)))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                                    : ((1U == (7U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                >> 2U)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                                        : ((2U == (7U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                      >> 2U)))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                    >> 2U)))
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                        >> 2U)))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                          >> 2U)))
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                                      : 0U)))))))),32);
        bufp->chgWData(oldp+1258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+1262,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 9U))));
        bufp->chgBit(oldp+1263,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1264,((0x0000007fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+1265,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 8U))));
        bufp->chgBit(oldp+1266,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000bU))));
        bufp->chgBit(oldp+1267,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000cU))));
        bufp->chgBit(oldp+1268,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000dU))));
        bufp->chgBit(oldp+1269,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x00000014U == 
                                    (0x0000001cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr)))));
        bufp->chgBit(oldp+1270,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x00000010U == 
                                    (0x0000001cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr)))));
        bufp->chgCData(oldp+1271,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                      & (0x0000000cU 
                                         == (0x0000001cU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))) 
                                     << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                                & (8U 
                                                   == 
                                                   (0x0000001cU 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                        & (4U == (0x0000001cU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr))) 
                                       << 1U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                                 & (0U 
                                                    == 
                                                    (0x0000001cU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr)))))),4);
        bufp->chgBit(oldp+1272,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x00000018U == 
                                    (0x0000001cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr)))));
        bufp->chgBit(oldp+1273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+1274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+1275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+1276,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
        bufp->chgSData(oldp+1277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+1278,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+1279,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+1280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+1281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+1282,((0x000000ffU & ((0x00000800U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                   ? 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                   - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                   : 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                   - (IData)(1U))))),8);
        bufp->chgCData(oldp+1283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+1284,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                 & ((0x00000400U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)))));
        bufp->chgIData(oldp+1285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr),32);
        bufp->chgBit(oldp+1286,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_psel));
        bufp->chgBit(oldp+1287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_penable));
        bufp->chgCData(oldp+1288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pprot),3);
        bufp->chgBit(oldp+1289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwrite));
        bufp->chgIData(oldp+1290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata),32);
        bufp->chgCData(oldp+1291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pstrb),4);
        bufp->chgBit(oldp+1292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag));
        bufp->chgBit(oldp+1293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_wantStart));
        bufp->chgIData(oldp+1294,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr),32);
        bufp->chgIData(oldp+1295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data),32);
        bufp->chgCData(oldp+1296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt),4);
        bufp->chgCData(oldp+1297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg),3);
        bufp->chgCData(oldp+1298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext),3);
        bufp->chgBit(oldp+1299,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1300,(((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1301,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1302,(((3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1303,(((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1304,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1305,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1306,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1307,(((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1308,(((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgWData(oldp+1309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string),72);
        bufp->chgWData(oldp+1312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext_string),72);
        bufp->chgIData(oldp+1315,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)),32);
        bufp->chgBit(oldp+1316,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1317,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+1318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+1319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_we));
        bufp->chgBit(oldp+1320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_re));
        bufp->chgCData(oldp+1321,((7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)),3);
        bufp->chgCData(oldp+1322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+1324,((0x000000ffU & ((4U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                     ? 
                                                    ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_paddr)
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl) 
                                                      >> 8U)
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl)
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))))),8);
        bufp->chgBit(oldp+1325,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U))));
        bufp->chgCData(oldp+1326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__wb_dat_i),8);
        bufp->chgBit(oldp+1327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+1328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+1329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+1330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+1331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+1332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+1333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+1334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+1335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+1336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+1337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+1338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+1339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+1340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+1341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+1342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+1343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+1344,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lcr) 
                                       >> 7U))));
        bufp->chgBit(oldp+1345,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 4U))));
        bufp->chgBit(oldp+1346,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                       >> 3U))));
        bufp->chgBit(oldp+1347,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                       >> 2U))));
        bufp->chgBit(oldp+1348,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                       >> 1U))));
        bufp->chgBit(oldp+1349,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))));
        bufp->chgCData(oldp+1350,(((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                       << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                    << 4U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r))))),8);
        bufp->chgBit(oldp+1351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+1352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+1353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2));
        bufp->chgBit(oldp+1354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3));
        bufp->chgBit(oldp+1355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4));
        bufp->chgBit(oldp+1356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+1357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+1358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+1359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+1360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+1361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+1362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+1363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+1364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+1365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+1366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+1367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask));
        bufp->chgBit(oldp+1368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+1369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+1370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+1371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+1372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+1373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+1374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgSData(oldp+1375,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
                                    << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
        bufp->chgBit(oldp+1376,((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [1U] 
                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U] 
                                                      | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U] 
                                                         | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [5U] 
                                                            | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [6U] 
                                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [7U] 
                                                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [8U] 
                                                                     | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [9U] 
                                                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0x0aU] 
                                                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0x0bU] 
                                                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0cU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0dU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0eU] 
                                                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0fU]))))))))))))))))));
        bufp->chgBit(oldp+1377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse));
        bufp->chgCData(oldp+1378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+1379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+1380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+1381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+1382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+1383,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt))))));
        bufp->chgCData(oldp+1384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+1385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+1386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+1387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i));
        bufp->chgBit(oldp+1388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+1389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+1390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+1391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+1392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__fifo_write));
        bufp->chgCData(oldp+1393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+1394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+1395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+1396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+1397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+1398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+1399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+1400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+1401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+1402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+1403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+1404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+1405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+1406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+1407,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+1408,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+1409,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+1410,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+1411,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+1412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+1413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+1414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+1415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+1416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+1417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+1418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+1419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+1420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+1421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+1422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+1423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+1424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+1425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+1426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+1427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+1428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+1429,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+1430,((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1431,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1432,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+1433,((0x0000000fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                                  - (IData)(1U)))),4);
        bufp->chgSData(oldp+1434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+1435,((0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                                  >> 2U))),8);
        bufp->chgCData(oldp+1436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
        bufp->chgCData(oldp+1437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+1438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+1439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+1440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+1441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+1442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+1443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+1444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+1445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+1446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+1447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+1448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+1449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+1450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+1451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+1452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+1453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+1454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+1455,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+1456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+1457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+1458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+1459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+1460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+1461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+1462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+1463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+1464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+1465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+1466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0aU]),3);
        bufp->chgCData(oldp+1467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0bU]),3);
        bufp->chgCData(oldp+1468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0cU]),3);
        bufp->chgCData(oldp+1469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0dU]),3);
        bufp->chgCData(oldp+1470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0eU]),3);
        bufp->chgCData(oldp+1471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0fU]),3);
        bufp->chgCData(oldp+1472,((0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                                  >> 3U))),8);
        bufp->chgCData(oldp+1473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+1489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+1490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+1491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+1492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+1493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+1494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+1495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgCData(oldp+1496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo),8);
        bufp->chgBit(oldp+1497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+1498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+1499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+1500,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgCData(oldp+1501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart0__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+1517,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid))));
        bufp->chgCData(oldp+1518,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_0)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp)
                                     : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_2)
                                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_bresp)
                                               : 0U))),2);
        bufp->chgCData(oldp+1519,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp)
                                     : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rresp)
                                               : 0U))),2);
        bufp->chgCData(oldp+1520,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid) 
                                    << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_0)
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp)
                                                : 0U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_2)
                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_bresp)
                                                  : 0U)))),5);
        bufp->chgBit(oldp+1521,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_wready) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_deq_valid))));
        bufp->chgCData(oldp+1522,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_6_0)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp)
                                     : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_6_2)
                                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_bresp)
                                               : 0U))),2);
        bufp->chgCData(oldp+1523,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0)
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp)
                                     : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_2)
                                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rresp)
                                               : 0U))),2);
        bufp->chgCData(oldp+1524,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid) 
                                    << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_6_0)
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp)
                                                : 0U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_6_2)
                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_bresp)
                                                  : 0U)))),5);
        bufp->chgBit(oldp+1525,((1U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid) 
                                         >> 3U) & (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_4)
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0)))) 
                                       | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid) 
                                              >> 3U)) 
                                          & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__full)) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6)
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_6)
                                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_0))))))));
        bufp->chgBit(oldp+1526,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0))));
        bufp->chgBit(oldp+1527,((1U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_bid) 
                                         >> 3U) & (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_4) 
                                                       >> 2U)
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2)))) 
                                       | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_bid) 
                                              >> 3U)) 
                                          & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__full)) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6)
                                                 ? 
                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_6) 
                                                 >> 2U)
                                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_2))))))));
        bufp->chgBit(oldp+1528,((1U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rid) 
                                         >> 3U) & (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_3) 
                                                       >> 2U)
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_2)))) 
                                       | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rid) 
                                              >> 3U)) 
                                          & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__full)) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)
                                                 ? 
                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_5) 
                                                 >> 2U)
                                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_2))))))));
        bufp->chgBit(oldp+1529,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6)
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_6) 
                                           >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_2)))));
        bufp->chgBit(oldp+1530,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6)
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_6) 
                                           >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_1)))));
        bufp->chgBit(oldp+1531,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_6)
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_0)))));
        bufp->chgBit(oldp+1532,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_5) 
                                           >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_2)))));
        bufp->chgBit(oldp+1533,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_5) 
                                           >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_1)))));
        bufp->chgBit(oldp+1534,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_5)
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_0)))));
        bufp->chgBit(oldp+1535,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_4) 
                                           >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2)))));
        bufp->chgBit(oldp+1536,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_4) 
                                           >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1)))));
        bufp->chgBit(oldp+1537,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_4)
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0)))));
        bufp->chgBit(oldp+1538,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_3) 
                                           >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_2)))));
        bufp->chgBit(oldp+1539,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_3) 
                                           >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
        bufp->chgBit(oldp+1540,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_3)
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
        bufp->chgBit(oldp+1541,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0) 
                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle)
                                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_0)))) 
                                 | ((IData)((((0x0000100000000000ULL 
                                               == (0x00001e0000000000ULL 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data)) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready)) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_1)
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_1_0)))) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_2) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_arready) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_2)
                                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0))))))));
        bufp->chgBit(oldp+1542,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)))));
        bufp->chgBit(oldp+1543,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)))));
        bufp->chgBit(oldp+1544,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 1U))));
        bufp->chgBit(oldp+1545,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 1U))));
        bufp->chgBit(oldp+1546,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 0x0000000aU))));
        bufp->chgBit(oldp+1547,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 0x0000000aU))));
        bufp->chgBit(oldp+1548,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 0x0000000bU))));
        bufp->chgBit(oldp+1549,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 0x0000000bU))));
        bufp->chgBit(oldp+1550,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 0x0000000cU))));
        bufp->chgBit(oldp+1551,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 0x0000000cU))));
        bufp->chgBit(oldp+1552,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 0x0000000dU))));
        bufp->chgBit(oldp+1553,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 0x0000000dU))));
        bufp->chgBit(oldp+1554,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 0x0000000eU))));
        bufp->chgBit(oldp+1555,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 0x0000000eU))));
        bufp->chgBit(oldp+1556,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 0x0000000fU))));
        bufp->chgBit(oldp+1557,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 0x0000000fU))));
        bufp->chgBit(oldp+1558,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)))));
        bufp->chgBit(oldp+1559,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)))));
        bufp->chgBit(oldp+1560,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 1U))));
        bufp->chgBit(oldp+1561,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 1U))));
        bufp->chgBit(oldp+1562,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 2U))));
        bufp->chgBit(oldp+1563,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 2U))));
        bufp->chgBit(oldp+1564,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 3U))));
        bufp->chgBit(oldp+1565,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 3U))));
        bufp->chgBit(oldp+1566,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 2U))));
        bufp->chgBit(oldp+1567,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 2U))));
        bufp->chgBit(oldp+1568,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 4U))));
        bufp->chgBit(oldp+1569,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 4U))));
        bufp->chgBit(oldp+1570,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 5U))));
        bufp->chgBit(oldp+1571,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 5U))));
        bufp->chgBit(oldp+1572,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 6U))));
        bufp->chgBit(oldp+1573,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 6U))));
        bufp->chgBit(oldp+1574,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 7U))));
        bufp->chgBit(oldp+1575,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 7U))));
        bufp->chgBit(oldp+1576,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 8U))));
        bufp->chgBit(oldp+1577,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 8U))));
        bufp->chgBit(oldp+1578,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 9U))));
        bufp->chgBit(oldp+1579,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 9U))));
        bufp->chgBit(oldp+1580,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 0x0000000aU))));
        bufp->chgBit(oldp+1581,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 0x0000000aU))));
        bufp->chgBit(oldp+1582,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 0x0000000bU))));
        bufp->chgBit(oldp+1583,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 0x0000000bU))));
        bufp->chgBit(oldp+1584,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 0x0000000cU))));
        bufp->chgBit(oldp+1585,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 0x0000000cU))));
        bufp->chgBit(oldp+1586,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 0x0000000dU))));
        bufp->chgBit(oldp+1587,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 0x0000000dU))));
        bufp->chgBit(oldp+1588,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 3U))));
        bufp->chgBit(oldp+1589,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 3U))));
        bufp->chgBit(oldp+1590,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 0x0000000eU))));
        bufp->chgBit(oldp+1591,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 0x0000000eU))));
        bufp->chgBit(oldp+1592,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                    >> 0x0000000fU))));
        bufp->chgBit(oldp+1593,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                    >> 0x0000000fU))));
        bufp->chgBit(oldp+1594,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 4U))));
        bufp->chgBit(oldp+1595,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 4U))));
        bufp->chgBit(oldp+1596,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 5U))));
        bufp->chgBit(oldp+1597,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 5U))));
        bufp->chgBit(oldp+1598,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 6U))));
        bufp->chgBit(oldp+1599,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 6U))));
        bufp->chgBit(oldp+1600,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 7U))));
        bufp->chgBit(oldp+1601,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 7U))));
        bufp->chgBit(oldp+1602,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 8U))));
        bufp->chgBit(oldp+1603,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 8U))));
        bufp->chgBit(oldp+1604,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                    >> 9U))));
        bufp->chgBit(oldp+1605,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                    >> 9U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+1606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgBit(oldp+1607,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1608,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1609,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1610,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgSData(oldp+1611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+1612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgCData(oldp+1613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),2);
        bufp->chgBit(oldp+1614,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgSData(oldp+1615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),16);
        bufp->chgBit(oldp+1616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rvalid));
        bufp->chgCData(oldp+1617,((0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
        bufp->chgIData(oldp+1618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rdata),32);
        bufp->chgBit(oldp+1619,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                       >> 4U))));
        bufp->chgBit(oldp+1620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bvalid));
        bufp->chgBit(oldp+1621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsRIO_filtered_1_0_valid));
        bufp->chgBit(oldp+1622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsRIO_filtered_1_1_valid));
        bufp->chgBit(oldp+1623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsBIO_filtered_1_0_valid));
        bufp->chgBit(oldp+1624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsBIO_filtered_1_1_valid));
        bufp->chgBit(oldp+1625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_accept_i));
        bufp->chgIData(oldp+1626,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q) 
                                    << 0x00000010U) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q))),32);
        bufp->chgBit(oldp+1627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+1628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+1629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+1630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+1631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+1632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+1633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+1634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+1635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+1636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+1637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+1638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+1639,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+1640,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+1641,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
        bufp->chgBit(oldp+1642,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                     >> 5U)) & (0U 
                                                != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+1643,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 5U))));
        bufp->chgBit(oldp+1644,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+1645,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+1646,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+1647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+1648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+1649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+1650,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+1651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+1652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+1654,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+1655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+1656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+1657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+1658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+1659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+1660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgCData(oldp+1662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgBit(oldp+1663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgSData(oldp+1664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),16);
        bufp->chgCData(oldp+1665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),2);
        bufp->chgBit(oldp+1666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+1667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
        bufp->chgSData(oldp+1668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+1669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+1670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+1671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+1672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgCData(oldp+1673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+1674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+1675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+1676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgSData(oldp+1677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),16);
        bufp->chgSData(oldp+1678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),16);
        bufp->chgIData(oldp+1679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+1680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgWData(oldp+1681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+1684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid));
        bufp->chgCData(oldp+1685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arid),4);
        bufp->chgIData(oldp+1686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_araddr),32);
        bufp->chgCData(oldp+1687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arlen),8);
        bufp->chgCData(oldp+1688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arburst),2);
        bufp->chgBit(oldp+1689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awvalid));
        bufp->chgCData(oldp+1690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awid),4);
        bufp->chgIData(oldp+1691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awaddr),32);
        bufp->chgCData(oldp+1692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awlen),8);
        bufp->chgCData(oldp+1693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awburst),2);
        bufp->chgBit(oldp+1694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wvalid));
        bufp->chgIData(oldp+1695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wdata),32);
        bufp->chgBit(oldp+1696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wlast));
        bufp->chgCData(oldp+1697,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awvalid)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awlen)
                                    : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arlen)
                                        : 0U))),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+1698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_bready));
        bufp->chgBit(oldp+1699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rready));
        bufp->chgBit(oldp+1700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_awready));
        bufp->chgBit(oldp+1701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bvalid));
        bufp->chgCData(oldp+1702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid),3);
        bufp->chgBit(oldp+1703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_arready));
        bufp->chgBit(oldp+1704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rvalid));
        bufp->chgCData(oldp+1705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid),3);
        bufp->chgBit(oldp+1706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rlast));
        bufp->chgBit(oldp+1707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_awready));
        bufp->chgBit(oldp+1710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bvalid));
        bufp->chgCData(oldp+1711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid),3);
        bufp->chgBit(oldp+1712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_arready));
        bufp->chgBit(oldp+1713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rvalid));
        bufp->chgCData(oldp+1714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid),3);
        bufp->chgBit(oldp+1715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rlast));
        bufp->chgBit(oldp+1716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready));
        bufp->chgBit(oldp+1719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awready));
        bufp->chgBit(oldp+1720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wready));
        bufp->chgBit(oldp+1721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready));
        bufp->chgBit(oldp+1722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready));
        bufp->chgBit(oldp+1723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready));
        bufp->chgBit(oldp+1724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready));
        bufp->chgBit(oldp+1725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready));
        bufp->chgBit(oldp+1726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+1727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+1729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready));
        bufp->chgBit(oldp+1730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+1731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+1732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready));
        bufp->chgBit(oldp+1734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready));
        bufp->chgBit(oldp+1735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready));
        bufp->chgBit(oldp+1736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready));
        bufp->chgBit(oldp+1737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en));
        bufp->chgBit(oldp+1738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en));
        bufp->chgBit(oldp+1739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_wready));
        bufp->chgBit(oldp+1740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
        bufp->chgBit(oldp+1741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_1_awready));
        bufp->chgBit(oldp+1742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
        bufp->chgCData(oldp+1743,((0x000000ffU & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)))),8);
        bufp->chgCData(oldp+1744,((0x000000ffU & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_bid)))),8);
        bufp->chgCData(oldp+1745,((0x000000ffU & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)))),8);
        bufp->chgCData(oldp+1746,((0x000000ffU & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_bid)))),8);
        bufp->chgBit(oldp+1747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_1_awready));
        bufp->chgBit(oldp+1748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__out_1_wready));
        bufp->chgBit(oldp+1749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_3));
        bufp->chgCData(oldp+1750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_3),3);
        bufp->chgCData(oldp+1751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_3),6);
        bufp->chgCData(oldp+1752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_3),3);
        bufp->chgBit(oldp+1753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
        bufp->chgBit(oldp+1754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
        bufp->chgBit(oldp+1755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_2));
        bufp->chgBit(oldp+1756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
        bufp->chgBit(oldp+1757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
        bufp->chgBit(oldp+1758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2));
        bufp->chgBit(oldp+1759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_4));
        bufp->chgCData(oldp+1760,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_4),3);
        bufp->chgCData(oldp+1761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_4),6);
        bufp->chgCData(oldp+1762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_4),3);
        bufp->chgBit(oldp+1763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0));
        bufp->chgBit(oldp+1764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1));
        bufp->chgBit(oldp+1765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2));
        bufp->chgBit(oldp+1766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_0));
        bufp->chgBit(oldp+1767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_1));
        bufp->chgBit(oldp+1768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_2));
        bufp->chgBit(oldp+1769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_5));
        bufp->chgCData(oldp+1770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_5),3);
        bufp->chgCData(oldp+1771,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_5),6);
        bufp->chgCData(oldp+1772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_5),3);
        bufp->chgBit(oldp+1773,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0));
        bufp->chgBit(oldp+1774,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1));
        bufp->chgBit(oldp+1775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_2));
        bufp->chgBit(oldp+1776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0));
        bufp->chgBit(oldp+1777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_1));
        bufp->chgBit(oldp+1778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_2));
        bufp->chgBit(oldp+1779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_6));
        bufp->chgCData(oldp+1780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_6),3);
        bufp->chgCData(oldp+1781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_6),6);
        bufp->chgCData(oldp+1782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_6),3);
        bufp->chgBit(oldp+1783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_0));
        bufp->chgBit(oldp+1784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_1));
        bufp->chgBit(oldp+1785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_6_2));
        bufp->chgBit(oldp+1786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_6_0));
        bufp->chgBit(oldp+1787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_6_1));
        bufp->chgBit(oldp+1788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_6_2));
        bufp->chgBit(oldp+1789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+1790,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+1791,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1792,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__io_deq_ready));
        bufp->chgBit(oldp+1793,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__do_deq));
        bufp->chgBit(oldp+1794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_1__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__io_deq_ready));
        bufp->chgBit(oldp+1796,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__do_deq));
        bufp->chgBit(oldp+1797,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awOut_1__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1798,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready));
        bufp->chgBit(oldp+1799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready));
        bufp->chgBit(oldp+1800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+1801,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+1802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+1803,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+1804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgIData(oldp+1805,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o),32);
        bufp->chgCData(oldp+1806,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o),4);
        bufp->chgBit(oldp+1807,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o));
        bufp->chgBit(oldp+1808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+1809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
        bufp->chgBit(oldp+1810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgBit(oldp+1811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+1812,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+1813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+1814,((0x000001feU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                                                  >> 1U))),13);
        bufp->chgSData(oldp+1815,((0x00001fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                                                  >> 0x0000000cU))),13);
        bufp->chgCData(oldp+1816,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                                         >> 0x0000000aU))),2);
        bufp->chgCData(oldp+1817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+1818,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+1819,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+1820,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+1821,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr),24);
        bufp->chgBit(oldp+1822,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))));
    }
    bufp->chgBit(oldp+1823,(vlSelfRef.clock));
    bufp->chgBit(oldp+1824,(vlSelfRef.reset));
    bufp->chgBit(oldp+1825,(vlSelfRef.externalPins_uart0_rx));
    bufp->chgBit(oldp+1826,(vlSelfRef.externalPins_uart0_tx));
    bufp->chgBit(oldp+1827,(vlSelfRef.externalPins_uart1_uart_rx_i));
    bufp->chgBit(oldp+1828,(vlSelfRef.externalPins_uart1_uart_tx_o));
    bufp->chgIData(oldp+1829,(vlSelfRef.externalPins_gpio0_gpio_in_i),32);
    bufp->chgIData(oldp+1830,(vlSelfRef.externalPins_gpio0_gpio_out_o),32);
    bufp->chgIData(oldp+1831,(vlSelfRef.externalPins_gpio0_gpio_dir_o),32);
    bufp->chgIData(oldp+1832,(vlSelfRef.externalPins_gpio0_gpio_alt_in_o),32);
    bufp->chgIData(oldp+1833,(vlSelfRef.externalPins_gpio0_gpio_alt_0_out_i),32);
    bufp->chgIData(oldp+1834,(vlSelfRef.externalPins_gpio0_gpio_alt_0_dir_i),32);
    bufp->chgIData(oldp+1835,(vlSelfRef.externalPins_gpio0_gpio_alt_1_out_i),32);
    bufp->chgIData(oldp+1836,(vlSelfRef.externalPins_gpio0_gpio_alt_1_dir_i),32);
    bufp->chgIData(oldp+1837,(vlSelfRef.externalPins_gpio1_gpio_in_i),32);
    bufp->chgIData(oldp+1838,(vlSelfRef.externalPins_gpio1_gpio_out_o),32);
    bufp->chgIData(oldp+1839,(vlSelfRef.externalPins_gpio1_gpio_dir_o),32);
    bufp->chgIData(oldp+1840,(vlSelfRef.externalPins_gpio1_gpio_alt_in_o),32);
    bufp->chgIData(oldp+1841,(vlSelfRef.externalPins_gpio1_gpio_alt_0_out_i),32);
    bufp->chgIData(oldp+1842,(vlSelfRef.externalPins_gpio1_gpio_alt_0_dir_i),32);
    bufp->chgIData(oldp+1843,(vlSelfRef.externalPins_gpio1_gpio_alt_1_out_i),32);
    bufp->chgIData(oldp+1844,(vlSelfRef.externalPins_gpio1_gpio_alt_1_dir_i),32);
    bufp->chgIData(oldp+1845,(vlSelfRef.externalPins_gpio2_gpio_in_i),32);
    bufp->chgIData(oldp+1846,(vlSelfRef.externalPins_gpio2_gpio_out_o),32);
    bufp->chgIData(oldp+1847,(vlSelfRef.externalPins_gpio2_gpio_dir_o),32);
    bufp->chgIData(oldp+1848,(vlSelfRef.externalPins_gpio2_gpio_alt_in_o),32);
    bufp->chgIData(oldp+1849,(vlSelfRef.externalPins_gpio2_gpio_alt_0_out_i),32);
    bufp->chgIData(oldp+1850,(vlSelfRef.externalPins_gpio2_gpio_alt_0_dir_i),32);
    bufp->chgIData(oldp+1851,(vlSelfRef.externalPins_gpio2_gpio_alt_1_out_i),32);
    bufp->chgIData(oldp+1852,(vlSelfRef.externalPins_gpio2_gpio_alt_1_dir_i),32);
    bufp->chgBit(oldp+1853,(vlSelfRef.externalPins_spi_sck));
    bufp->chgCData(oldp+1854,(vlSelfRef.externalPins_spi_ss),8);
    bufp->chgBit(oldp+1855,(vlSelfRef.externalPins_spi_mosi));
    bufp->chgBit(oldp+1856,(vlSelfRef.externalPins_spi_miso));
    bufp->chgCData(oldp+1857,(vlSelfRef.externalPins_vga_vgalcd_ro),5);
    bufp->chgCData(oldp+1858,(vlSelfRef.externalPins_vga_vgalcd_g_o),6);
    bufp->chgCData(oldp+1859,(vlSelfRef.externalPins_vga_vgalcd_bo),5);
    bufp->chgBit(oldp+1860,(vlSelfRef.externalPins_vga_vgalcd_hsync_o));
    bufp->chgBit(oldp+1861,(vlSelfRef.externalPins_vga_vgalcd_vsync_o));
    bufp->chgBit(oldp+1862,(vlSelfRef.externalPins_vga_vgalcd_pclk_o));
    bufp->chgBit(oldp+1863,(vlSelfRef.externalPins_vga_vgalcd_de_o));
    bufp->chgBit(oldp+1864,(vlSelfRef.externalPins_vga_irq_o));
    bufp->chgCData(oldp+1865,(vlSelfRef.externalPins_core_sel),2);
    bufp->chgBit(oldp+1866,(vlSelfRef.externalPins_core_irq));
    bufp->chgCData(oldp+1867,(vlSelfRef.externalPins_pwm0_pwm_o),4);
    bufp->chgCData(oldp+1868,(vlSelfRef.externalPins_pwm1_pwm_o),4);
    bufp->chgBit(oldp+1869,(vlSelfRef.externalPins_i2c_scl_i));
    bufp->chgBit(oldp+1870,(vlSelfRef.externalPins_i2c_scl_o));
    bufp->chgBit(oldp+1871,(vlSelfRef.externalPins_i2c_scl_dir_o));
    bufp->chgBit(oldp+1872,(vlSelfRef.externalPins_i2c_sda_i));
    bufp->chgBit(oldp+1873,(vlSelfRef.externalPins_i2c_sda_o));
    bufp->chgBit(oldp+1874,(vlSelfRef.externalPins_i2c_sda_dir_o));
    bufp->chgBit(oldp+1875,(vlSelfRef.externalPins_timer0_exclk_i));
    bufp->chgBit(oldp+1876,(vlSelfRef.externalPins_timer0_capch_i));
    bufp->chgBit(oldp+1877,(vlSelfRef.externalPins_timer1_exclk_i));
    bufp->chgBit(oldp+1878,(vlSelfRef.externalPins_timer1_capch_i));
    bufp->chgBit(oldp+1879,(vlSelfRef.externalPins_timer2_exclk_i));
    bufp->chgBit(oldp+1880,(vlSelfRef.externalPins_timer2_capch_i));
    bufp->chgBit(oldp+1881,(vlSelfRef.externalPins_timer3_exclk_i));
    bufp->chgBit(oldp+1882,(vlSelfRef.externalPins_timer3_capch_i));
    bufp->chgBit(oldp+1883,(vlSelfRef.externalPins_ps2_ps2_clk_i));
    bufp->chgBit(oldp+1884,(vlSelfRef.externalPins_ps2_ps2_dat_i));
    bufp->chgBit(oldp+1885,(vlSelfRef.externalPins_i2s_mclk_o));
    bufp->chgBit(oldp+1886,(vlSelfRef.externalPins_i2s_sck_o));
    bufp->chgBit(oldp+1887,(vlSelfRef.externalPins_i2s_sck_i));
    bufp->chgBit(oldp+1888,(vlSelfRef.externalPins_i2s_sck_en_o));
    bufp->chgBit(oldp+1889,(vlSelfRef.externalPins_i2s_ws_o));
    bufp->chgBit(oldp+1890,(vlSelfRef.externalPins_i2s_ws_i));
    bufp->chgBit(oldp+1891,(vlSelfRef.externalPins_i2s_ws_en_o));
    bufp->chgBit(oldp+1892,(vlSelfRef.externalPins_i2s_sd_o));
    bufp->chgBit(oldp+1893,(vlSelfRef.externalPins_i2s_sd_i));
    bufp->chgBit(oldp+1894,(vlSelfRef.externalPins_rcu_ext_lfosc_clk_i));
    bufp->chgBit(oldp+1895,(vlSelfRef.externalPins_rcu_ext_hfosc_clk_i));
    bufp->chgBit(oldp+1896,(vlSelfRef.externalPins_rcu_ext_audosc_clk_i));
    bufp->chgBit(oldp+1897,(vlSelfRef.externalPins_rcu_ext_rst_n_i));
    bufp->chgBit(oldp+1898,(vlSelfRef.externalPins_rcu_wdt_rst_n_i));
    bufp->chgBit(oldp+1899,(vlSelfRef.externalPins_rcu_pll_en_i));
    bufp->chgCData(oldp+1900,(vlSelfRef.externalPins_rcu_clk_cfg_i),3);
    bufp->chgCData(oldp+1901,(vlSelfRef.externalPins_rcu_core_sel_i),5);
    bufp->chgCData(oldp+1902,(vlSelfRef.externalPins_rcu_core_sel_o),5);
    bufp->chgCData(oldp+1903,(vlSelfRef.externalPins_rcu_clk_o),7);
    bufp->chgCData(oldp+1904,(vlSelfRef.externalPins_rcu_rst_n_o),7);
    bufp->chgBit(oldp+1905,((1U & ((IData)(vlSelfRef.externalPins_spi_ss) 
                                   | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x0000001fU)))));
    bufp->chgBit(oldp+1906,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgIData(oldp+1907,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata
                                 : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rdata
                                            : 0U) | 
                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rdata
                                            : 0U)))),32);
    bufp->chgQData(oldp+1908,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rid)) 
                                << 0x00000023U) | (
                                                   ((QData)((IData)(
                                                                    (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata
                                                                       : 0U) 
                                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rdata
                                                                          : 0U) 
                                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rdata
                                                                            : 0U))))) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp)
                                                                          : 0U) 
                                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rresp)
                                                                            : 0U)) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_0_rlast))))))),38);
    bufp->chgIData(oldp+1910,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0)
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata
                                 : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_1)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rdata
                                            : 0U) | 
                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_2)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rdata
                                            : 0U)))),32);
    bufp->chgQData(oldp+1911,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rid)) 
                                << 0x00000023U) | (
                                                   ((QData)((IData)(
                                                                    (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0)
                                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata
                                                                       : 0U) 
                                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_1)
                                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rdata
                                                                          : 0U) 
                                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_2)
                                                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rdata
                                                                            : 0U))))) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0)
                                                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp)
                                                                          : 0U) 
                                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_2)
                                                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_2_rresp)
                                                                            : 0U)) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_1_rlast))))))),38);
    bufp->chgBit(oldp+1913,((1U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                     >> 3U) & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                   ? 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_3) 
                                                   >> 1U)
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))) 
                                   | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                          >> 3U)) & 
                                      ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_rdeq_q__DOT__full)) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)
                                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_5) 
                                              >> 1U)
                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_1))))))));
    bufp->chgBit(oldp+1914,((1U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                     >> 3U) & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                   ? 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_4) 
                                                   >> 1U)
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1)))) 
                                   | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                          >> 3U)) & 
                                      ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf_1__DOT__nodeIn_bdeq_q__DOT__full)) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_6)
                                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_6) 
                                              >> 1U)
                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_6_1))))))));
    bufp->chgBit(oldp+1915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst));
    bufp->chgBit(oldp+1916,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgCData(oldp+1917,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready))
                                ? (0x00000020U | ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arlen)) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arid)))
                                : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awvalid) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awready))
                                    ? (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awlen)) 
                                        << 4U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awid))
                                    : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
                                        << 5U) | ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+1918,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wvalid))));
    bufp->chgBit(oldp+1919,((((0x00000200U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                             & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                | (IData)(vlSelfRef.externalPins_spi_sck)))));
    bufp->chgBit(oldp+1920,((1U & (IData)(vlSelfRef.externalPins_spi_ss))));
    bufp->chgIData(oldp+1921,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->chgIData(oldp+1922,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+1923,(((0x00fffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                               << 1U)) 
                               | (IData)(vlSelfRef.externalPins_spi_mosi))),32);
    bufp->chgIData(oldp+1924,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
