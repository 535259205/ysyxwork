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
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__Pc_area_pc__DOT__PC_cnt),32);
        bufp->chgCData(oldp+2,((0x0000001fU & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                               >> 7U))),5);
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd_vaild));
        bufp->chgCData(oldp+4,((0x0000001fU & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                               >> 0x0000000fU))),5);
        bufp->chgCData(oldp+5,((0x0000001fU & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                               >> 0x00000014U))),5);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC),32);
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC_vaild));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_vaild));
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_data),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_addr),32);
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_w_len),2);
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_ready));
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_addr),32);
        bufp->chgCData(oldp+14,(vlSelfRef.top__DOT__Decode_area_encode_com_exmem_r_len),2);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs1),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__Decode_area_encode__DOT__com_grp_rs2),32);
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__pip_ctrl_2_up_valid));
        bufp->chgBit(oldp+18,(vlSelfRef.top__DOT__pip_ctrl_1_up_valid));
        bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__pip_ctrl_3_up_valid));
        bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__Decode_area_encode__DOT__ErrorReg));
        bufp->chgBit(oldp+21,(vlSelfRef.top__DOT__Decode_area_encode__DOT__ebreak));
        bufp->chgIData(oldp+22,((((- (IData)((vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                              >> 0x0000001fU))) 
                                  << 0x0000000cU) | 
                                 (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                  >> 0x00000014U))),32);
        bufp->chgIData(oldp+23,((0xfffff000U & vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code)),32);
        bufp->chgIData(oldp+24,((((- (IData)((vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                              >> 0x0000001fU))) 
                                  << 0x0000000cU) | 
                                 ((0x00000fe0U & (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSelfRef.top__DOT__Pc_area_pc__DOT__rom_code 
                                      >> 7U))))),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_0),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_1),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_2),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_3),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_4),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_5),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_6),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_7),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_8),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_9),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_10),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_11),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_12),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_13),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_14),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_15),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_16),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_17),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_18),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_19),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_20),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_21),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_22),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_23),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_24),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_25),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_26),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_27),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_28),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_29),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_30),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__Grp_area_grp__DOT__reg_31),32);
        bufp->chgIData(oldp+57,(((IData)(vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC_vaild)
                                  ? vlSelfRef.top__DOT__Decode_area_encode_com_pc_nPC
                                  : vlSelfRef.top__DOT__Pc_area_pc__DOT__PC_cnt)),32);
    }
    bufp->chgBit(oldp+58,(vlSelfRef.rst));
    bufp->chgBit(oldp+59,(vlSelfRef.clk));
    bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__Decode_area_encode_com_grp_rd),32);
    bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__Exmem_area_exmem__DOT__mem_r_data),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
