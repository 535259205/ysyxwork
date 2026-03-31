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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_0_r_payload_data),32);
        bufp->chgIData(oldp+1,(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt),32);
        bufp->chgBit(oldp+2,(vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_ar_valid));
        bufp->chgBit(oldp+3,(vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_r_ready));
        bufp->chgBit(oldp+4,(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__finish));
        bufp->chgIData(oldp+5,(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd),32);
        bufp->chgCData(oldp+6,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                               >> 7U))),5);
        bufp->chgBit(oldp+7,(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_grp_rd_vaild));
        bufp->chgCData(oldp+8,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                               >> 0x0000000fU))),5);
        bufp->chgCData(oldp+9,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                               >> 0x00000014U))),5);
        bufp->chgIData(oldp+10,(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC),32);
        bufp->chgBit(oldp+11,(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild));
        bufp->chgIData(oldp+12,(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_w_data),32);
        bufp->chgBit(oldp+13,(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_vaild));
        bufp->chgSData(oldp+14,((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                 >> 0x00000014U)),12);
        bufp->chgBit(oldp+15,(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_ecall));
        bufp->chgBit(oldp+16,(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_csr_mret));
        bufp->chgBit(oldp+17,(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid));
        bufp->chgIData(oldp+18,(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data),32);
        bufp->chgCData(oldp+20,(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb),4);
        bufp->chgBit(oldp+21,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag));
        bufp->chgBit(oldp+22,(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_valid));
        bufp->chgIData(oldp+23,(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_payload_addr),32);
        bufp->chgBit(oldp+24,(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready));
        bufp->chgCData(oldp+25,(vlSelfRef.ysyxSoCFull__DOT__encode_1_ar_size),4);
        bufp->chgBit(oldp+26,(vlSelfRef.ysyxSoCFull__DOT__encode_1_fence_i));
        bufp->chgIData(oldp+27,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_csr_r_data),32);
        bufp->chgIData(oldp+28,(vlSelfRef.ysyxSoCFull__DOT__csr_1_com_encode_r_pc),32);
        bufp->chgIData(oldp+29,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs1),32);
        bufp->chgIData(oldp+30,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__com_grp_rs2),32);
        bufp->chgBit(oldp+31,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready));
        bufp->chgBit(oldp+33,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid));
        bufp->chgBit(oldp+34,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready));
        bufp->chgBit(oldp+35,(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid));
        bufp->chgIData(oldp+36,(vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_r_data),32);
        bufp->chgBit(oldp+37,((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready))));
        bufp->chgBit(oldp+38,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid));
        bufp->chgCData(oldp+39,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_payload_resp)
                                  : 2U)),2);
        bufp->chgBit(oldp+40,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready));
        bufp->chgBit(oldp+41,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready));
        bufp->chgBit(oldp+42,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid));
        bufp->chgCData(oldp+43,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel))
                                  ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel))
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp)
                                           : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel))
                                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp)
                                               : (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp))))),2);
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)) 
                                  >> 1U))));
        bufp->chgBit(oldp+45,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid));
        bufp->chgIData(oldp+46,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data),32);
        bufp->chgCData(oldp+47,(((2U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_payload_resp)
                                  : 2U)),2);
        bufp->chgBit(oldp+48,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
        bufp->chgIData(oldp+49,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgCData(oldp+50,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_prot)
                                  : 0U)),3);
        bufp->chgIData(oldp+51,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data
                                  : 0U)),32);
        bufp->chgCData(oldp+52,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb)
                                  : 0U)),4);
        bufp->chgBit(oldp+53,((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag))));
        bufp->chgBit(oldp+54,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid));
        bufp->chgIData(oldp+55,(((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)
                                  ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_payload_addr
                                  : vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt)),32);
        bufp->chgCData(oldp+56,(((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_payload_prot)
                                  : 4U)),3);
        bufp->chgBit(oldp+57,(((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready)
                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_r_ready))));
        bufp->chgBit(oldp+58,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid));
        bufp->chgIData(oldp+59,(((2U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgCData(oldp+60,(((2U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_prot)
                                  : 0U)),3);
        bufp->chgIData(oldp+61,(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__mmio__DOT__w_data),32);
        bufp->chgCData(oldp+62,(((2U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb)
                                  : 0U)),4);
        bufp->chgBit(oldp+63,(((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
                                  >> 1U))));
        bufp->chgBit(oldp+64,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid));
        bufp->chgIData(oldp+65,(((4U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgCData(oldp+66,(((4U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_prot)
                                  : 0U)),3);
        bufp->chgIData(oldp+67,(((4U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_data
                                  : 0U)),32);
        bufp->chgCData(oldp+68,(((4U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb)
                                  : 0U)),4);
        bufp->chgBit(oldp+69,(((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
                                  >> 2U))));
        bufp->chgBit(oldp+70,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid));
        bufp->chgIData(oldp+71,(((8U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgCData(oldp+72,(((8U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_prot)
                                  : 0U)),3);
        bufp->chgIData(oldp+73,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data),32);
        bufp->chgCData(oldp+74,(((8U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_payload_strb)
                                  : 0U)),4);
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag) 
                               & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
                                  >> 3U))));
        bufp->chgBit(oldp+76,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready));
        bufp->chgBit(oldp+77,(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid));
        bufp->chgCData(oldp+78,(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp),2);
        bufp->chgBit(oldp+79,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rValid)))));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rValid));
        bufp->chgIData(oldp+81,(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_readRsp_data),32);
        bufp->chgBit(oldp+82,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready));
        bufp->chgBit(oldp+83,(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid));
        bufp->chgCData(oldp+84,(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp),2);
        bufp->chgBit(oldp+85,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rValid)))));
        bufp->chgBit(oldp+86,(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rValid));
        bufp->chgIData(oldp+87,(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_readRsp_data),32);
        bufp->chgBit(oldp+88,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready));
        bufp->chgBit(oldp+89,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid));
        bufp->chgCData(oldp+90,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp),2);
        bufp->chgBit(oldp+91,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rValid)))));
        bufp->chgBit(oldp+92,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rValid));
        bufp->chgIData(oldp+93,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_readRsp_data),32);
        bufp->chgBit(oldp+94,(vlSelfRef.ysyxSoCFull__DOT__ctrl_u_vaild_0));
        bufp->chgBit(oldp+95,(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__step_fun_1__DOT__step));
        bufp->chgBit(oldp+96,(((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                               & (5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+97,(vlSelfRef.ysyxSoCFull__DOT__ctrl_r_sel));
        bufp->chgCData(oldp+98,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel),2);
        bufp->chgBit(oldp+99,(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel));
        bufp->chgCData(oldp+100,(vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_w_len),2);
        bufp->chgBit(oldp+101,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid))));
        bufp->chgBit(oldp+102,(((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid))));
        bufp->chgBit(oldp+103,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid))));
        bufp->chgBit(oldp+104,((((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready)
                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__pc_1_axi4lite_r_ready)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid))));
        bufp->chgBit(oldp+105,(vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__ren));
        bufp->chgCData(oldp+106,(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__mmio_w_len),2);
        bufp->chgBit(oldp+107,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))));
        bufp->chgBit(oldp+108,((((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
                                   >> 2U))));
        bufp->chgIData(oldp+109,(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rData_addr),32);
        bufp->chgCData(oldp+110,(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rData_prot),3);
        bufp->chgIData(oldp+111,((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__clint__DOT__AxiIn_ar_rData_addr)),32);
        bufp->chgIData(oldp+112,(((4U & ((IData)(1U) 
                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                   ? (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr)
                                   : 0U)),32);
        bufp->chgQData(oldp+113,(vlSelfRef.ysyxSoCFull__DOT__clint__DOT__mtime),64);
        bufp->chgIData(oldp+115,((IData)(vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle)),32);
        bufp->chgIData(oldp+116,((IData)((vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle 
                                          >> 0x00000020U))),32);
        bufp->chgQData(oldp+117,(vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcycle),64);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mstatus),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mcause),32);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mepc),32);
        bufp->chgIData(oldp+122,(vlSelfRef.ysyxSoCFull__DOT__csr_1__DOT__mtvec),32);
        bufp->chgBit(oldp+123,(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_wantStart));
        bufp->chgCData(oldp+124,(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg),3);
        bufp->chgCData(oldp+125,(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext),3);
        bufp->chgBit(oldp+126,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+127,(((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+128,(((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+129,(((3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+130,(((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+131,(((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+132,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+133,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+134,(((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+135,(((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext)) 
                                & (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgIData(oldp+136,(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateReg_string),32);
        bufp->chgIData(oldp+137,(vlSelfRef.ysyxSoCFull__DOT__ctrl__DOT__s_stateNext_string),32);
        bufp->chgBit(oldp+138,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__ErrorReg));
        bufp->chgBit(oldp+139,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__ebreak));
        bufp->chgIData(oldp+140,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code),32);
        bufp->chgIData(oldp+141,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_I),32);
        bufp->chgIData(oldp+142,((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code)),32);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__imm_S),32);
        bufp->chgIData(oldp+144,((((- (IData)((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                               >> 0x0000001fU))) 
                                   << 0x0000000dU) 
                                  | ((((2U & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                              >> 0x0000001eU)) 
                                       | (1U & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                >> 7U))) 
                                      << 0x0000000bU) 
                                     | ((0x000007e0U 
                                         & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                            >> 0x00000014U)) 
                                        | (0x0000001eU 
                                           & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                              >> 7U)))))),32);
        bufp->chgIData(oldp+145,(((((0x00000ffeU & 
                                     ((- (IData)((vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                  >> 0x0000001fU))) 
                                      << 1U)) | (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                 >> 0x0000001fU)) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                           >> 0x00000014U))))),32);
        bufp->chgBit(oldp+146,(((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid))));
        bufp->chgBit(oldp+147,(((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag))));
        bufp->chgBit(oldp+148,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_flag));
        bufp->chgBit(oldp+149,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_ar_flag));
        bufp->chgBit(oldp+150,((((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_ar_ready) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_ar_valid)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__rsel)) 
                                   >> 1U))));
        bufp->chgBit(oldp+151,(((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_w_valid))));
        bufp->chgBit(oldp+152,(((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_r_ready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid))));
        bufp->chgIData(oldp+153,(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__pc_pc),32);
        bufp->chgIData(oldp+154,((0x0000001fU & (vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__code 
                                                 >> 0x0000000fU))),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_0),32);
        bufp->chgIData(oldp+156,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_1),32);
        bufp->chgIData(oldp+157,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_2),32);
        bufp->chgIData(oldp+158,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_3),32);
        bufp->chgIData(oldp+159,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_4),32);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_5),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_6),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_7),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_8),32);
        bufp->chgIData(oldp+164,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_9),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_10),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_11),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_12),32);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_13),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_14),32);
        bufp->chgIData(oldp+170,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_15),32);
        bufp->chgIData(oldp+171,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_16),32);
        bufp->chgIData(oldp+172,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_17),32);
        bufp->chgIData(oldp+173,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_18),32);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_19),32);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_20),32);
        bufp->chgIData(oldp+176,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_21),32);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_22),32);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_23),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_24),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_25),32);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_26),32);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_27),32);
        bufp->chgIData(oldp+183,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_28),32);
        bufp->chgIData(oldp+184,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_29),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_30),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__reg_31),32);
        bufp->chgBit(oldp+187,(vlSelfRef.ysyxSoCFull__DOT__grp_1__DOT__rd_vaild));
        bufp->chgIData(oldp+188,(((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC_vaild)
                                   ? vlSelfRef.ysyxSoCFull__DOT__encode_1_com_pc_nPC
                                   : vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__PC_cnt)),32);
        bufp->chgBit(oldp+189,(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__flag));
        bufp->chgBit(oldp+190,(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__npc_flag));
        bufp->chgBit(oldp+191,(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__axi4lite_ar_fire));
        bufp->chgIData(oldp+192,(vlSelfRef.ysyxSoCFull__DOT__pc_1__DOT__code_reg),32);
        bufp->chgCData(oldp+193,(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__mmio_w_len),2);
        bufp->chgBit(oldp+194,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))));
        bufp->chgBit(oldp+195,((((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
                                   >> 1U))));
        bufp->chgIData(oldp+196,(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rData_addr),32);
        bufp->chgCData(oldp+197,(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rData_prot),3);
        bufp->chgIData(oldp+198,((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__uart__DOT__AxiIn_ar_rData_addr)),32);
        bufp->chgIData(oldp+199,(((2U & ((IData)(1U) 
                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                   ? (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr)
                                   : 0U)),32);
        bufp->chgIData(oldp+200,(vlSelfRef.ysyxSoCFull__DOT__uart__DOT__uart_reg),32);
        bufp->chgBit(oldp+201,(((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready))));
        bufp->chgCData(oldp+202,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio_w_len),2);
        bufp->chgBit(oldp+203,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))));
        bufp->chgBit(oldp+204,((((IData)(vlSelfRef.ysyxSoCFull__DOT__encode_1__DOT__mem_b_flag) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)) 
                                   >> 3U))));
        bufp->chgIData(oldp+205,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_addr),32);
        bufp->chgCData(oldp+206,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_prot),3);
        bufp->chgIData(oldp+207,((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__AxiIn_ar_rData_addr)),32);
        bufp->chgIData(oldp+208,(((8U & ((IData)(1U) 
                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__wsel)))
                                   ? (0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__encode_1_axi4lite_aw_payload_addr)
                                   : 0U)),32);
        bufp->chgIData(oldp+209,(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__uart_reg),32);
        bufp->chgBit(oldp+210,(((IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready))));
    }
    bufp->chgBit(oldp+211,(vlSelfRef.reset));
    bufp->chgBit(oldp+212,(vlSelfRef.clock));
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
