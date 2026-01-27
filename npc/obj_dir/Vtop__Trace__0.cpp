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
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data),32);
        bufp->chgCData(oldp+1,((0x0000001fU & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                               >> 7U))),5);
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__other_encode_com_grp_rd_vaild));
        bufp->chgCData(oldp+3,((0x0000001fU & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                               >> 0x0000000fU))),5);
        bufp->chgCData(oldp+4,((0x0000001fU & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                               >> 0x00000014U))),5);
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild));
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__other_encode_com_csr_w_data),32);
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__other_encode_com_csr_vaild));
        bufp->chgSData(oldp+8,((vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                >> 0x00000014U)),12);
        bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__other_encode_com_csr_ecall));
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__other_encode_com_csr_mret));
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__other_encode_axi4lite_w_valid));
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__other_encode_axi4lite_aw_payload_addr),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_data),32);
        bufp->chgCData(oldp+14,(vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_strb),4);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__other_csr__DOT__com_encode_r_data),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__other_csr_com_encode_r_pc),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs1),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__other_encode__DOT__com_grp_rs2),32);
        bufp->chgCData(oldp+19,(((IData)(vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__wen)
                                  ? 0U : 2U)),2);
        bufp->chgBit(oldp+20,((1U & ((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel)))));
        bufp->chgCData(oldp+21,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel)))
                                  ? ((IData)(vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__wen)
                                      ? 0U : 2U) : 2U)),2);
        bufp->chgBit(oldp+22,((1U & (((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel)) 
                                     >> 1U))));
        bufp->chgCData(oldp+23,(((2U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel)))
                                  ? ((IData)(vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__wen)
                                      ? 0U : 2U) : 2U)),2);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__axiarbiter_1_AxiIn_1_r_payload_data),32);
        bufp->chgBit(oldp+25,(vlSelfRef.top__DOT__aximem_1__DOT__mem__DOT__wen));
        bufp->chgIData(oldp+26,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel)
                                  ? vlSelfRef.top__DOT__other_encode_axi4lite_aw_payload_addr
                                  : 0U)),32);
        bufp->chgCData(oldp+27,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel)
                                  ? (IData)(vlSelfRef.top__DOT__other_encode_axi4lite_aw_payload_prot)
                                  : 0U)),3);
        bufp->chgIData(oldp+28,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel)
                                  ? vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_data
                                  : 0U)),32);
        bufp->chgCData(oldp+29,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel)
                                  ? (IData)(vlSelfRef.top__DOT__other_encode_axi4lite_w_payload_strb)
                                  : 0x0fU)),4);
        bufp->chgBit(oldp+30,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel) 
                               & (IData)(vlSelfRef.top__DOT__other_encode_axi4lite_b_ready))));
        bufp->chgBit(oldp+31,(vlSelfRef.top__DOT__axiarbiter_1__DOT__wsel));
        bufp->chgCData(oldp+32,(vlSelfRef.top__DOT__aximem_1__DOT__mem_w_len),2);
        bufp->chgIData(oldp+33,((IData)(vlSelfRef.top__DOT__other_csr__DOT__mcycle)),32);
        bufp->chgIData(oldp+34,((IData)((vlSelfRef.top__DOT__other_csr__DOT__mcycle 
                                         >> 0x00000020U))),32);
        bufp->chgQData(oldp+35,(vlSelfRef.top__DOT__other_csr__DOT__mcycle),64);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__other_csr__DOT__mstatus),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__other_csr__DOT__mcause),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__other_csr__DOT__mepc),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__other_csr__DOT__mtvec),32);
        bufp->chgBit(oldp+41,(vlSelfRef.top__DOT__other_encode__DOT__ErrorReg));
        bufp->chgBit(oldp+42,(vlSelfRef.top__DOT__other_encode__DOT__ebreak));
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__other_encode__DOT__imm_I),32);
        bufp->chgIData(oldp+44,((0xfffff000U & vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data)),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__other_encode__DOT__imm_S),32);
        bufp->chgIData(oldp+46,((((- (IData)((vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                              >> 0x0000001fU))) 
                                  << 0x0000000dU) | 
                                 ((((2U & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                           >> 0x0000001eU)) 
                                    | (1U & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                             >> 7U))) 
                                   << 0x0000000bU) 
                                  | ((0x000007e0U & 
                                      (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                           >> 7U)))))),32);
        bufp->chgIData(oldp+47,(((((0x00000ffeU & (
                                                   (- (IData)(
                                                              (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                               >> 0x0000001fU))) 
                                                   << 1U)) 
                                   | (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                      >> 0x0000001fU)) 
                                  << 0x00000014U) | 
                                 ((((0x000001feU & 
                                     (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                             >> 0x00000014U))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                      >> 0x00000014U))))),32);
        bufp->chgIData(oldp+48,((0x0000001fU & (vlSelfRef.top__DOT__axiarbiter_1_AxiIn_0_r_payload_data 
                                                >> 0x0000000fU))),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__other_grp__DOT__reg_0),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__other_grp__DOT__reg_1),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__other_grp__DOT__reg_2),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__other_grp__DOT__reg_3),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__other_grp__DOT__reg_4),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__other_grp__DOT__reg_5),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__other_grp__DOT__reg_6),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__other_grp__DOT__reg_7),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__other_grp__DOT__reg_8),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__other_grp__DOT__reg_9),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__other_grp__DOT__reg_10),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__other_grp__DOT__reg_11),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__other_grp__DOT__reg_12),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__other_grp__DOT__reg_13),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__other_grp__DOT__reg_14),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__other_grp__DOT__reg_15),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__other_grp__DOT__reg_16),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__other_grp__DOT__reg_17),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__other_grp__DOT__reg_18),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__other_grp__DOT__reg_19),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__other_grp__DOT__reg_20),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__other_grp__DOT__reg_21),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__other_grp__DOT__reg_22),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__other_grp__DOT__reg_23),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__other_grp__DOT__reg_24),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__other_grp__DOT__reg_25),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__other_grp__DOT__reg_26),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__other_grp__DOT__reg_27),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__other_grp__DOT__reg_28),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__other_grp__DOT__reg_29),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__other_grp__DOT__reg_30),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__other_grp__DOT__reg_31),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__pc_pc__DOT__PC_cnt),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__other_encode_com_grp_rd),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__other_encode_com_pc_nPC),32);
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__other_encode_axi4lite_r_ready));
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__other_encode_axi4lite_ar_payload_addr),32);
        bufp->chgCData(oldp+86,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_r_ready)
                                  ? 0U : 2U)),2);
        bufp->chgBit(oldp+87,((1U & ((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))));
        bufp->chgCData(oldp+88,(((1U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))
                                  ? ((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_r_ready)
                                      ? 0U : 2U) : 2U)),2);
        bufp->chgBit(oldp+89,((1U & (((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
                                     >> 1U))));
        bufp->chgCData(oldp+90,(((2U & ((IData)(1U) 
                                        << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)))
                                  ? ((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_r_ready)
                                      ? 0U : 2U) : 2U)),2);
        bufp->chgBit(oldp+91,(((1U & (~ (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel))) 
                               || (IData)(vlSelfRef.top__DOT__other_encode_axi4lite_r_ready))));
        bufp->chgIData(oldp+92,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
                                  ? vlSelfRef.top__DOT__other_encode_axi4lite_ar_payload_addr
                                  : vlSelfRef.top__DOT__pc_pc__DOT__PC_cnt)),32);
        bufp->chgCData(oldp+93,(((IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)
                                  ? (IData)(vlSelfRef.top__DOT__other_encode_axi4lite_ar_payload_prot)
                                  : 0U)),3);
        bufp->chgBit(oldp+94,(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_r_ready));
        bufp->chgBit(oldp+95,(((IData)(vlSelfRef.top__DOT__other_encode_axi4lite_r_ready) 
                               & (~ (IData)(vlSelfRef.top__DOT__ctrl__DOT__test)))));
        bufp->chgBit(oldp+96,(vlSelfRef.top__DOT__ctrl_u_vaild_1));
        bufp->chgBit(oldp+97,(vlSelfRef.top__DOT__ctrl_u_vaild_3));
        bufp->chgBit(oldp+98,(vlSelfRef.top__DOT__ctrl__DOT__test));
        bufp->chgBit(oldp+99,(((IData)(vlSelfRef.top__DOT__other_encode_axi4lite_r_ready) 
                               & (((IData)(1U) << (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel)) 
                                  >> 1U))));
        bufp->chgBit(oldp+100,(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel));
        bufp->chgBit(oldp+101,((((1U & (~ (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__rsel))) 
                                 || (IData)(vlSelfRef.top__DOT__other_encode_axi4lite_r_ready)) 
                                & (IData)(vlSelfRef.top__DOT__axiarbiter_1__DOT__AxiOut_r_ready))));
        bufp->chgBit(oldp+102,(vlSelfRef.top__DOT__ctrl__DOT__step));
        bufp->chgBit(oldp+103,(vlSelfRef.top__DOT__ctrl__DOT__s_wantStart));
        bufp->chgCData(oldp+104,(vlSelfRef.top__DOT__ctrl__DOT__s_mem_cnt),4);
        bufp->chgCData(oldp+105,(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg),2);
        bufp->chgCData(oldp+106,(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext),2);
        bufp->chgBit(oldp+107,(((0U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                & (0U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+108,(((1U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                & (1U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+109,(((2U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                & (2U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+110,(((3U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                & (3U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+111,(((0U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                & (0U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+112,(((1U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                & (1U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+113,(((2U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                & (2U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgBit(oldp+114,(((3U == (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext)) 
                                & (3U != (IData)(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg)))));
        bufp->chgQData(oldp+115,(vlSelfRef.top__DOT__ctrl__DOT__s_stateReg_string),40);
        bufp->chgQData(oldp+117,(vlSelfRef.top__DOT__ctrl__DOT__s_stateNext_string),40);
    }
    bufp->chgBit(oldp+119,(vlSelfRef.rst));
    bufp->chgBit(oldp+120,(vlSelfRef.clk));
    bufp->chgIData(oldp+121,(vlSelfRef.top__DOT__aximem_1__DOT__mem_r_data),32);
    bufp->chgIData(oldp+122,(((IData)(vlSelfRef.top__DOT__other_encode_com_pc_nPC_vaild)
                               ? vlSelfRef.top__DOT__other_encode_com_pc_nPC
                               : vlSelfRef.top__DOT__pc_pc__DOT__PC_cnt)),32);
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
}
