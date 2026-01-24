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
        bufp->chgIData(oldp+0,((IData)(vlSelfRef.top__DOT__csr_1__DOT__mcycle)),32);
        bufp->chgIData(oldp+1,((IData)((vlSelfRef.top__DOT__csr_1__DOT__mcycle 
                                        >> 0x00000020U))),32);
        bufp->chgQData(oldp+2,(vlSelfRef.top__DOT__csr_1__DOT__mcycle),64);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__csr_1__DOT__mstatus),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__csr_1__DOT__mcause),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__csr_1__DOT__mepc),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__csr_1__DOT__mtvec),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__grp_1__DOT__reg_0),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__grp_1__DOT__reg_1),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__grp_1__DOT__reg_2),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__grp_1__DOT__reg_3),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__grp_1__DOT__reg_4),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__grp_1__DOT__reg_5),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__grp_1__DOT__reg_6),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__grp_1__DOT__reg_7),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__grp_1__DOT__reg_8),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__grp_1__DOT__reg_9),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__grp_1__DOT__reg_10),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__grp_1__DOT__reg_11),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__grp_1__DOT__reg_12),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__grp_1__DOT__reg_13),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__grp_1__DOT__reg_14),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__grp_1__DOT__reg_15),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__grp_1__DOT__reg_16),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__grp_1__DOT__reg_17),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__grp_1__DOT__reg_18),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__grp_1__DOT__reg_19),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__grp_1__DOT__reg_20),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__grp_1__DOT__reg_21),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__grp_1__DOT__reg_22),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__grp_1__DOT__reg_23),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__grp_1__DOT__reg_24),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__grp_1__DOT__reg_25),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__grp_1__DOT__reg_26),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__grp_1__DOT__reg_27),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__grp_1__DOT__reg_28),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__grp_1__DOT__reg_29),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__grp_1__DOT__reg_30),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__grp_1__DOT__reg_31),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__pc_1__DOT__rom_code),32);
        bufp->chgCData(oldp+41,((0x0000001fU & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                >> 7U))),5);
        bufp->chgBit(oldp+42,(vlSelfRef.top__DOT__encode_1_com_grp_rd_vaild));
        bufp->chgCData(oldp+43,((0x0000001fU & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+44,((0x0000001fU & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                >> 0x00000014U))),5);
        bufp->chgBit(oldp+45,(vlSelfRef.top__DOT__encode_1_com_exmem_w_vaild));
        bufp->chgCData(oldp+46,(vlSelfRef.top__DOT__encode_1_com_exmem_w_len),2);
        bufp->chgBit(oldp+47,(vlSelfRef.top__DOT__encode_1_com_exmem_r_ready));
        bufp->chgCData(oldp+48,(vlSelfRef.top__DOT__encode_1_com_exmem_r_len),2);
        bufp->chgBit(oldp+49,(vlSelfRef.top__DOT__encode_1_com_csr_vaild));
        bufp->chgSData(oldp+50,((vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                 >> 0x00000014U)),12);
        bufp->chgBit(oldp+51,(vlSelfRef.top__DOT__encode_1_com_csr_ecall));
        bufp->chgBit(oldp+52,(vlSelfRef.top__DOT__encode_1_com_csr_mret));
        bufp->chgBit(oldp+53,(vlSelfRef.top__DOT__encode_1__DOT__ErrorReg));
        bufp->chgBit(oldp+54,(vlSelfRef.top__DOT__encode_1__DOT__ebreak));
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__encode_1__DOT__imm_I),32);
        bufp->chgIData(oldp+56,((0xfffff000U & vlSelfRef.top__DOT__pc_1__DOT__rom_code)),32);
        bufp->chgIData(oldp+57,((((- (IData)((vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                              >> 0x0000001fU))) 
                                  << 0x0000000cU) | 
                                 ((0x00000fe0U & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                      >> 7U))))),32);
        bufp->chgIData(oldp+58,((((- (IData)((vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                              >> 0x0000001fU))) 
                                  << 0x0000000dU) | 
                                 ((((2U & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                           >> 0x0000001eU)) 
                                    | (1U & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                             >> 7U))) 
                                   << 0x0000000bU) 
                                  | ((0x000007e0U & 
                                      (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                           >> 7U)))))),32);
        bufp->chgIData(oldp+59,(((((0x00000ffeU & (
                                                   (- (IData)(
                                                              (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                               >> 0x0000001fU))) 
                                                   << 1U)) 
                                   | (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                      >> 0x0000001fU)) 
                                  << 0x00000014U) | 
                                 ((((0x000001feU & 
                                     (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                             >> 0x00000014U))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                      >> 0x00000014U))))),32);
        bufp->chgIData(oldp+60,((0x0000001fU & (vlSelfRef.top__DOT__pc_1__DOT__rom_code 
                                                >> 0x0000000fU))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__encode_1_com_pc_nPC),32);
        bufp->chgBit(oldp+62,(vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild));
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__encode_1_com_exmem_w_data),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__encode_1_com_exmem_w_addr),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__encode_1_com_exmem_r_addr),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__encode_1_com_csr_w_data),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__csr_1__DOT__com_encode_r_data),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__csr_1_com_encode_r_pc),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs1),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__encode_1__DOT__com_grp_rs2),32);
    }
    bufp->chgBit(oldp+71,(vlSelfRef.rst));
    bufp->chgBit(oldp+72,(vlSelfRef.clk));
    bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__pc_1__DOT__PC_cnt),32);
    bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__encode_1_com_grp_rd),32);
    bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__exmem_1__DOT__mem_r_data),32);
    bufp->chgIData(oldp+76,(((IData)(vlSelfRef.top__DOT__encode_1_com_pc_nPC_vaild)
                              ? vlSelfRef.top__DOT__encode_1_com_pc_nPC
                              : vlSelfRef.top__DOT__pc_1__DOT__PC_cnt)),32);
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
}
