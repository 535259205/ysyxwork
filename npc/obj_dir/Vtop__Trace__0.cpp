// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__aximem_1_axi4lite_w_ready));
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__aximem_1_axi4lite_b_valid));
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready));
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid));
        bufp->chgIData(oldp+4,((IData)(vlSelfRef.top__DOT__csr_1__DOT__mcycle)),32);
        bufp->chgIData(oldp+5,((IData)((vlSelfRef.top__DOT__csr_1__DOT__mcycle 
                                        >> 0x00000020U))),32);
        bufp->chgQData(oldp+6,(vlSelfRef.top__DOT__csr_1__DOT__mcycle),64);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__csr_1__DOT__mstatus),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__csr_1__DOT__mcause),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__csr_1__DOT__mepc),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__csr_1__DOT__mtvec),32);
        bufp->chgCData(oldp+12,(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg),3);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg_string),32);
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__encode_1__DOT__mem_flag));
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__grp_1__DOT__reg_0),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__grp_1__DOT__reg_1),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__grp_1__DOT__reg_2),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__grp_1__DOT__reg_3),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__grp_1__DOT__reg_4),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__grp_1__DOT__reg_5),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__grp_1__DOT__reg_6),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__grp_1__DOT__reg_7),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__grp_1__DOT__reg_8),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__grp_1__DOT__reg_9),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__grp_1__DOT__reg_10),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__grp_1__DOT__reg_11),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__grp_1__DOT__reg_12),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__grp_1__DOT__reg_13),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__grp_1__DOT__reg_14),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__grp_1__DOT__reg_15),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__grp_1__DOT__reg_16),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__grp_1__DOT__reg_17),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__grp_1__DOT__reg_18),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__grp_1__DOT__reg_19),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__grp_1__DOT__reg_20),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__grp_1__DOT__reg_21),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__grp_1__DOT__reg_22),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__grp_1__DOT__reg_23),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__grp_1__DOT__reg_24),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__grp_1__DOT__reg_25),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__grp_1__DOT__reg_26),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__grp_1__DOT__reg_27),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__grp_1__DOT__reg_28),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__grp_1__DOT__reg_29),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__grp_1__DOT__reg_30),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__grp_1__DOT__reg_31),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+47,(((5U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (5U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+48,(((5U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (5U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+49,(((0U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (0U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+50,(((1U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (1U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+51,(((2U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (2U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+52,(((3U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (3U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+53,(((4U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (4U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+54,(((0U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (0U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+55,(((1U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (1U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+56,(((3U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (3U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+57,(((4U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                               & (4U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+58,(vlSelfRef.top__DOT__pc_1_axi4lite_ar_valid));
        bufp->chgBit(oldp+59,(vlSelfRef.top__DOT__pc_1_axi4lite_r_ready));
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__encode_1_com_grp_rd),32);
        bufp->chgBit(oldp+61,(vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild));
        bufp->chgCData(oldp+62,(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp),2);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__uart__DOT__slaveFactory_readRsp_data),32);
        bufp->chgBit(oldp+64,(vlSelfRef.top__DOT__ctrl__DOT__axi_r_fire_regNext));
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rData_addr),32);
        bufp->chgCData(oldp+66,(vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rData_prot),3);
        bufp->chgIData(oldp+67,((0xfffffffcU & vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rData_addr)),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__uart__DOT__uart_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+69,((0x0000001fU & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                >> 7U))),5);
        bufp->chgCData(oldp+70,((0x0000001fU & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+71,((0x0000001fU & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                >> 0x00000014U))),5);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__encode_1_com_pc_nPC),32);
        bufp->chgBit(oldp+73,(vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild));
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__encode_1_com_csr_w_data),32);
        bufp->chgBit(oldp+75,(vlSelfRef.top__DOT__encode_1_com_csr_vaild));
        bufp->chgSData(oldp+76,((vlSelfRef.top__DOT__encode_1__DOT__code 
                                 >> 0x00000014U)),12);
        bufp->chgBit(oldp+77,(vlSelfRef.top__DOT__encode_1_com_csr_ecall));
        bufp->chgBit(oldp+78,(vlSelfRef.top__DOT__encode_1_com_csr_mret));
        bufp->chgBit(oldp+79,(vlSelfRef.top__DOT__encode_1_axi4lite_w_valid));
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_data),32);
        bufp->chgCData(oldp+82,(vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_strb),4);
        bufp->chgBit(oldp+83,(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready));
        bufp->chgIData(oldp+84,(vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__csr_1_com_encode_r_pc),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2),32);
        bufp->chgBit(oldp+88,(vlSelfRef.top__DOT__aximem_1_axi4lite_aw_ready));
        bufp->chgBit(oldp+89,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                ? (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_aw_ready)
                                : (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready))));
        bufp->chgBit(oldp+90,(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
        bufp->chgIData(oldp+91,(((1U & ((IData)(1U) 
                                        << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                  ? vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgCData(oldp+92,(((1U & ((IData)(1U) 
                                        << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                  ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_prot)
                                  : 0U)),3);
        bufp->chgIData(oldp+93,(((1U & ((IData)(1U) 
                                        << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                  ? vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_data
                                  : 0U)),32);
        bufp->chgCData(oldp+94,(((1U & ((IData)(1U) 
                                        << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                  ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_strb)
                                  : 0U)),4);
        bufp->chgBit(oldp+95,((1U & ((IData)(1U) << 
                                     (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))));
        bufp->chgBit(oldp+96,(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid));
        bufp->chgIData(oldp+97,(((2U & ((IData)(1U) 
                                        << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                  ? vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgCData(oldp+98,(((2U & ((IData)(1U) 
                                        << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                  ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_prot)
                                  : 0U)),3);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__uart__DOT__mmio__DOT__w_data),32);
        bufp->chgCData(oldp+100,(((2U & ((IData)(1U) 
                                         << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                   ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_w_payload_strb)
                                   : 0U)),4);
        bufp->chgBit(oldp+101,((1U & (((IData)(1U) 
                                       << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))) 
                                      >> 1U))));
        bufp->chgBit(oldp+102,(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready));
        bufp->chgBit(oldp+103,(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid));
        bufp->chgBit(oldp+104,((1U & (~ (IData)(vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rValid)))));
        bufp->chgBit(oldp+105,(vlSelfRef.top__DOT__uart__DOT__AxiIn_ar_rValid));
        bufp->chgBit(oldp+106,(vlSelfRef.top__DOT__ctrl_u_vaild_0));
        bufp->chgBit(oldp+107,(vlSelfRef.top__DOT__ctrl__DOT__axi_w_fire));
        bufp->chgBit(oldp+108,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))));
        bufp->chgCData(oldp+109,(vlSelfRef.top__DOT__aximem_1__DOT__mem_w_len),2);
        bufp->chgBit(oldp+110,(((IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_aw_ready) 
                                & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid))));
        bufp->chgBit(oldp+111,(vlSelfRef.top__DOT__encode_1__DOT__ErrorReg));
        bufp->chgBit(oldp+112,(vlSelfRef.top__DOT__encode_1__DOT__ebreak));
        bufp->chgIData(oldp+113,(vlSelfRef.top__DOT__encode_1__DOT__code),32);
        bufp->chgIData(oldp+114,(vlSelfRef.top__DOT__encode_1__DOT__imm_I),32);
        bufp->chgIData(oldp+115,((0xfffff000U & vlSelfRef.top__DOT__encode_1__DOT__code)),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__encode_1__DOT__imm_S),32);
        bufp->chgIData(oldp+117,((((- (IData)((vlSelfRef.top__DOT__encode_1__DOT__code 
                                               >> 0x0000001fU))) 
                                   << 0x0000000dU) 
                                  | ((((2U & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                              >> 0x0000001eU)) 
                                       | (1U & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                >> 7U))) 
                                      << 0x0000000bU) 
                                     | ((0x000007e0U 
                                         & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                            >> 0x00000014U)) 
                                        | (0x0000001eU 
                                           & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                              >> 7U)))))),32);
        bufp->chgIData(oldp+118,(((((0x00000ffeU & 
                                     ((- (IData)((vlSelfRef.top__DOT__encode_1__DOT__code 
                                                  >> 0x0000001fU))) 
                                      << 1U)) | (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                 >> 0x0000001fU)) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                           >> 0x00000014U))))),32);
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__encode_1__DOT__pc_pc),32);
        bufp->chgIData(oldp+120,((0x0000001fU & (vlSelfRef.top__DOT__encode_1__DOT__code 
                                                 >> 0x0000000fU))),32);
        bufp->chgCData(oldp+121,(vlSelfRef.top__DOT__uart__DOT__mmio_w_len),2);
        bufp->chgBit(oldp+122,((1U & (~ (IData)(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)))));
        bufp->chgBit(oldp+123,(((IData)(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
                                & (((IData)(1U) << 
                                    (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))) 
                                   >> 1U))));
        bufp->chgIData(oldp+124,(((2U & ((IData)(1U) 
                                         << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))
                                   ? (0xfffffffcU & vlSelfRef.top__DOT__encode_1_axi4lite_aw_payload_addr)
                                   : 0U)),32);
        bufp->chgBit(oldp+125,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid) 
                                & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+126,(vlSelfRef.top__DOT__pc_1__DOT__PC_cnt),32);
        bufp->chgIData(oldp+127,(vlSelfRef.top__DOT__encode_1_axi4lite_ar_payload_addr),32);
        bufp->chgBit(oldp+128,(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid));
        bufp->chgCData(oldp+129,(((1U & ((IData)(1U) 
                                         << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))
                                   ? (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_r_payload_resp)
                                   : 2U)),2);
        bufp->chgBit(oldp+130,(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid));
        bufp->chgCData(oldp+131,(((2U & ((IData)(1U) 
                                         << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))
                                   ? (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_r_payload_resp)
                                   : 2U)),2);
        bufp->chgIData(oldp+132,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
                                   ? vlSelfRef.top__DOT__encode_1_axi4lite_ar_payload_addr
                                   : vlSelfRef.top__DOT__pc_1__DOT__PC_cnt)),32);
        bufp->chgCData(oldp+133,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
                                   ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_ar_payload_prot)
                                   : 4U)),3);
        bufp->chgBit(oldp+134,(vlSelfRef.top__DOT__ctrl_r_sel));
        bufp->chgBit(oldp+135,(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+136,(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_payload_data),32);
        bufp->chgBit(oldp+137,(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_ar_valid));
        bufp->chgBit(oldp+138,(vlSelfRef.top__DOT__ctrl__DOT__u_vaild_1));
        bufp->chgBit(oldp+139,(vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__ren));
        bufp->chgBit(oldp+140,(vlSelfRef.top__DOT__ctrl__DOT__s_wantStart));
        bufp->chgCData(oldp+141,(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext),3);
        bufp->chgIData(oldp+142,(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext_string),32);
        bufp->chgBit(oldp+143,(vlSelfRef.top__DOT__grp_1__DOT__rd_vaild));
        bufp->chgBit(oldp+144,(vlSelfRef.top__DOT__pc_1__DOT__axi4lite_r_fire));
    }
    bufp->chgBit(oldp+145,(vlSelfRef.rst));
    bufp->chgBit(oldp+146,(vlSelfRef.clk));
    bufp->chgIData(oldp+147,(((1U & ((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))
                               ? vlSelfRef.top__DOT__aximem_1__DOT__mem_r_data
                               : 0U)),32);
    bufp->chgIData(oldp+148,(vlSelfRef.top__DOT__aximem_1__DOT__mem_r_data),32);
    bufp->chgBit(oldp+149,((((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
                            & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready))));
    bufp->chgBit(oldp+150,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                             ? (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_w_ready)
                             : (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready))));
    bufp->chgBit(oldp+151,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                             ? (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_b_valid)
                             : (IData)(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid))));
    bufp->chgCData(oldp+152,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                               ? 0U : (IData)(vlSelfRef.top__DOT__uart__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rData_resp))),2);
    bufp->chgBit(oldp+153,(((IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready) 
                            & (((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
                               >> 1U))));
    bufp->chgBit(oldp+154,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
                             ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready)
                             : (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_r_ready))));
    bufp->chgBit(oldp+155,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid) 
                            & (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_r_ready))));
    bufp->chgBit(oldp+156,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid) 
                            & (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready))));
    bufp->chgBit(oldp+157,(((IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_w_ready) 
                            & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid))));
    bufp->chgBit(oldp+158,((((IData)(1U) << (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))) 
                            & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_b_valid))));
    bufp->chgBit(oldp+159,((((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
                              ? (IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready)
                              : (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_r_ready)) 
                            & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_r_valid))));
    bufp->chgBit(oldp+160,(((IData)(vlSelfRef.top__DOT__encode_1_axi4lite_r_ready) 
                            & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid))));
    bufp->chgIData(oldp+161,(((IData)(vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild)
                               ? vlSelfRef.top__DOT__encode_1_com_pc_nPC
                               : vlSelfRef.top__DOT__pc_1__DOT__PC_cnt)),32);
    bufp->chgBit(oldp+162,(((((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
                             & (IData)(vlSelfRef.top__DOT__aximem_1_axi4lite_ar_ready)) 
                            & (IData)(vlSelfRef.top__DOT__pc_1_axi4lite_ar_valid))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
