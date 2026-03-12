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
        bufp->chgBit(oldp+0,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_w_ready));
        bufp->chgCData(oldp+1,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+2,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask));
        bufp->chgBit(oldp+3,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+4,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+5,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+6,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+7,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+8,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite)
                                 ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)
                                     ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x0000000bU))
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
                                 : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready)
                                     ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 0x0000000bU))
                                     : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r))),32);
        bufp->chgBit(oldp+9,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) 
                                 | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgBit(oldp+10,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
        bufp->chgBit(oldp+11,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite));
        bufp->chgIData(oldp+12,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)
                                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                             >> 4U))
                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r)),32);
        bufp->chgCData(oldp+13,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite)
                                  ? (0x0000000fU & 
                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r)))
                                  : 0U)),4);
        bufp->chgBit(oldp+14,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
        bufp->chgIData(oldp+15,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
        bufp->chgBit(oldp+16,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_psel));
        bufp->chgBit(oldp+17,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_penable));
        bufp->chgCData(oldp+18,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag)
                                  ? 0U : 1U)),3);
        bufp->chgBit(oldp+19,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite));
        bufp->chgIData(oldp+20,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata),32);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb),4);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__delay_cnt),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__r_data),32);
        bufp->chgBit(oldp+24,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag));
        bufp->chgIData(oldp+25,((((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [3U] << 0x00000018U) 
                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                     [2U] << 0x00000010U)) 
                                 | ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                     [1U] << 8U) | 
                                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [0U]))),32);
        bufp->chgBit(oldp+26,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready));
        bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+28,((0x0000000fU & (IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                        >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+29,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                         >> 0x0000000bU))),32);
        bufp->chgCData(oldp+30,((0x000000ffU & (IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                        >> 3U)))),8);
        bufp->chgCData(oldp+31,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+32,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
        bufp->chgIData(oldp+33,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                         >> 4U))),32);
        bufp->chgCData(oldp+34,((0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data))),4);
        bufp->chgBit(oldp+35,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
        bufp->chgBit(oldp+36,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid));
        bufp->chgCData(oldp+37,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
        bufp->chgCData(oldp+38,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp),2);
        bufp->chgBit(oldp+39,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready));
        bufp->chgBit(oldp+40,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
        bufp->chgCData(oldp+41,((0x0000000fU & (IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                        >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+42,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                         >> 0x0000000bU))),32);
        bufp->chgCData(oldp+43,((0x000000ffU & (IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                        >> 3U)))),8);
        bufp->chgCData(oldp+44,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+45,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
        bufp->chgBit(oldp+46,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid));
        bufp->chgCData(oldp+47,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
        bufp->chgIData(oldp+48,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
        bufp->chgCData(oldp+49,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+50,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+51,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+52,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+53,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+54,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+55,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+56,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+57,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
        bufp->chgBit(oldp+58,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
        bufp->chgCData(oldp+59,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid),4);
        bufp->chgIData(oldp+60,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr),32);
        bufp->chgCData(oldp+61,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize),3);
        bufp->chgCData(oldp+62,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awburst),2);
        bufp->chgBit(oldp+63,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+64,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits))));
        bufp->chgIData(oldp+65,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata),32);
        bufp->chgCData(oldp+66,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb),4);
        bufp->chgBit(oldp+67,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+68,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
        bufp->chgBit(oldp+69,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+70,((0x0000000fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                                                >> 2U))),4);
        bufp->chgCData(oldp+71,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data))),2);
        bufp->chgBit(oldp+72,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
        bufp->chgBit(oldp+73,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
        bufp->chgCData(oldp+74,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid),4);
        bufp->chgIData(oldp+75,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr),32);
        bufp->chgCData(oldp+76,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize),3);
        bufp->chgCData(oldp+77,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arburst),2);
        bufp->chgBit(oldp+78,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
        bufp->chgBit(oldp+79,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+80,((0x0000000fU & (IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                        >> 0x00000023U)))),4);
        bufp->chgIData(oldp+81,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                         >> 3U))),32);
        bufp->chgCData(oldp+82,((3U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+83,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data))));
        bufp->chgBit(oldp+84,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
        bufp->chgBit(oldp+85,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+86,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+87,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+88,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
        bufp->chgBit(oldp+89,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+91,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data),6);
        bufp->chgCData(oldp+92,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                  << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp))),6);
        bufp->chgCData(oldp+93,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
        bufp->chgCData(oldp+94,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
        bufp->chgBit(oldp+95,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+96,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
        bufp->chgBit(oldp+97,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+98,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+99,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data),39);
        bufp->chgQData(oldp+105,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                   << 0x00000023U) 
                                  | (((QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                      << 3U) | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp) 
                                                                   << 1U))))))),39);
        bufp->chgQData(oldp+107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
        bufp->chgQData(oldp+109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
        bufp->chgBit(oldp+111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
        bufp->chgBit(oldp+113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
        bufp->chgBit(oldp+117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
        bufp->chgBit(oldp+118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+121,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   << 0x0000002bU) 
                                  | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)) 
                                      << 0x0000000bU) 
                                     | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize))))),47);
        bufp->chgQData(oldp+123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
        bufp->chgBit(oldp+133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
        bufp->chgBit(oldp+134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+137,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   << 0x0000002bU) 
                                  | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr)) 
                                      << 0x0000000bU) 
                                     | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize))))),47);
        bufp->chgQData(oldp+139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
        bufp->chgBit(oldp+145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
        bufp->chgBit(oldp+149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
        bufp->chgBit(oldp+150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgQData(oldp+151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data),36);
        bufp->chgQData(oldp+153,((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                                   << 4U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb)))),36);
        bufp->chgQData(oldp+155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
        bufp->chgQData(oldp+157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
        bufp->chgBit(oldp+159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
        bufp->chgBit(oldp+161,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_araddr),32);
        bufp->chgCData(oldp+163,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                                   ? 0U : 3U)),8);
        bufp->chgCData(oldp+164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arsize),3);
        bufp->chgCData(oldp+165,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                                   ? 0U : 1U)),2);
        bufp->chgBit(oldp+166,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
        bufp->chgBit(oldp+167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
        bufp->chgCData(oldp+168,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
        bufp->chgCData(oldp+170,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
        bufp->chgBit(oldp+171,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
        bufp->chgBit(oldp+172,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
        bufp->chgBit(oldp+173,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))));
        bufp->chgIData(oldp+174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_aw_payload_addr),32);
        bufp->chgCData(oldp+175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2_axi_aw_payload_size),3);
        bufp->chgBit(oldp+176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
        bufp->chgBit(oldp+177,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
                                   >> 1U))));
        bufp->chgIData(oldp+178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_data),32);
        bufp->chgCData(oldp+179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_payload_strb),4);
        bufp->chgBit(oldp+180,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                          >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
        bufp->chgBit(oldp+181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
        bufp->chgCData(oldp+182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize),3);
        bufp->chgCData(oldp+183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize),3);
        bufp->chgCData(oldp+184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb),4);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index]),32);
        bufp->chgBit(oldp+186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_wantStart));
        bufp->chgIData(oldp+187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_cnt),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_max_cnt),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_t0),32);
        bufp->chgBit(oldp+190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_flag));
        bufp->chgCData(oldp+191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_mem_index),3);
        bufp->chgCData(oldp+192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_r_index),3);
        bufp->chgBit(oldp+193,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg)))));
        bufp->chgIData(oldp+194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_cnt),32);
        bufp->chgIData(oldp+195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt),32);
        bufp->chgIData(oldp+196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_max_cnt_b),32);
        bufp->chgIData(oldp+197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_t0),32);
        bufp->chgBit(oldp+198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_flag));
        bufp->chgBit(oldp+199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_aw_flag));
        bufp->chgCData(oldp+200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg),2);
        bufp->chgCData(oldp+201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext),2);
        bufp->chgBit(oldp+202,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext)) 
                                & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg)))));
        bufp->chgBit(oldp+203,(((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext)) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg)))));
        bufp->chgBit(oldp+204,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext)) 
                                & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg)))));
        bufp->chgBit(oldp+205,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext)) 
                                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg)))));
        bufp->chgBit(oldp+206,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext)) 
                                & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg)))));
        bufp->chgBit(oldp+207,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext)) 
                                & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg)))));
        bufp->chgBit(oldp+208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg));
        bufp->chgIData(oldp+209,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))
                                   ? 0x424f4f54U : 
                                  ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))
                                    ? 0x61722020U : 
                                   ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateReg))
                                     ? 0x72202020U : 0x3f3f3f3fU)))),32);
        bufp->chgIData(oldp+210,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext))
                                   ? 0x424f4f54U : 
                                  ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext))
                                    ? 0x61722020U : 
                                   ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_stateNext))
                                     ? 0x72202020U : 0x3f3f3f3fU)))),32);
        bufp->chgIData(oldp+211,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__w_stateReg)
                                   ? 0x61772020U : 0x424f4f54U)),32);
        bufp->chgIData(oldp+212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data[0]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data[1]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data[2]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data[3]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data[4]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data[5]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data[6]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__u_axi4_delayer_my__DOT__r_r_data[7]),32);
        bufp->chgBit(oldp+220,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid));
        bufp->chgBit(oldp+222,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid));
        bufp->chgBit(oldp+224,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
        bufp->chgBit(oldp+225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid));
        bufp->chgCData(oldp+226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid),4);
        bufp->chgCData(oldp+227,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                                        | ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                 << 6U) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                   << 4U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                   << 2U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12))) 
                                              << 0x00000018U) 
                                             | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                   << 6U) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                     << 2U) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8))) 
                                                << 0x00000010U)) 
                                            | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                   << 6U) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                     << 2U) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4))) 
                                                << 8U) 
                                               | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                    << 6U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                           >> (0x0000001fU 
                                               & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid), 1U)))))),2);
        bufp->chgBit(oldp+228,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid));
        bufp->chgBit(oldp+230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready));
        bufp->chgBit(oldp+231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid));
        bufp->chgCData(oldp+232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid),4);
        bufp->chgIData(oldp+233,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                    ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 3U))
                                    : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                               : 0U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((((0x0000ff00U 
                                                    & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                         >> 0x00000018U)
                                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                          >> 0x00000010U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)))) 
                                                  << 0x00000010U) 
                                                 | ((0x0000ff00U 
                                                     & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                          >> 8U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                                 : 0U)))),32);
        bufp->chgCData(oldp+234,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 1U))
                                          : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))),2);
        bufp->chgBit(oldp+235,((((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                       << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last))) 
                                    << 0x0000000cU) 
                                   | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                         << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))) 
                                      << 8U)) | (((
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast))));
        bufp->chgBit(oldp+236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready));
        bufp->chgBit(oldp+237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid));
        bufp->chgBit(oldp+238,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))))));
        bufp->chgBit(oldp+239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready));
        bufp->chgBit(oldp+240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid));
        bufp->chgBit(oldp+241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready));
        bufp->chgBit(oldp+242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid));
        bufp->chgCData(oldp+243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp),2);
        bufp->chgBit(oldp+244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last));
        bufp->chgBit(oldp+245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready));
        bufp->chgBit(oldp+246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid));
        bufp->chgBit(oldp+247,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))))));
        bufp->chgBit(oldp+248,((1U & ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
        bufp->chgBit(oldp+249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast));
        bufp->chgBit(oldp+250,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
        bufp->chgCData(oldp+255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgBit(oldp+257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
        bufp->chgIData(oldp+261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
        bufp->chgBit(oldp+263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+264,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
        bufp->chgSData(oldp+265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgCData(oldp+266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+268,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+269,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+270,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+271,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
        bufp->chgBit(oldp+282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgIData(oldp+283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr),32);
        bufp->chgCData(oldp+284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len),8);
        bufp->chgQData(oldp+285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgBit(oldp+288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+290,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
        bufp->chgIData(oldp+291,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr),32);
        bufp->chgCData(oldp+292,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len),8);
        bufp->chgQData(oldp+293,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgBit(oldp+296,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+299,(((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))) 
                                || (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
        bufp->chgQData(oldp+300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awready));
        bufp->chgBit(oldp+305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+306,((0x0fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr)),28);
        bufp->chgBit(oldp+307,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0))));
        bufp->chgBit(oldp+308,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                   >> 2U))));
        bufp->chgBit(oldp+309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready));
        bufp->chgBit(oldp+310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+312,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arready));
        bufp->chgBit(oldp+314,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+315,((0x0fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)),28);
        bufp->chgBit(oldp+316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready));
        bufp->chgBit(oldp+317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+319,(((((0x0000ff00U & 
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
        bufp->chgCData(oldp+320,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+321,((0x7800U == (0x00007fffU 
                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000000dU)))));
        bufp->chgBit(oldp+322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en));
        bufp->chgBit(oldp+325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
        bufp->chgSData(oldp+330,((0x000007ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                 >> 2U))),11);
        bufp->chgIData(oldp+331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data),32);
        bufp->chgSData(oldp+332,((0x000007ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 2U))),11);
        bufp->chgBit(oldp+333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+334,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3))));
        bufp->chgBit(oldp+335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid));
        bufp->chgBit(oldp+336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_ready));
        bufp->chgBit(oldp+337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bvalid));
        bufp->chgCData(oldp+338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid),4);
        bufp->chgCData(oldp+339,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                   ? (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                                            | ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                     << 6U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                       << 4U)) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12))) 
                                                  << 0x00000018U) 
                                                 | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                       << 6U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                         << 2U) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8))) 
                                                    << 0x00000010U)) 
                                                | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                       << 6U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                         << 2U) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4))) 
                                                    << 8U) 
                                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                        << 6U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                               >> (0x0000001fU 
                                                   & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid), 1U)))))
                                   : 0U)),2);
        bufp->chgBit(oldp+340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arready));
        bufp->chgBit(oldp+341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arvalid));
        bufp->chgBit(oldp+342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rready));
        bufp->chgBit(oldp+343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rvalid));
        bufp->chgCData(oldp+344,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid),4);
        bufp->chgIData(oldp+345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rdata),32);
        bufp->chgCData(oldp+346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rresp),2);
        bufp->chgBit(oldp+347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rlast));
        bufp->chgBit(oldp+348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
        bufp->chgBit(oldp+349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
        bufp->chgBit(oldp+350,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
        bufp->chgBit(oldp+351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+354,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
        bufp->chgSData(oldp+355,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid)))),16);
        bufp->chgSData(oldp+356,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_bid)))),16);
        bufp->chgCData(oldp+357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
        bufp->chgBit(oldp+358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
        bufp->chgCData(oldp+359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
        bufp->chgBit(oldp+360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
        bufp->chgCData(oldp+361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
        bufp->chgCData(oldp+362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
        bufp->chgCData(oldp+363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
        bufp->chgCData(oldp+364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
        bufp->chgCData(oldp+365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
        bufp->chgCData(oldp+366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
        bufp->chgCData(oldp+367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
        bufp->chgCData(oldp+368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
        bufp->chgCData(oldp+369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
        bufp->chgCData(oldp+370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
        bufp->chgCData(oldp+371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
        bufp->chgCData(oldp+372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
        bufp->chgCData(oldp+373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
        bufp->chgCData(oldp+374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
        bufp->chgCData(oldp+375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
        bufp->chgCData(oldp+376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
        bufp->chgCData(oldp+377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
        bufp->chgCData(oldp+378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
        bufp->chgCData(oldp+379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
        bufp->chgCData(oldp+380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
        bufp->chgCData(oldp+381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
        bufp->chgCData(oldp+382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
        bufp->chgCData(oldp+383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
        bufp->chgCData(oldp+384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
        bufp->chgCData(oldp+385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
        bufp->chgCData(oldp+386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
        bufp->chgCData(oldp+387,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
        bufp->chgCData(oldp+388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
        bufp->chgCData(oldp+389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
        bufp->chgCData(oldp+390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
        bufp->chgBit(oldp+391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
        bufp->chgBit(oldp+393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgBit(oldp+394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+395,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
        bufp->chgBit(oldp+396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
        bufp->chgBit(oldp+397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
        bufp->chgCData(oldp+400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
        bufp->chgBit(oldp+404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
        bufp->chgBit(oldp+405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
        bufp->chgBit(oldp+406,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
        bufp->chgBit(oldp+407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
        bufp->chgBit(oldp+408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
        bufp->chgBit(oldp+409,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
        bufp->chgCData(oldp+411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
        bufp->chgCData(oldp+412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
        bufp->chgCData(oldp+413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
        bufp->chgBit(oldp+414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
        bufp->chgBit(oldp+415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
        bufp->chgBit(oldp+416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
        bufp->chgBit(oldp+417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
        bufp->chgBit(oldp+418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
        bufp->chgBit(oldp+419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
        bufp->chgBit(oldp+420,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
        bufp->chgCData(oldp+421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),2);
        bufp->chgBit(oldp+422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgCData(oldp+424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits),2);
        bufp->chgBit(oldp+425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
        bufp->chgBit(oldp+431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
        bufp->chgCData(oldp+434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready));
        bufp->chgBit(oldp+437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid));
        bufp->chgBit(oldp+438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready));
        bufp->chgBit(oldp+439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid));
        bufp->chgBit(oldp+440,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1))));
        bufp->chgBit(oldp+441,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                   >> 1U))));
        bufp->chgBit(oldp+442,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+443,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+444,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)),30);
        bufp->chgBit(oldp+445,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
        bufp->chgCData(oldp+447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1));
        bufp->chgBit(oldp+456,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgSData(oldp+457,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)))),16);
        bufp->chgSData(oldp+458,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)))),16);
        bufp->chgSData(oldp+459,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)))),16);
        bufp->chgSData(oldp+460,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)))),16);
        bufp->chgBit(oldp+461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+471,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+486,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgBit(oldp+497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
        bufp->chgBit(oldp+498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgCData(oldp+501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
        bufp->chgBit(oldp+513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgCData(oldp+516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+518,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+519,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+520,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+521,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+522,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+523,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+524,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgCData(oldp+525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),3);
        bufp->chgBit(oldp+526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgCData(oldp+528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits),3);
        bufp->chgBit(oldp+529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgBit(oldp+535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+540,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+541,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)))));
        bufp->chgBit(oldp+542,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)))));
        bufp->chgBit(oldp+543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+546,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+547,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+548,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+552,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+553,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+554,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+558,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+559,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+560,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+564,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+565,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+566,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+570,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+571,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+572,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+576,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+577,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+578,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+582,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+583,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+584,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+588,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+589,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)))));
        bufp->chgBit(oldp+590,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)))));
        bufp->chgBit(oldp+591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+594,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+595,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+596,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+600,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+601,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+602,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+606,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+607,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+608,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+612,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+613,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+614,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+618,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+619,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+620,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+624,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+625,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+626,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+630,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+631,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+632,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+636,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+637,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+638,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+641,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+642,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+643,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+644,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+646,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+648,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+649,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+650,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+654,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+655,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+656,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+660,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+661,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+662,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+666,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+667,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+668,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+672,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+673,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+674,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+678,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+679,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+680,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+684,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+685,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+686,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+690,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+691,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+692,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+696,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+697,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+698,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+702,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+703,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+704,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+708,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+709,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+710,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+714,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+715,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+716,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+720,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+721,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+722,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+726,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+727,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+728,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid));
        bufp->chgIData(oldp+733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_payload_addr),32);
        bufp->chgBit(oldp+734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_r_ready));
        bufp->chgIData(oldp+735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_code),32);
        bufp->chgIData(oldp+736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt),32);
        bufp->chgBit(oldp+737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__finish));
        bufp->chgIData(oldp+738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd),32);
        bufp->chgCData(oldp+739,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                 >> 7U))),5);
        bufp->chgBit(oldp+740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_grp_rd_vaild));
        bufp->chgCData(oldp+741,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+742,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                 >> 0x00000014U))),5);
        bufp->chgIData(oldp+743,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC),32);
        bufp->chgBit(oldp+744,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild));
        bufp->chgIData(oldp+745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_w_data),32);
        bufp->chgBit(oldp+746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_vaild));
        bufp->chgSData(oldp+747,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                  >> 0x00000014U)),12);
        bufp->chgBit(oldp+748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_ecall));
        bufp->chgBit(oldp+749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_csr_mret));
        bufp->chgBit(oldp+750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid));
        bufp->chgIData(oldp+751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_payload_addr),32);
        bufp->chgCData(oldp+752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__axi_ar_payload_size),3);
        bufp->chgBit(oldp+753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_r_ready));
        bufp->chgBit(oldp+754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_fence_i));
        bufp->chgIData(oldp+755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_csr_r_data),32);
        bufp->chgIData(oldp+756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1_com_encode_r_pc),32);
        bufp->chgIData(oldp+757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs1),32);
        bufp->chgIData(oldp+758,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__com_grp_rs2),32);
        bufp->chgBit(oldp+759,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1))));
        bufp->chgBit(oldp+760,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__axi_s_1_w_ready))));
        bufp->chgBit(oldp+761,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid));
        bufp->chgIData(oldp+762,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_readRsp_data),32);
        bufp->chgCData(oldp+763,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_id),4);
        bufp->chgBit(oldp+764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_last));
        bufp->chgBit(oldp+765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid));
        bufp->chgCData(oldp+766,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_id),4);
        bufp->chgCData(oldp+767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rData_resp),2);
        bufp->chgBit(oldp+768,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arready))));
        bufp->chgBit(oldp+769,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rvalid))));
        bufp->chgIData(oldp+770,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                                   ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rdata)),32);
        bufp->chgCData(oldp+771,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                                   ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid))),4);
        bufp->chgCData(oldp+772,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                                   ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rresp))),2);
        bufp->chgBit(oldp+773,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rlast))));
        bufp->chgBit(oldp+774,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                    ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1))
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arready)))));
        bufp->chgBit(oldp+775,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rvalid)))));
        bufp->chgIData(oldp+776,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_payload_data),32);
        bufp->chgCData(oldp+777,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                                   ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_id)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rid))
                                   : 0U)),4);
        bufp->chgCData(oldp+778,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)
                                   ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                       ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rresp))
                                   : 0U)),2);
        bufp->chgBit(oldp+779,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_last)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_rlast)))));
        bufp->chgBit(oldp+780,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_valid));
        bufp->chgIData(oldp+781,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_addr),32);
        bufp->chgCData(oldp+782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_id),4);
        bufp->chgCData(oldp+783,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_len),8);
        bufp->chgCData(oldp+784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_size),3);
        bufp->chgCData(oldp+785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_burst),2);
        bufp->chgBit(oldp+786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_r_ready));
        bufp->chgBit(oldp+787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_0));
        bufp->chgBit(oldp+788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__vaild));
        bufp->chgBit(oldp+789,(((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+790,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl_u_vaild_4));
        bufp->chgBit(oldp+791,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_r_fire));
        bufp->chgBit(oldp+792,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__encode_w_fire));
        bufp->chgBit(oldp+793,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid));
        bufp->chgBit(oldp+794,(((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid))) 
                                || (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat)))));
        bufp->chgIData(oldp+795,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result
                                   : 0U)),32);
        bufp->chgCData(oldp+796,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id)
                                   : 0U)),4);
        bufp->chgCData(oldp+797,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size)
                                   : 0U)),3);
        bufp->chgCData(oldp+798,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst)
                                   : 0U)),2);
        bufp->chgCData(oldp+799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat),8);
        bufp->chgIData(oldp+800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr),32);
        bufp->chgBit(oldp+801,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat))));
        bufp->chgIData(oldp+802,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result),32);
        bufp->chgIData(oldp+803,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr 
                                  >> 0x0000000cU)),20);
        bufp->chgSData(oldp+804,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base),12);
        bufp->chgSData(oldp+805,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr),12);
        bufp->chgBit(oldp+806,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__axi_writeRsp_rValid)))));
        bufp->chgBit(oldp+807,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_valid))));
        bufp->chgBit(oldp+808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1));
        bufp->chgBit(oldp+809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_payload_last_1));
        bufp->chgIData(oldp+810,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result_1
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_addr)),32);
        bufp->chgCData(oldp+811,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id_1)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_id))),4);
        bufp->chgCData(oldp+812,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_size))),3);
        bufp->chgCData(oldp+813,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst_1)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_ar_payload_burst))),2);
        bufp->chgBit(oldp+814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1));
        bufp->chgCData(oldp+815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_len_1),8);
        bufp->chgCData(oldp+816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1),8);
        bufp->chgIData(oldp+817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1),32);
        bufp->chgCData(oldp+818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_id_1),4);
        bufp->chgCData(oldp+819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1),3);
        bufp->chgCData(oldp+820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_burst_1),2);
        bufp->chgBit(oldp+821,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_beat_1))));
        bufp->chgCData(oldp+822,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))),2);
        bufp->chgIData(oldp+823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result_1),32);
        bufp->chgIData(oldp+824,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_addr_1 
                                  >> 0x0000000cU)),20);
        bufp->chgCData(oldp+825,((((2U == (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1)))))),3);
        bufp->chgSData(oldp+826,((((1U < (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))) 
                                   << 1U) | (0U < (3U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_transaction_size_1))))),12);
        bufp->chgSData(oldp+827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_base_1),12);
        bufp->chgSData(oldp+828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_baseIncr_1),12);
        bufp->chgCData(oldp+829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_wrapCase_1),3);
        bufp->chgIData(oldp+830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr),32);
        bufp->chgCData(oldp+831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_size),3);
        bufp->chgCData(oldp+832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_burst),2);
        bufp->chgBit(oldp+833,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rValid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar_axi_s_1_r_ready))));
        bufp->chgIData(oldp+834,((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_rData_fragment_addr)),32);
        bufp->chgIData(oldp+835,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid)
                                   ? (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__Axi4Incr_result)
                                   : 0U)),32);
        bufp->chgIData(oldp+836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_L),32);
        bufp->chgIData(oldp+837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__mtime_H),32);
        bufp->chgIData(oldp+838,((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle)),32);
        bufp->chgIData(oldp+839,((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle 
                                          >> 0x00000020U))),32);
        bufp->chgQData(oldp+840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcycle),64);
        bufp->chgIData(oldp+842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mstatus),32);
        bufp->chgIData(oldp+843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mcause),32);
        bufp->chgIData(oldp+844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mepc),32);
        bufp->chgIData(oldp+845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__csr_1__DOT__mtvec),32);
        bufp->chgIData(oldp+846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__IFU_cnt),32);
        bufp->chgIData(oldp+847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__LSU_cnt),32);
        bufp->chgIData(oldp+848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__EXU_cnt),32);
        bufp->chgBit(oldp+849,(((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_wantStart));
        bufp->chgBit(oldp+851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_grp_flag));
        bufp->chgCData(oldp+852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg),3);
        bufp->chgCData(oldp+853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext),3);
        bufp->chgBit(oldp+854,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+855,(((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+856,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+857,(((3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+858,(((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+859,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+860,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+861,(((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+862,(((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext)) 
                                & (5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgIData(oldp+863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateReg_string),32);
        bufp->chgIData(oldp+864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__ctrl__DOT__s_stateNext_string),32);
        bufp->chgCData(oldp+865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_ar_size),4);
        bufp->chgBit(oldp+866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ErrorReg));
        bufp->chgBit(oldp+867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__ebreak));
        bufp->chgIData(oldp+868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code),32);
        bufp->chgIData(oldp+869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_I),32);
        bufp->chgIData(oldp+870,((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code)),32);
        bufp->chgIData(oldp+871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__imm_S),32);
        bufp->chgIData(oldp+872,((((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
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
        bufp->chgIData(oldp+873,(((((0x00000ffeU & 
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
        bufp->chgBit(oldp+874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_flag));
        bufp->chgBit(oldp+875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__mem_ar_flag));
        bufp->chgBit(oldp+876,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_ar_valid) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel) 
                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                       ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_buffer_valid_1)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__clint__DOT__unburstify_result_ready_1))
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arready))))));
        bufp->chgBit(oldp+877,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__axi4lite_w_ready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_axi4lite_w_valid))));
        bufp->chgIData(oldp+878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__pc_pc),32);
        bufp->chgIData(oldp+879,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__code 
                                                 >> 0x0000000fU))),32);
        bufp->chgIData(oldp+880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_0),32);
        bufp->chgIData(oldp+881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_1),32);
        bufp->chgIData(oldp+882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_2),32);
        bufp->chgIData(oldp+883,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_3),32);
        bufp->chgIData(oldp+884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_4),32);
        bufp->chgIData(oldp+885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_5),32);
        bufp->chgIData(oldp+886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_6),32);
        bufp->chgIData(oldp+887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_7),32);
        bufp->chgIData(oldp+888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_8),32);
        bufp->chgIData(oldp+889,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_9),32);
        bufp->chgIData(oldp+890,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_10),32);
        bufp->chgIData(oldp+891,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_11),32);
        bufp->chgIData(oldp+892,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_12),32);
        bufp->chgIData(oldp+893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_13),32);
        bufp->chgIData(oldp+894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_14),32);
        bufp->chgIData(oldp+895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_15),32);
        bufp->chgIData(oldp+896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_16),32);
        bufp->chgIData(oldp+897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_17),32);
        bufp->chgIData(oldp+898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_18),32);
        bufp->chgIData(oldp+899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_19),32);
        bufp->chgIData(oldp+900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_20),32);
        bufp->chgIData(oldp+901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_21),32);
        bufp->chgIData(oldp+902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_22),32);
        bufp->chgIData(oldp+903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_23),32);
        bufp->chgIData(oldp+904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_24),32);
        bufp->chgIData(oldp+905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_25),32);
        bufp->chgIData(oldp+906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_26),32);
        bufp->chgIData(oldp+907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_27),32);
        bufp->chgIData(oldp+908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_28),32);
        bufp->chgIData(oldp+909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_29),32);
        bufp->chgIData(oldp+910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_30),32);
        bufp->chgIData(oldp+911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__reg_31),32);
        bufp->chgBit(oldp+912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__grp_1__DOT__rd_vaild));
        bufp->chgBit(oldp+913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_com_valid));
        bufp->chgBit(oldp+914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_ar_valid));
        bufp->chgBit(oldp+915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1_axi4lite_r_ready));
        bufp->chgIData(oldp+916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem
                                 [(0x0000000fU & ((0x0000001fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (3U 
                                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                                       >> 4U)), 2U)) 
                                                  + 
                                                  (3U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                      >> 2U))))]),32);
        bufp->chgIData(oldp+917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__error_cnt),32);
        bufp->chgBit(oldp+918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_0));
        bufp->chgBit(oldp+919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_1));
        bufp->chgBit(oldp+920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_2));
        bufp->chgBit(oldp+921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_valid_3));
        bufp->chgCData(oldp+922,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                        >> 2U))),2);
        bufp->chgCData(oldp+923,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                        >> 4U))),2);
        bufp->chgIData(oldp+924,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                  >> 6U)),26);
        bufp->chgCData(oldp+925,((0x0000001fU & (VL_SHIFTL_III(5,5,32, 
                                                               (3U 
                                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                                   >> 4U)), 2U) 
                                                 + 
                                                 (3U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt 
                                                     >> 2U))))),5);
        bufp->chgIData(oldp+926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_tag),26);
        bufp->chgBit(oldp+927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_wantStart));
        bufp->chgBit(oldp+928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_start_flag));
        bufp->chgCData(oldp+929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_cnt),3);
        bufp->chgBit(oldp+930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_axi_r_ar_flag));
        bufp->chgCData(oldp+931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg),2);
        bufp->chgCData(oldp+932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext),2);
        bufp->chgBit(oldp+933,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__turn__DOT__io_slave_arready)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache_axi_ar_valid))));
        bufp->chgBit(oldp+934,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__axi_r_fire));
        bufp->chgBit(oldp+935,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+936,(((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+937,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+938,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+939,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgBit(oldp+940,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext)) 
                                & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg)))));
        bufp->chgQData(oldp+941,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))
                                   ? 0x000000424f4f5420ULL
                                   : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))
                                       ? 0x0000007374617274ULL
                                       : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateReg))
                                           ? 0x0000006178695f72ULL
                                           : 0x0000003f3f3f3f3fULL)))),40);
        bufp->chgQData(oldp+943,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext))
                                   ? 0x000000424f4f5420ULL
                                   : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext))
                                       ? 0x0000007374617274ULL
                                       : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__s_stateNext))
                                           ? 0x0000006178695f72ULL
                                           : 0x0000003f3f3f3f3fULL)))),40);
        bufp->chgIData(oldp+945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[0]),32);
        bufp->chgIData(oldp+946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[1]),32);
        bufp->chgIData(oldp+947,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[2]),32);
        bufp->chgIData(oldp+948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[3]),32);
        bufp->chgIData(oldp+949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[4]),32);
        bufp->chgIData(oldp+950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[5]),32);
        bufp->chgIData(oldp+951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[6]),32);
        bufp->chgIData(oldp+952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[7]),32);
        bufp->chgIData(oldp+953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[8]),32);
        bufp->chgIData(oldp+954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[9]),32);
        bufp->chgIData(oldp+955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[10]),32);
        bufp->chgIData(oldp+956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[11]),32);
        bufp->chgIData(oldp+957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[12]),32);
        bufp->chgIData(oldp+958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[13]),32);
        bufp->chgIData(oldp+959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[14]),32);
        bufp->chgIData(oldp+960,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__cache__DOT__cache_mem[15]),32);
        bufp->chgIData(oldp+961,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC_vaild)
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2_com_pc_nPC
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__PC_cnt)),32);
        bufp->chgBit(oldp+962,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__flag));
        bufp->chgBit(oldp+963,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__npc_flag));
        bufp->chgIData(oldp+964,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__pc_1__DOT__pc_1__DOT__code_reg),32);
        bufp->chgBit(oldp+965,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__sel));
        bufp->chgBit(oldp+966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__xbar__DOT__clint_en));
        bufp->chgBit(oldp+967,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+971,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+972,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+975,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgSData(oldp+977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__led_reg),16);
        bufp->chgSData(oldp+978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__sw_reg),16);
        bufp->chgIData(oldp+979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__seg_reg),32);
        bufp->chgBit(oldp+980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_ps2_get));
        bufp->chgCData(oldp+981,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_ps2_getdata),8);
        bufp->chgCData(oldp+982,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_data_1),8);
        bufp->chgBit(oldp+983,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2_get_regNext));
        bufp->chgSData(oldp+984,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__buffer),10);
        bufp->chgCData(oldp+985,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__count),4);
        bufp->chgCData(oldp+986,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+987,((IData)((4U == (6U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__ps2__DOT__ps2_clk_sync))))));
        bufp->chgIData(oldp+988,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr)),32);
        bufp->chgBit(oldp+989,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+990,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
        bufp->chgCData(oldp+991,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+992,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+993,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+994,((0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                                                 >> 0x00000010U))),8);
        bufp->chgCData(oldp+995,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                                  >> 0x00000018U)),8);
        bufp->chgIData(oldp+996,(((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata) 
                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                      << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgCData(oldp+997,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+1000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+1001,((0x000000ffU & ((IData)(0x0dU) 
                                                  + 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgIData(oldp+1002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_paddr),32);
        bufp->chgBit(oldp+1003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_psel));
        bufp->chgBit(oldp+1004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_penable));
        bufp->chgCData(oldp+1005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pprot),3);
        bufp->chgBit(oldp+1006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwrite));
        bufp->chgIData(oldp+1007,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pwdata),32);
        bufp->chgCData(oldp+1008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pstrb),4);
        bufp->chgBit(oldp+1009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_wantStart));
        bufp->chgIData(oldp+1010,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_addr),32);
        bufp->chgIData(oldp+1011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_data),32);
        bufp->chgCData(oldp+1012,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_cnt),4);
        bufp->chgCData(oldp+1013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg),3);
        bufp->chgWData(oldp+1014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg_string),72);
        bufp->chgCData(oldp+1017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+1018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1024,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1030,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1031,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1032,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1033,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+1034,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+1035,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+1036,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+1037,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+1038,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+1039,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+1040,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+1041,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+1042,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+1043,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+1044,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+1045,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+1046,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+1047,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+1048,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+1049,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgIData(oldp+1050,((0x00ffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram_spinal_port0)),24);
        bufp->chgIData(oldp+1051,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram_spinal_port0),32);
        bufp->chgSData(oldp+1052,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__h_valid)
                                    ? (0x000003ffU 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt) 
                                          - (IData)(0x0091U)))
                                    : 0U)),10);
        bufp->chgSData(oldp+1053,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__v_valid)
                                    ? (0x000003ffU 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt) 
                                          - (IData)(0x0024U)))
                                    : 0U)),10);
        bufp->chgBit(oldp+1054,((0x0060U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt))));
        bufp->chgBit(oldp+1055,((2U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt))));
        bufp->chgBit(oldp+1056,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__h_valid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__v_valid))));
        bufp->chgCData(oldp+1057,((0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram_spinal_port0 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1058,((0x000000ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram_spinal_port0 
                                                  >> 8U))),8);
        bufp->chgCData(oldp+1059,((0x000000ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram_spinal_port0)),8);
        bufp->chgSData(oldp+1060,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__x_cnt),10);
        bufp->chgSData(oldp+1061,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__y_cnt),10);
        bufp->chgBit(oldp+1062,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__h_valid));
        bufp->chgBit(oldp+1063,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga__DOT__v_valid));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+1064,((IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_psel)))));
        bufp->chgBit(oldp+1065,((IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_penable)))));
        bufp->chgIData(oldp+1066,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT___zz_when_1)
                                    ? ((0x0004afffU 
                                        >= (0x0007ffffU 
                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
                                               >> 2U)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram
                                       [(0x0007ffffU 
                                         & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
                                            >> 2U))]
                                        : 0U) : 0U)),32);
        bufp->chgBit(oldp+1067,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_psel))));
        bufp->chgBit(oldp+1068,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_penable))));
        bufp->chgBit(oldp+1069,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_psel))));
        bufp->chgBit(oldp+1070,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_penable))));
        bufp->chgBit(oldp+1071,((IData)(((0U == (0x30000000U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_penable)))));
        bufp->chgBit(oldp+1072,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_psel))));
        bufp->chgCData(oldp+1073,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_spi_in_pprot)
                                    : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__apb_delayer_my_inst__DOT__flag)
                                        ? 0U : 1U))),3);
        bufp->chgIData(oldp+1074,(((0x0004afffU >= 
                                    (0x0007ffffU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
                                      >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__vga_ram
                                   [(0x0007ffffU & 
                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
                                      >> 2U))] : 0U)),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+1075,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1076,(((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1077,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1078,(((3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1079,(((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1080,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1081,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1082,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1083,(((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
        bufp->chgBit(oldp+1084,(((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext)) 
                                 & (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateReg)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+1085,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck));
        bufp->chgCData(oldp+1086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss),8);
        bufp->chgBit(oldp+1087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgBit(oldp+1088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rvalid));
        bufp->chgCData(oldp+1089,((0x0000000fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
        bufp->chgIData(oldp+1090,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
        bufp->chgBit(oldp+1091,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                       >> 4U))));
        bufp->chgBit(oldp+1092,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bvalid));
        bufp->chgBit(oldp+1093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+1094,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+1095,((0x0000000fU & ((8U 
                                                   > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (1U 
                                                   & (0xebU 
                                                      >> 
                                                      (7U 
                                                       & ((IData)(7U) 
                                                          - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x00000014U)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x00000010U)
                                                     : 
                                                    ((0x0aU 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0x0000000cU)
                                                      : 
                                                     ((0x0bU 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((0x0cU 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((0x0dU 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U))))))))),4);
        bufp->chgBit(oldp+1096,((0x0eU > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+1097,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+1098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+1099,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+1100,((0x1cU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+1101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
        bufp->chgBit(oldp+1102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+1103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+1104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+1105,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                          >> 1U) - (IData)(2U)))),2);
        bufp->chgBit(oldp+1106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+1107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+1108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+1109,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+1110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
        bufp->chgIData(oldp+1111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
        bufp->chgIData(oldp+1112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+1113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+1114,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+1115,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+1116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+1117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+1118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+1119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+1120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+1121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+1122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+1123,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+1124,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+1125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
        bufp->chgBit(oldp+1126,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                     >> 5U)) & (0U 
                                                != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+1127,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 5U))));
        bufp->chgBit(oldp+1128,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+1129,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+1130,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+1131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+1132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+1133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+1134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+1135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+1136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+1138,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+1139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+1140,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+1141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+1142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+1143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+1144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgBit(oldp+1146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgIData(oldp+1147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
        bufp->chgBit(oldp+1148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+1149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
        bufp->chgSData(oldp+1150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+1151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+1152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+1153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+1154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+1155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+1156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+1157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+1158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+1159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgBit(oldp+1160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgBit(oldp+1161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
        bufp->chgBit(oldp+1162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_pready_i));
        bufp->chgIData(oldp+1163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_in_prdata_i),32);
        bufp->chgSData(oldp+1164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+1165,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+1166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+1167,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+1171,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 9U))));
        bufp->chgBit(oldp+1172,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1173,((0x0000007fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+1174,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 8U))));
        bufp->chgBit(oldp+1175,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000bU))));
        bufp->chgBit(oldp+1176,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000cU))));
        bufp->chgBit(oldp+1177,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000dU))));
        bufp->chgBit(oldp+1178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+1179,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+1180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+1181,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
        bufp->chgSData(oldp+1182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+1183,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+1184,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+1185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+1186,((0x000000ffU & ((0x00000800U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                   ? 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                   - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                   : 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                   - (IData)(1U))))),8);
        bufp->chgCData(oldp+1187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+1188,((((0x00000200U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                                 & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck)))));
        bufp->chgBit(oldp+1189,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                 & ((0x00000400U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)))));
        bufp->chgBit(oldp+1190,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1191,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+1192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+1193,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U))));
        bufp->chgBit(oldp+1194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+1195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+1196,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+1197,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+1198,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+1199,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+1200,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+1201,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+1202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+1203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+1204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+1205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+1206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+1207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+1208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+1209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+1210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+1211,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                       >> 7U))));
        bufp->chgBit(oldp+1212,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 4U))));
        bufp->chgBit(oldp+1213,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                       >> 3U))));
        bufp->chgBit(oldp+1214,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                       >> 2U))));
        bufp->chgBit(oldp+1215,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                       >> 1U))));
        bufp->chgBit(oldp+1216,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))));
        bufp->chgCData(oldp+1217,(((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                       << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                    << 4U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))),8);
        bufp->chgBit(oldp+1218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+1219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+1220,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
        bufp->chgBit(oldp+1221,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
        bufp->chgBit(oldp+1222,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
        bufp->chgBit(oldp+1223,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+1224,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+1225,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+1226,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+1227,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+1228,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+1229,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+1230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+1231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+1232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+1233,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+1234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+1235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+1236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+1237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+1238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+1239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+1240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+1241,((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [1U] 
                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U] 
                                                      | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U] 
                                                         | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [5U] 
                                                            | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [6U] 
                                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [7U] 
                                                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [8U] 
                                                                     | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [9U] 
                                                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0x0aU] 
                                                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0x0bU] 
                                                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0cU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0dU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0eU] 
                                                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0fU]))))))))))))))))));
        bufp->chgBit(oldp+1242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse));
        bufp->chgCData(oldp+1243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+1244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+1245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+1246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+1247,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+1248,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))))));
        bufp->chgCData(oldp+1249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+1250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+1251,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+1252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i));
        bufp->chgCData(oldp+1253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+1254,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+1255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+1256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+1257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+1258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+1259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+1260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+1261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+1262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+1263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+1264,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+1265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+1266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+1267,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+1268,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+1269,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+1270,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+1271,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+1272,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+1273,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+1274,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+1275,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+1276,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+1277,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+1278,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+1279,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+1280,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+1281,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+1282,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+1283,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+1284,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+1285,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+1286,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+1287,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+1288,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+1289,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+1290,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+1291,((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1292,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1293,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+1294,((0x0000000fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                                  - (IData)(1U)))),4);
        bufp->chgSData(oldp+1295,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+1296,((0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                                  >> 2U))),8);
        bufp->chgCData(oldp+1297,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+1298,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+1299,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+1300,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+1301,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+1302,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+1303,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+1304,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+1305,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+1306,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+1307,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+1308,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+1309,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+1310,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+1311,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+1312,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+1313,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+1314,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+1315,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+1316,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+1317,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+1318,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+1319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+1320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+1321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+1322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+1323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+1324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+1325,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+1326,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0aU]),3);
        bufp->chgCData(oldp+1327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0bU]),3);
        bufp->chgCData(oldp+1328,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0cU]),3);
        bufp->chgCData(oldp+1329,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0dU]),3);
        bufp->chgCData(oldp+1330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0eU]),3);
        bufp->chgCData(oldp+1331,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0x0fU]),3);
        bufp->chgCData(oldp+1332,((0x000000ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                                  >> 3U))),8);
        bufp->chgCData(oldp+1333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+1334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+1335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+1336,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+1337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+1338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+1339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+1340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+1341,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+1342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+1343,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgBit(oldp+1344,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss) 
                                       >> 7U))));
        bufp->chgBit(oldp+1345,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+1346,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+1347,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+1348,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+1349,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr),24);
        bufp->chgIData(oldp+1350,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+1351,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+1352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr),32);
        bufp->chgBit(oldp+1353,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                    | (IData)(((0x20000000U 
                                                == 
                                                (0x30000000U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))))));
        bufp->chgIData(oldp+1354,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)),30);
        bufp->chgBit(oldp+1355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
        bufp->chgBit(oldp+1356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
        bufp->chgIData(oldp+1357,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)),29);
        bufp->chgBit(oldp+1358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
        bufp->chgBit(oldp+1359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
        bufp->chgIData(oldp+1360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
        bufp->chgBit(oldp+1361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
        bufp->chgBit(oldp+1362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
        bufp->chgIData(oldp+1363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
        bufp->chgBit(oldp+1364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
        bufp->chgBit(oldp+1365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel));
        bufp->chgBit(oldp+1366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable));
        bufp->chgBit(oldp+1367,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel))));
        bufp->chgBit(oldp+1368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__apb_in_penable));
        bufp->chgBit(oldp+1369,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1371,((0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
                                              >> 0x0000001cU)))));
        bufp->chgBit(oldp+1372,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1374,((2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr 
                                              >> 0x0000001cU)))));
        bufp->chgBit(oldp+1375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
        bufp->chgCData(oldp+1376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
        bufp->chgIData(oldp+1377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
        bufp->chgCData(oldp+1378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
        bufp->chgCData(oldp+1379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
        bufp->chgBit(oldp+1380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
        bufp->chgCData(oldp+1381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
        bufp->chgIData(oldp+1382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
        bufp->chgCData(oldp+1383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
        bufp->chgCData(oldp+1384,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
        bufp->chgBit(oldp+1385,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
        bufp->chgIData(oldp+1386,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata),32);
        bufp->chgIData(oldp+1387,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)),32);
        bufp->chgBit(oldp+1388,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__u_my_gpio__DOT__valid));
        bufp->chgBit(oldp+1389,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__my_ps2_inst__DOT__valid));
        bufp->chgBit(oldp+1390,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgIData(oldp+1392,((0x00fffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)),24);
        bufp->chgIData(oldp+1393,((0x00ffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)),24);
        bufp->chgCData(oldp+1394,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                    : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                        : 0U))),8);
        bufp->chgIData(oldp+1395,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)),32);
        bufp->chgIData(oldp+1396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr),32);
        bufp->chgBit(oldp+1397,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_psel));
        bufp->chgBit(oldp+1398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_penable));
        bufp->chgBit(oldp+1399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_pwrite));
        bufp->chgIData(oldp+1400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in),32);
        bufp->chgCData(oldp+1401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel),4);
        bufp->chgCData(oldp+1402,((0x0000001fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr)),5);
        bufp->chgBit(oldp+1403,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x00000014U == 
                                    (0x0000001cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr)))));
        bufp->chgBit(oldp+1404,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x00000010U == 
                                    (0x0000001cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr)))));
        bufp->chgCData(oldp+1405,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
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
        bufp->chgBit(oldp+1406,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x00000018U == 
                                    (0x0000001cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr)))));
        bufp->chgCData(oldp+1407,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgBit(oldp+1408,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__my_flag));
        bufp->chgCData(oldp+1409,((7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)),3);
        bufp->chgCData(oldp+1410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i),8);
        bufp->chgBit(oldp+1412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_inst__DOT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_pready));
        bufp->chgIData(oldp+1414,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_prdata),32);
        bufp->chgBit(oldp+1415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
        bufp->chgIData(oldp+1416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
        bufp->chgBit(oldp+1417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
        bufp->chgCData(oldp+1418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout),4);
        bufp->chgCData(oldp+1419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten),4);
        bufp->chgCData(oldp+1420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+1421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+1422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+1423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgBit(oldp+1424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o));
        bufp->chgBit(oldp+1425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
        bufp->chgBit(oldp+1426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgCData(oldp+1427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext),3);
        bufp->chgWData(oldp+1428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__s_stateNext_string),72);
        bufp->chgCData(oldp+1431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
        bufp->chgCData(oldp+1432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+1433,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        bufp->chgBit(oldp+1434,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1435,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1436,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1437,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgSData(oldp+1438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+1439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgCData(oldp+1440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
        bufp->chgBit(oldp+1441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_accept_i));
        bufp->chgBit(oldp+1442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_ack_i));
        bufp->chgCData(oldp+1443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgCData(oldp+1444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
        bufp->chgCData(oldp+1445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgIData(oldp+1446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+1447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
        bufp->chgBit(oldp+1450,((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1451,((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1452,((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1453,((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1454,((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1455,((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1456,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgBit(oldp+1457,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+1458,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__out_en));
        bufp->chgCData(oldp+1459,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd_data),8);
        bufp->chgCData(oldp+1460,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cnt),8);
        bufp->chgIData(oldp+1461,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr_z),24);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+1462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready));
        bufp->chgBit(oldp+1463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awready));
        bufp->chgBit(oldp+1464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wready));
        bufp->chgIData(oldp+1465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o),32);
        bufp->chgCData(oldp+1466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o),4);
        bufp->chgBit(oldp+1467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+1468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+1469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+1470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+1471,((0x000003fcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o)),13);
        bufp->chgSData(oldp+1472,((0x00000fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                                                  >> 0x0000000cU))),13);
        bufp->chgCData(oldp+1473,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                                         >> 0x0000000aU))),2);
        bufp->chgCData(oldp+1474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
        bufp->chgBit(oldp+1475,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__start_flag));
    }
    bufp->chgBit(oldp+1476,(vlSelfRef.clock));
    bufp->chgBit(oldp+1477,(vlSelfRef.reset));
    bufp->chgSData(oldp+1478,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+1479,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+1480,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+1481,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+1482,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+1483,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+1484,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+1485,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+1486,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+1487,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+1488,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+1489,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+1490,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+1491,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+1492,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+1493,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+1494,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+1495,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+1496,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+1497,(vlSelfRef.externalPins_uart_tx));
    bufp->chgBit(oldp+1498,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss) 
                                   | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x0000001fU)))));
    bufp->chgBit(oldp+1499,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->chgBit(oldp+1500,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->chgCData(oldp+1501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__din),4);
    bufp->chgBit(oldp+1502,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgIData(oldp+1503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dq),32);
    bufp->chgBit(oldp+1504,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))));
    bufp->chgIData(oldp+1505,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel)
                                ? ((((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                      ? ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                          ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                          : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                              ? (((
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                              : 0U))
                                      : ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                          ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                              : (0x000000c0U 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                          : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                              ? ((0x00000080U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                  ? 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                  >> 8U)
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                              : ((0x00000080U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))) 
                                    << 0x00000018U) 
                                   | ((0x00ff0000U 
                                       & (((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                            ? ((2U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                : (
                                                   (1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? 
                                                   ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                            : ((2U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                : (
                                                   (1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))) 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & (((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                               ? ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? 
                                                   ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                               : ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))) 
                                             << 8U)) 
                                         | (0x000000ffU 
                                            & ((4U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                ? (
                                                   (2U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                     ? 
                                                    ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                      >> 8U)
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out)))))))))
                                : 0U)),32);
    bufp->chgBit(oldp+1506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_1__DOT__encode_2__DOT__encode_2__DOT__rst));
    bufp->chgBit(oldp+1507,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+1508,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgBit(oldp+1509,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)
                                    ? (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                                          | ((0x1cU 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re))))
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i)))));
    bufp->chgBit(oldp+1510,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
                              ? (0x1cU != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))));
    bufp->chgBit(oldp+1511,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                                    ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done))
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr)))));
    bufp->chgCData(oldp+1512,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready))
                                ? (0x00000020U | ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid)))
                                : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awready))
                                    ? (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)) 
                                        << 4U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid))
                                    : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
                                        << 5U) | ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+1513,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->chgIData(oldp+1514,(((0U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                             >> 2U)))
                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                                : ((1U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                 >> 2U)))
                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                                    : ((2U == (7U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                >> 2U)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                                        : ((3U == (7U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                      >> 2U)))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u_spi_xip__DOT__spi_in_paddr 
                                                    >> 2U)))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                                : (
                                                   (5U 
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
    bufp->chgBit(oldp+1515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->chgBit(oldp+1516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->chgCData(oldp+1517,((0x000000ffU & ((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                               ? ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? 
                                                   ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                               : ((2U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_paddr)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))))),8);
    bufp->chgSData(oldp+1518,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
                                << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->chgIData(oldp+1519,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+1520,(((0x00fffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                               << 1U)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->chgIData(oldp+1521,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->chgCData(oldp+1522,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__out_data),4);
    bufp->chgIData(oldp+1523,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__w_data),32);
    bufp->chgIData(oldp+1524,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__r_data),32);
    bufp->chgIData(oldp+1525,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__dq_out),32);
    bufp->chgBit(oldp+1526,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__dq_oen));
    bufp->chgSData(oldp+1527,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__active_row),13);
    bufp->chgCData(oldp+1528,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__active_bank),2);
    bufp->chgCData(oldp+1529,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__CAS_latch),3);
    bufp->chgCData(oldp+1530,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__BURST_length),3);
    bufp->chgIData(oldp+1531,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__full_addr),32);
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
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
