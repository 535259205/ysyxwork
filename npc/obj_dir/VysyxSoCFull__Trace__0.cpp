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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp),2);
        bufp->chgIData(oldp+1,(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_readRsp_data),32);
        bufp->chgCData(oldp+2,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp),2);
        bufp->chgIData(oldp+3,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data),32);
        bufp->chgIData(oldp+4,(vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_r_data),32);
        bufp->chgCData(oldp+5,(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp),2);
        bufp->chgIData(oldp+6,(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_readRsp_data),32);
        bufp->chgIData(oldp+7,(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rData_addr),32);
        bufp->chgCData(oldp+8,(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rData_prot),3);
        bufp->chgIData(oldp+9,((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rData_addr)),32);
        bufp->chgBit(oldp+10,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_ar_valid));
        bufp->chgBit(oldp+11,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_r_ready));
        bufp->chgIData(oldp+12,(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rData_addr),32);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rData_prot),3);
        bufp->chgIData(oldp+14,((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rData_addr)),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__uart_reg),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_addr),32);
        bufp->chgCData(oldp+17,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_prot),3);
        bufp->chgIData(oldp+18,((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_addr)),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__uart_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+20,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
        bufp->chgIData(oldp+21,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgIData(oldp+22,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data
                                  : 0U)),32);
        bufp->chgCData(oldp+23,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb)
                                  : 0U)),4);
        bufp->chgBit(oldp+24,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag) 
                               & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))));
        bufp->chgIData(oldp+25,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)
                                  ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_payload_addr
                                  : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__PC_cnt)),32);
        bufp->chgCData(oldp+26,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)
                                  ? 0U : 4U)),3);
        bufp->chgBit(oldp+27,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid));
        bufp->chgIData(oldp+28,(((4U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgIData(oldp+29,(((4U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data
                                  : 0U)),32);
        bufp->chgCData(oldp+30,(((4U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb)
                                  : 0U)),4);
        bufp->chgBit(oldp+31,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
                                  >> 2U))));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid));
        bufp->chgIData(oldp+33,(((2U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgIData(oldp+34,(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__mmio__DOT__w_data),32);
        bufp->chgCData(oldp+35,(((2U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb)
                                  : 0U)),4);
        bufp->chgBit(oldp+36,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
                                  >> 1U))));
        bufp->chgBit(oldp+37,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid));
        bufp->chgIData(oldp+38,(((8U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgIData(oldp+39,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data),32);
        bufp->chgCData(oldp+40,(((8U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb)
                                  : 0U)),4);
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
                                  >> 3U))));
        bufp->chgBit(oldp+42,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready));
        bufp->chgBit(oldp+43,(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid));
        bufp->chgBit(oldp+44,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rValid)))));
        bufp->chgBit(oldp+45,(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__AxiIn_ar_rValid));
        bufp->chgBit(oldp+46,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready));
        bufp->chgBit(oldp+47,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid));
        bufp->chgBit(oldp+48,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rValid)))));
        bufp->chgBit(oldp+49,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rValid));
        bufp->chgBit(oldp+50,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready));
        bufp->chgBit(oldp+51,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready));
        bufp->chgBit(oldp+52,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid));
        bufp->chgBit(oldp+53,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready));
        bufp->chgBit(oldp+54,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid));
        bufp->chgBit(oldp+55,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready));
        bufp->chgBit(oldp+56,(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid));
        bufp->chgBit(oldp+57,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rValid)))));
        bufp->chgBit(oldp+58,(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__AxiIn_ar_rValid));
        bufp->chgCData(oldp+59,(vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_w_len),2);
        bufp->chgBit(oldp+60,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid))));
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid))));
        bufp->chgBit(oldp+62,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid) 
                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag) 
                                  & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))))));
        bufp->chgCData(oldp+63,(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__mmio_w_len),2);
        bufp->chgBit(oldp+64,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))));
        bufp->chgBit(oldp+65,((((IData)(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag)) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
                                  >> 2U))));
        bufp->chgIData(oldp+66,(((4U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr)
                                  : 0U)),32);
        bufp->chgQData(oldp+67,(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__mtime),64);
        bufp->chgIData(oldp+69,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__PC_cnt),32);
        bufp->chgIData(oldp+70,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_grp_rd),32);
        bufp->chgCData(oldp+71,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                >> 7U))),5);
        bufp->chgBit(oldp+72,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_grp_rd_vaild));
        bufp->chgCData(oldp+73,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+74,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                >> 0x00000014U))),5);
        bufp->chgIData(oldp+75,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC),32);
        bufp->chgBit(oldp+76,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild));
        bufp->chgIData(oldp+77,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_w_data),32);
        bufp->chgBit(oldp+78,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_vaild));
        bufp->chgSData(oldp+79,((vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                 >> 0x00000014U)),12);
        bufp->chgBit(oldp+80,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_ecall));
        bufp->chgIData(oldp+81,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__pc_pc),32);
        bufp->chgBit(oldp+82,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_csr_mret));
        bufp->chgBit(oldp+83,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid));
        bufp->chgIData(oldp+84,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr),32);
        bufp->chgIData(oldp+85,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_data),32);
        bufp->chgCData(oldp+86,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_payload_strb),4);
        bufp->chgBit(oldp+87,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag));
        bufp->chgBit(oldp+88,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid));
        bufp->chgIData(oldp+89,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_payload_addr),32);
        bufp->chgBit(oldp+90,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready));
        bufp->chgCData(oldp+91,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_ar_size),4);
        bufp->chgBit(oldp+92,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_fence_i));
        bufp->chgIData(oldp+93,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_r_data),32);
        bufp->chgIData(oldp+94,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1_com_encode_r_pc),32);
        bufp->chgIData(oldp+95,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1),32);
        bufp->chgIData(oldp+96,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2),32);
        bufp->chgBit(oldp+97,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready) 
                               & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)))));
        bufp->chgBit(oldp+98,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid) 
                               & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)))));
        bufp->chgCData(oldp+99,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_payload_resp)
                                  : 2U)),2);
        bufp->chgBit(oldp+100,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid));
        bufp->chgBit(oldp+103,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)) 
                                   >> 1U))));
        bufp->chgBit(oldp+104,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid));
        bufp->chgCData(oldp+105,(((2U & ((IData)(1U) 
                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_payload_resp)
                                   : 2U)),2);
        bufp->chgBit(oldp+106,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl_u_vaild_0));
        bufp->chgBit(oldp+107,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl_r_sel));
        bufp->chgCData(oldp+108,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel),2);
        bufp->chgBit(oldp+109,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel));
        bufp->chgBit(oldp+110,(((0x80000000U <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr) 
                                & (0x80ffffffU > vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr))));
        bufp->chgBit(oldp+111,(((0x10000000U <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr) 
                                & (0x1000ffffU > vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr))));
        bufp->chgBit(oldp+112,(((0x11000000U <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr) 
                                & (0x1100ffffU > vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr))));
        bufp->chgIData(oldp+113,((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcycle)),32);
        bufp->chgIData(oldp+114,((IData)((vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcycle 
                                          >> 0x00000020U))),32);
        bufp->chgQData(oldp+115,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcycle),64);
        bufp->chgIData(oldp+117,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mstatus),32);
        bufp->chgIData(oldp+118,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mcause),32);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec),32);
        bufp->chgBit(oldp+121,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_wantStart));
        bufp->chgCData(oldp+122,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg),3);
        bufp->chgBit(oldp+123,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_fire));
        bufp->chgBit(oldp+124,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid))));
        bufp->chgBit(oldp+125,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready))));
        bufp->chgIData(oldp+126,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg_string),32);
        bufp->chgBit(oldp+127,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ErrorReg));
        bufp->chgBit(oldp+128,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__ebreak));
        bufp->chgIData(oldp+129,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code),32);
        bufp->chgIData(oldp+130,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_32),32);
        bufp->chgIData(oldp+131,((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code)),32);
        bufp->chgIData(oldp+132,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__imm_S),32);
        bufp->chgIData(oldp+133,((((- (IData)((vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                               >> 0x0000001fU))) 
                                   << 0x0000000dU) 
                                  | ((((2U & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                              >> 0x0000001eU)) 
                                       | (1U & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                >> 7U))) 
                                      << 0x0000000bU) 
                                     | ((0x000007e0U 
                                         & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                            >> 0x00000014U)) 
                                        | (0x0000001eU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                              >> 7U)))))),32);
        bufp->chgIData(oldp+134,(((((0x00000ffeU & 
                                     ((- (IData)((vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                  >> 0x0000001fU))) 
                                      << 1U)) | (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                 >> 0x0000001fU)) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                           >> 0x00000014U))))),32);
        bufp->chgBit(oldp+135,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_w_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready))));
        bufp->chgBit(oldp+136,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag))));
        bufp->chgBit(oldp+137,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag));
        bufp->chgBit(oldp+138,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag));
        bufp->chgBit(oldp+139,((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_ar_valid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)) 
                                   >> 1U))));
        bufp->chgBit(oldp+140,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid))));
        bufp->chgBit(oldp+141,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_fire) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid)))));
        bufp->chgIData(oldp+142,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                                 >> 0x0000000fU))),32);
        bufp->chgCData(oldp+143,((3U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr)),2);
        bufp->chgIData(oldp+144,((3U & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_axi4lite_aw_payload_addr)),32);
        bufp->chgBit(oldp+145,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531));
        bufp->chgBit(oldp+146,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_1));
        bufp->chgBit(oldp+147,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_24));
        bufp->chgBit(oldp+148,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_3));
        bufp->chgBit(oldp+149,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT___zz_com_grp_rd_27));
        bufp->chgBit(oldp+150,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__when_MyCpu_l531_5));
        bufp->chgIData(oldp+151,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_0),32);
        bufp->chgIData(oldp+152,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1),32);
        bufp->chgIData(oldp+153,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2),32);
        bufp->chgIData(oldp+154,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4),32);
        bufp->chgIData(oldp+156,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5),32);
        bufp->chgIData(oldp+157,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6),32);
        bufp->chgIData(oldp+158,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7),32);
        bufp->chgIData(oldp+159,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8),32);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12),32);
        bufp->chgIData(oldp+164,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16),32);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18),32);
        bufp->chgIData(oldp+170,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19),32);
        bufp->chgIData(oldp+171,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20),32);
        bufp->chgIData(oldp+172,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21),32);
        bufp->chgIData(oldp+173,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22),32);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23),32);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24),32);
        bufp->chgIData(oldp+176,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25),32);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26),32);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29),32);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30),32);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31),32);
        bufp->chgBit(oldp+183,((0U != (0x0000001fU 
                                       & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                          >> 7U)))));
        bufp->chgBit(oldp+184,((0U != (0x0000001fU 
                                       & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                          >> 0x0000000fU)))));
        bufp->chgBit(oldp+185,((0U != (0x0000001fU 
                                       & (vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__code 
                                          >> 0x00000014U)))));
        bufp->chgIData(oldp+186,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC_vaild)
                                   ? vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_pc_nPC
                                   : vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__PC_cnt)),32);
        bufp->chgBit(oldp+187,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag));
        bufp->chgBit(oldp+188,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag));
        bufp->chgBit(oldp+189,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l137));
        bufp->chgBit(oldp+190,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl_u_vaild_0)))));
        bufp->chgBit(oldp+191,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l153));
        bufp->chgIData(oldp+192,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__code_reg),32);
        bufp->chgCData(oldp+193,(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__mmio_w_len),2);
        bufp->chgBit(oldp+194,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))));
        bufp->chgBit(oldp+195,((((IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
                                   >> 1U))));
        bufp->chgIData(oldp+196,(((2U & ((IData)(1U) 
                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                   ? (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr)
                                   : 0U)),32);
        bufp->chgBit(oldp+197,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready))));
        bufp->chgCData(oldp+198,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio_w_len),2);
        bufp->chgBit(oldp+199,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))));
        bufp->chgBit(oldp+200,((((IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_b_flag)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
                                   >> 3U))));
        bufp->chgIData(oldp+201,(((8U & ((IData)(1U) 
                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                                   ? (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_aw_payload_addr)
                                   : 0U)),32);
        bufp->chgBit(oldp+202,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+203,(((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+204,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+205,(((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+206,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+207,(((3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+208,(((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+209,(((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+210,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+211,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+212,(((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+213,(((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
                                & (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+214,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid));
        bufp->chgBit(oldp+215,(vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren));
        bufp->chgIData(oldp+216,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_0_r_payload_data),32);
        bufp->chgBit(oldp+217,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__finish));
        bufp->chgIData(oldp+218,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data),32);
        bufp->chgBit(oldp+219,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__step_fun_1__DOT__step));
        bufp->chgCData(oldp+220,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext),3);
        bufp->chgIData(oldp+221,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext_string),32);
        bufp->chgBit(oldp+222,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__rd_vaild));
        bufp->chgBit(oldp+223,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_fire));
        bufp->chgBit(oldp+224,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__when_MyCpu_l150));
    }
    bufp->chgBit(oldp+225,(vlSelfRef.clock));
    bufp->chgBit(oldp+226,(vlSelfRef.reset));
    bufp->chgBit(oldp+227,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready)
                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_r_ready))));
    bufp->chgBit(oldp+228,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_r_ready)
                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_r_ready)))));
    bufp->chgCData(oldp+229,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))
                               ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp)
                                        : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp)
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp))))),2);
    bufp->chgBit(oldp+230,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT___zz_when_MyCpu_l792) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_fire))));
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
}
