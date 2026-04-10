// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_6(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 14040);
    bufp->chgBit(oldp+0,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_7___05Freg_p__DOT__n0)) 
                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))))));
    bufp->chgBit(oldp+1,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_0___05Freg_p__DOT__n0)) 
                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))))));
    bufp->chgBit(oldp+2,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_10___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)))));
    bufp->chgBit(oldp+3,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_10___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)))));
    bufp->chgBit(oldp+4,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_A_D_AO222X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+5,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_A_D_AO222X0P5H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+6,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_11___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+7,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_12___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)))));
    bufp->chgBit(oldp+8,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_12___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))));
    bufp->chgBit(oldp+9,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_12___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X1P4H7L_C0__DOT__outA));
    bufp->chgBit(oldp+10,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_12___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X1P4H7L_C0__DOT__outB));
    bufp->chgBit(oldp+11,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_13___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+12,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_15___05FAOI221X1P4H7L_A0__DOT__outA));
    bufp->chgBit(oldp+13,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_15___05FAOI221X1P4H7L_A0__DOT__outB));
    bufp->chgBit(oldp+14,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_17___05FAOI222X1P4H7L_A0__DOT__outA));
    bufp->chgBit(oldp+15,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_17___05FAOI222X1P4H7L_A0__DOT__outB));
    bufp->chgBit(oldp+16,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_17___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+17,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_18___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+18,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_18___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+19,((1U & ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_18___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                           | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_18___05Freg_p__DOT__n0)))))) 
                                 | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_18___05Freg_p__DOT__n0)) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_18___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)))))));
    bufp->chgBit(oldp+20,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_1___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))));
    bufp->chgBit(oldp+21,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_1___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421))) 
                                  | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_1___05Freg_p__DOT__n0)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y))))) 
                                 | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                        | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax)) 
                                           | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_1___05Freg_p__DOT__n0))))) 
                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_1___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95)))))));
    bufp->chgBit(oldp+22,((1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_1___05Freg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05Freg_p__DOT__n0) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170)) 
                                    | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_1___05Freg_p__DOT__n0)) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184))) 
                                       | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_1___05Freg_p__DOT__n0)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89)))))))));
    bufp->chgBit(oldp+23,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_23___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)))));
    bufp->chgBit(oldp+24,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_23___05Freg_p__DOT__n0)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y_AND3X1P4H7L_C__DOT__B)))))));
    bufp->chgBit(oldp+25,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_24___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)))));
    bufp->chgBit(oldp+26,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_24___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))));
    bufp->chgBit(oldp+27,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_2___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)))));
    bufp->chgBit(oldp+28,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                    | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+29,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05FNAND3X1H7L_B_Y_AND4X0P5H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_31___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+30,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_31___05FAOI222X1P4H7L_A0__DOT__outB));
    bufp->chgBit(oldp+31,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_31___05FAOI222X1P4H7L_A0__DOT__outC));
    bufp->chgBit(oldp+32,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+33,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+34,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+35,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_3___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+36,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+37,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_4___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+38,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+39,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+40,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_4___05FAOI22X0P5H7L_B1_Y_NOR4BBX3H7L_AN__DOT__Ax)) 
                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_4___05FAOI22X0P5H7L_B1_Y_NOR4BBX3H7L_AN__DOT__Bx)))))));
    bufp->chgBit(oldp+41,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_4___05FAOI22X0P5H7L_B1_Y_NOR4BBX3H7L_AN__DOT__Bx));
    bufp->chgBit(oldp+42,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_4___05FAOI22X0P5H7L_B1_Y_NOR4BBX3H7L_AN__DOT__Ax));
    bufp->chgBit(oldp+43,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_7___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+44,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_8___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)))));
    bufp->chgBit(oldp+45,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_8___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)))));
    bufp->chgBit(oldp+46,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AO221X0P5H7L_C0__DOT__OUT0));
    bufp->chgBit(oldp+47,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AO221X0P5H7L_C0__DOT__OUT1));
    bufp->chgBit(oldp+48,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_8___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))));
    bufp->chgBit(oldp+49,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05FAND3X1P4H7L_A_Y_NOR4X6H7L_A_Y_NOR4BX4H7L_AN_C_AO221X0P5H7L_Y_C0_AND3X1H7L_Y__DOT__A) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_8___05FNAND3X0P5H7L_A_Y_NAND4X2H7L_A_D_AOI33X0P5H7L_Y_B1) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+50,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_0___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)))));
    bufp->chgBit(oldp+51,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)))));
    bufp->chgBit(oldp+52,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_10___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+53,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__B0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_10___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+54,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y__DOT__A1) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_10___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+55,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_11___05FAOI221X1H7L_A0__DOT__outA));
    bufp->chgBit(oldp+56,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_11___05FAOI221X1H7L_A0__DOT__outB));
    bufp->chgBit(oldp+57,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_12___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+58,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_12___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))));
    bufp->chgBit(oldp+59,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+60,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_15___05FAOI222X0P5H7L_A0__DOT__outB));
    bufp->chgBit(oldp+61,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_15___05FAOI222X0P5H7L_A0__DOT__outC));
    bufp->chgBit(oldp+62,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_18___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))));
    bufp->chgBit(oldp+63,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_18___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444))));
    bufp->chgBit(oldp+64,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_18___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+65,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_18___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+66,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_19___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))));
    bufp->chgBit(oldp+67,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_19___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))));
    bufp->chgBit(oldp+68,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_19___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+69,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_19___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))));
    bufp->chgBit(oldp+70,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_19___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))));
    bufp->chgBit(oldp+71,((((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_187)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_19___05FAOI33X1H7L_B2_Y_AND3X1P4H7L_B_C_AOI33X1H7L_Y_B2)) 
                           & (0x18U == (0x18U & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel))))));
    bufp->chgBit(oldp+72,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__B0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_19___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+73,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_19___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+74,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_19___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+75,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_19___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+76,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_19___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+77,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_19___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+78,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_21___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+79,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_21___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+80,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_23___05FAO221X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+81,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_23___05FAO221X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+82,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_26___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))));
    bufp->chgBit(oldp+83,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_26___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445))));
    bufp->chgBit(oldp+84,((1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_223)) 
                                 | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_3___05Freg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y)))))));
    bufp->chgBit(oldp+85,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_3___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+86,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+87,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_3___05Freg_p__DOT__n0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+88,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+89,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_3___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+90,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_22___05Freg_p__DOT__n0) 
                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+91,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                 & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_22___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0)))))));
    bufp->chgBit(oldp+92,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_22___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+93,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__OUT0));
    bufp->chgBit(oldp+94,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__OUT1));
    bufp->chgBit(oldp+95,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_10___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+96,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_10___05Freg_p__DOT__n0) 
                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))));
    bufp->chgBit(oldp+97,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+98,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_Y_AO221X0P7H7L_C0__DOT__A1) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+99,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_D_Y_NOR4X6H7L_A_C_AO221X0P5H7L_Y__DOT__A1) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+100,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+101,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_14___05FMUXI2X0P5H7L_A_Y_NOR2X0P5H7L_B_Y_AOI21X0P5H7L_B0__DOT__OUT0));
    bufp->chgBit(oldp+102,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439))));
    bufp->chgBit(oldp+103,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+104,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_16___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)))));
    bufp->chgBit(oldp+105,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_16___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y))))));
    bufp->chgBit(oldp+106,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)))));
    bufp->chgBit(oldp+107,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_18___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+108,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__OUT0));
    bufp->chgBit(oldp+109,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__OUT1));
    bufp->chgBit(oldp+110,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_19___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+111,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))));
    bufp->chgBit(oldp+112,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_19___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+113,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+114,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_19___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+115,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_19___05FAOI33X0P7H7L_B1_Y_NAND2X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+116,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_21___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+117,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_21___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)))));
    bufp->chgBit(oldp+118,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_23___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+119,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_23___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+120,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_23___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_23___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+121,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_23___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+122,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05FAOI222X2H7L_C0__DOT__outA));
    bufp->chgBit(oldp+123,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_30___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+124,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05FAOI222X2H7L_C0__DOT__outC));
    bufp->chgBit(oldp+125,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05FAOI222X2H7L_C0_Y_AND2X1H7L_B_A_AOI222X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+126,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_30___05FAOI222X2H7L_C0_Y_AND2X1H7L_B_A_AOI222X1P4H7L_Y__DOT__outB));
    bufp->chgBit(oldp+127,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_30___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+128,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_30___05Freg_p__DOT__n0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))))));
    bufp->chgBit(oldp+129,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05FAND3X1P4H7L_A__DOT__B) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_30___05Freg_p__DOT__n0))) 
                                  | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_196))))));
    bufp->chgBit(oldp+130,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_4___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)))));
    bufp->chgBit(oldp+131,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y))))));
    bufp->chgBit(oldp+132,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))));
    bufp->chgBit(oldp+133,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))));
    bufp->chgBit(oldp+134,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_9___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+135,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+136,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_9___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+137,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+138,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_9___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+139,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_12___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+140,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_12___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+141,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+142,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+143,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+144,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+145,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_17___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+146,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_17___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_113))));
    bufp->chgBit(oldp+147,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_18___05FAO222X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+148,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_18___05FAO222X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+149,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_18___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+150,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_21___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+151,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_21___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+152,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_23___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)))));
    bufp->chgBit(oldp+153,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_23___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))));
    bufp->chgBit(oldp+154,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+155,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+156,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+157,((((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_24___05Freg_p__DOT__n0)) 
                            | (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_24___05Freg_p__DOT__n0)) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_24___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+158,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_26___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+159,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_26___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+160,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+161,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_27___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+162,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_2___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))));
    bufp->chgBit(oldp+163,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_2___05FAOI33X0P5H7L_B2__DOT__B0) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_2___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+164,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_31___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_113))));
    bufp->chgBit(oldp+165,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_31___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))));
    bufp->chgBit(oldp+166,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+167,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+168,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+169,((((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_5___05Freg_p__DOT__n0)) 
                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_5___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_5___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+170,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_0___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)))));
    bufp->chgBit(oldp+171,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_0___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+172,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_10___05FAOI222X1P4H7L_A0__DOT__outA));
    bufp->chgBit(oldp+173,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_10___05FAOI222X1P4H7L_A0__DOT__outB));
    bufp->chgBit(oldp+174,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_10___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+175,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_10___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+176,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_11___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+177,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1__DOT__OUT0));
    bufp->chgBit(oldp+178,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_12___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+179,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1__DOT__OUT2));
    bufp->chgBit(oldp+180,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_12___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_173))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_12___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_12___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127))) 
                                     | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_12___05Freg_p__DOT__n0)) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_368))))))));
    bufp->chgBit(oldp+181,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+182,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+183,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_12___05Freg_p__DOT__n0) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs1_sel_BUFX16H7L_A_Y_OR2X8H7L_B_Y_BUFX16H7L_A__DOT__Y)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv)))));
    bufp->chgBit(oldp+184,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_12___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y))));
    bufp->chgBit(oldp+185,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_12___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+186,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+187,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+188,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+189,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_16___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+190,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_18___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+191,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+192,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_18___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+193,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+194,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_18___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+195,((1U & (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_18___05Freg_p__DOT__n0)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__B0_inv)) 
                                      | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__B0_inv)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__C0_inv))) 
                                     & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05Freg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))) 
                                        & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_18___05Freg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350)))))))));
    bufp->chgBit(oldp+196,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+197,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+198,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_18___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+199,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_1___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+200,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_1___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)))));
    bufp->chgBit(oldp+201,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_21___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+202,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_21___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+203,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_23___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+204,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_23___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+205,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_24___05FAOI221X1P4H7L_A0__DOT__outA));
    bufp->chgBit(oldp+206,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_24___05FAOI221X1P4H7L_A0__DOT__outB));
    bufp->chgBit(oldp+207,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_25___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+208,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+209,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05FAOI33X0P5H7L_A0__DOT__B0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_26___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+210,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+211,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+212,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+213,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+214,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+215,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__OUT2));
    bufp->chgBit(oldp+216,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_2___05FAOI33X0P5H7L_B2__DOT__B0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_2___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+217,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_2___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+218,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+219,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+220,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+221,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+222,((1U & (~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_0___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_0___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105)))) 
                                      & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_0___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_0___05Freg_p__DOT__n0) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))))) 
                                     & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_0___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_0___05Freg_p__DOT__n0))))) 
                                        & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_0___05Freg_p__DOT__n0) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109)) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_0___05Freg_p__DOT__n0) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))))))))));
    bufp->chgBit(oldp+223,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91))));
    bufp->chgBit(oldp+224,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_10___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+225,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_10___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+226,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_11___05FAO221X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+227,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_11___05FAO221X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+228,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_12___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)))));
    bufp->chgBit(oldp+229,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_12___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+230,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)))));
    bufp->chgBit(oldp+231,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+232,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)))));
    bufp->chgBit(oldp+233,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184)))));
    bufp->chgBit(oldp+234,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_14___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X0P5H7L_C0__DOT__outA));
    bufp->chgBit(oldp+235,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_14___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X0P5H7L_C0__DOT__outB));
    bufp->chgBit(oldp+236,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_15___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_15___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))) 
                                  | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05Freg_p__DOT__n0))) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_15___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428)))))));
    bufp->chgBit(oldp+237,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+238,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_15___05FAOI222X1H7L_A0__DOT__outB));
    bufp->chgBit(oldp+239,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_15___05FAOI222X1H7L_A0__DOT__outC));
    bufp->chgBit(oldp+240,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_193)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+241,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_15___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+242,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_16___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91))));
    bufp->chgBit(oldp+243,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_16___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+244,((1U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_1___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_1___05Freg_p__DOT__n0)))) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_1___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_173))) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05Freg_p__DOT__n0))))))));
    bufp->chgBit(oldp+245,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_Y_AO221X0P7H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_1___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+246,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_1___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_C0_AOI21X0P5H7L_B0_Y_AO221X0P5H7L_C0__DOT__A1))));
    bufp->chgBit(oldp+247,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_1___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+248,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_1___05FAO221X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+249,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_1___05FAO221X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+250,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_24___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)))));
    bufp->chgBit(oldp+251,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_24___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+252,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_27___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)))));
    bufp->chgBit(oldp+253,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_27___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)))));
    bufp->chgBit(oldp+254,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+255,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_27___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+256,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_27___05Freg_p__DOT__n0))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_27___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+257,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+258,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+259,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_2___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91))));
    bufp->chgBit(oldp+260,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_2___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))));
    bufp->chgBit(oldp+261,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_30___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439))));
    bufp->chgBit(oldp+262,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y_AND3X1P4H7L_C__DOT__B) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs2_sel_BUFX7H7L_A_1_Y_OR3X8H7L_C_Y_BUFX16H7L_A__DOT__Y)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_30___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+263,((1U & (~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_30___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439)) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y_AND3X1P4H7L_C__DOT__B) 
                                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs2_sel_BUFX7H7L_A_1_Y_OR3X8H7L_C_Y_BUFX16H7L_A__DOT__Y)) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_30___05Freg_p__DOT__n0))))) 
                                      & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_30___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05Freg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05FAOI33X1P4H7L_B2__DOT__B0)) 
                                               & (0x0cU 
                                                  == 
                                                  (0x0cU 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2_sel))))))) 
                                     & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_30___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_113)) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_30___05Freg_p__DOT__n0))))) 
                                        & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_30___05Freg_p__DOT__n0) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05Freg_p__DOT__n0) 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05FAOI33X1P4H7L_B2__DOT__B0) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)))))))))));
    bufp->chgBit(oldp+264,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_31___05FAO222X3H7L_C1__DOT__OUT0));
    bufp->chgBit(oldp+265,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_31___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+266,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_31___05FAO222X3H7L_C1__DOT__OUT2));
    bufp->chgBit(oldp+267,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_31___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_94))) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05Freg_p__DOT__n0)))) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_31___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167))) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_31___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427)))))));
    bufp->chgBit(oldp+268,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+269,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+270,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440))));
    bufp->chgBit(oldp+271,(((~ (IData)((0U != (0x1eU 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2_sel))))) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_5___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+272,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_6___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)))));
    bufp->chgBit(oldp+273,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_6___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)))));
    bufp->chgBit(oldp+274,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_11___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_402))) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_11___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222))) 
                                     | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                              | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05Freg_p__DOT__n0))))))))));
    bufp->chgBit(oldp+275,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+276,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_78)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_11___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+277,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__OUT2));
    bufp->chgBit(oldp+278,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAO221X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+279,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAO221X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+280,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_11___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)))));
    bufp->chgBit(oldp+281,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)) 
                                  | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_370)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_11___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+282,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_12___05Freg_p__DOT__n0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))))));
    bufp->chgBit(oldp+283,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+284,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_13___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+285,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__OUT2));
    bufp->chgBit(oldp+286,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_18___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+287,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+288,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_18___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))));
    bufp->chgBit(oldp+289,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_18___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+290,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_18___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+291,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_1___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))));
    bufp->chgBit(oldp+292,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_1___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+293,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_26___05FAOI221X1H7L_B1__DOT__outA));
    bufp->chgBit(oldp+294,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_26___05FAOI221X1H7L_B1__DOT__outB));
    bufp->chgBit(oldp+295,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_27___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+296,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_27___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+297,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_2___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+298,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX0P5H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_2___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+299,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_30___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444))));
    bufp->chgBit(oldp+300,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05Freg_p__DOT__n0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05FAOI33X1P4H7L_B2__DOT__B0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)))));
    bufp->chgBit(oldp+301,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_30___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_113))));
    bufp->chgBit(oldp+302,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_30___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+303,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_31___05FMUXI2X0P5H7L_A__DOT__YN));
    bufp->chgBit(oldp+304,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_4___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)))));
    bufp->chgBit(oldp+305,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_4___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))));
    bufp->chgBit(oldp+306,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_13___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+307,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+308,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_16___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+309,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_16___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))));
    bufp->chgBit(oldp+310,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_17___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))));
    bufp->chgBit(oldp+311,((1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_370)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_17___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+312,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_18___05FAO222X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+313,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_18___05FAO222X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+314,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_18___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+315,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+316,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+317,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_1___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+318,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+319,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))));
    bufp->chgBit(oldp+320,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_20___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_B2_Y_AOI221X1H7L_C0__DOT__outA));
    bufp->chgBit(oldp+321,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_20___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_B2_Y_AOI221X1H7L_C0__DOT__outB));
    bufp->chgBit(oldp+322,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+323,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+324,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+325,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+326,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_21___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_21___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_21___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184))) 
                                     | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_21___05Freg_p__DOT__n0)) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_368))))))));
    bufp->chgBit(oldp+327,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_21___05FAND3X1P4H7L_A_Y_NOR4X1P4H7L_C_Y_NOR4BX4H7L_AN_B_AO222X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+328,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_21___05FAND3X1P4H7L_A_Y_NOR4X1P4H7L_C_Y_NOR4BX4H7L_AN_B_AO222X0P5H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+329,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_21___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+330,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_22___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)))));
    bufp->chgBit(oldp+331,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_22___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))));
    bufp->chgBit(oldp+332,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_22___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__OUT0));
    bufp->chgBit(oldp+333,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_22___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__OUT1));
    bufp->chgBit(oldp+334,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                          | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05Freg_p__DOT__n0))))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_23___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_23___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167))) 
                                     | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_23___05Freg_p__DOT__n0)) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_395))))))));
    bufp->chgBit(oldp+335,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_23___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X1P4H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+336,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_23___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X1P4H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+337,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_23___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+338,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_27___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+339,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_27___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))));
    bufp->chgBit(oldp+340,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_2___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+341,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_2___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+342,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_30___05FAO221X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+343,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_30___05FAO221X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+344,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)))));
    bufp->chgBit(oldp+345,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_3___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))));
    bufp->chgBit(oldp+346,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_5___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)))));
    bufp->chgBit(oldp+347,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_5___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))));
    bufp->chgBit(oldp+348,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))));
    bufp->chgBit(oldp+349,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_5___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_368))) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_5___05Freg_p__DOT__n0)))) 
                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_5___05Freg_p__DOT__n0))) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_5___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151)))))));
    bufp->chgBit(oldp+350,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_113))));
    bufp->chgBit(oldp+351,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+352,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_13___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)))));
    bufp->chgBit(oldp+353,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_13___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+354,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_14___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+355,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421)))));
    bufp->chgBit(oldp+356,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+357,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+358,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)))));
    bufp->chgBit(oldp+359,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_20___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+360,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)))));
    bufp->chgBit(oldp+361,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_20___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+362,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_129)))));
    bufp->chgBit(oldp+363,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_20___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+364,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_22___05Freg_p__DOT__n0)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_22___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)))))));
    bufp->chgBit(oldp+365,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+366,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_23___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+367,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_Y_AO221X0P7H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_2___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+368,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_2___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+369,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_30___05FAOI221X1P4H7L_A0__DOT__outA));
    bufp->chgBit(oldp+370,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_30___05FAOI221X1P4H7L_A0__DOT__outB));
    bufp->chgBit(oldp+371,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_3___05FMUXI2X0P5H7L_A__DOT__YN));
    bufp->chgBit(oldp+372,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+373,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+374,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))));
    bufp->chgBit(oldp+375,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))));
    bufp->chgBit(oldp+376,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439))));
    bufp->chgBit(oldp+377,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+378,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_9___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)))));
    bufp->chgBit(oldp+379,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_9___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+380,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_11___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+381,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_11___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+382,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_12___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+383,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_13___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+384,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_13___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+385,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_368)))));
    bufp->chgBit(oldp+386,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_14___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+387,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+388,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+389,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_1___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+390,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_1___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+391,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_1___05FAOI22X0P5H7L_A0_Y_NOR4BBX3H7L_AN__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_1___05FAOI22X0P5H7L_A0_Y_NOR4BBX3H7L_AN__DOT__Bx)))))));
    bufp->chgBit(oldp+392,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_1___05FAOI22X0P5H7L_A0_Y_NOR4BBX3H7L_AN__DOT__Bx));
    bufp->chgBit(oldp+393,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_1___05FAOI22X0P5H7L_A0_Y_NOR4BBX3H7L_AN__DOT__Ax));
    bufp->chgBit(oldp+394,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_368)))));
    bufp->chgBit(oldp+395,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_20___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+396,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_20___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X1P4H7L_C0__DOT__outA));
    bufp->chgBit(oldp+397,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_20___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_AOI221X1P4H7L_C0__DOT__outB));
    bufp->chgBit(oldp+398,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+399,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+400,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_A_D_AO222X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+401,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+402,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)))));
    bufp->chgBit(oldp+403,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+404,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_21___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+405,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_25___05FAO221X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+406,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_25___05FAO221X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+407,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_31___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+408,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_31___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+409,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_4___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)))));
    bufp->chgBit(oldp+410,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_4___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+411,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_5___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+412,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)))));
    bufp->chgBit(oldp+413,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+414,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__OUT0));
    bufp->chgBit(oldp+415,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_8___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AO221X0P5H7L_C0__DOT__OUT1));
    bufp->chgBit(oldp+416,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_9___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax)))));
    bufp->chgBit(oldp+417,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_9___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+418,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_9___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05FNAND3BX0P5H7L_C__DOT__Ax))));
    bufp->chgBit(oldp+419,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_9___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+420,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+421,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_10___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+422,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_10___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+423,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_13___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+424,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_13___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y))))));
    bufp->chgBit(oldp+425,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_17___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+426,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+427,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+428,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1_Y_NOR2X1P4H7L_A_Y_NOR3BX0P5H7L_AN__DOT__AN_bar));
    bufp->chgBit(oldp+429,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_23___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)))));
    bufp->chgBit(oldp+430,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_23___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y))))));
    bufp->chgBit(oldp+431,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_2___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+432,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_2___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+433,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_2___05FAOI22X0P5H7L_B1_Y_NOR4BBX4H7L_AN__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_2___05FAOI22X0P5H7L_B1_Y_NOR4BBX4H7L_AN__DOT__Bx)))))));
    bufp->chgBit(oldp+434,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_2___05FAOI22X0P5H7L_B1_Y_NOR4BBX4H7L_AN__DOT__Bx));
    bufp->chgBit(oldp+435,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_2___05FAOI22X0P5H7L_B1_Y_NOR4BBX4H7L_AN__DOT__Ax));
    bufp->chgBit(oldp+436,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_30___05Freg_p__DOT__n0) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)))));
    bufp->chgBit(oldp+437,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_30___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_23___05FAOI33X0P5H7L_A0__DOT__A1))));
    bufp->chgBit(oldp+438,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_30___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_23___05FAOI33X0P5H7L_A0__DOT__A1)))));
    bufp->chgBit(oldp+439,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_22___05FINVX0P5H7L_A_Y_OR3X1H7L_A_C_INVX0P5H7L_A__DOT__Y)) 
                                  | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_31___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)))))));
    bufp->chgBit(oldp+440,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05Freg_p__DOT__n0) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05FNAND3X1H7L_B_Y_OAI211X0P7H7L_C0_B0_NAND2BX0P5H7L_Y__DOT__Ax)))));
    bufp->chgBit(oldp+441,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+442,((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_4___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05FNAND3X1H7L_B_Y_OAI211X0P7H7L_C0_B0_NAND2BX0P5H7L_Y__DOT__Ax))));
    bufp->chgBit(oldp+443,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_29___05Freg_p__DOT__n0))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_29___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+444,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_C0_AOI21X0P5H7L_B0_Y_AO221X0P5H7L_C0__DOT__A1))));
    bufp->chgBit(oldp+445,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+446,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__OUT0));
    bufp->chgBit(oldp+447,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__OUT1));
    bufp->chgBit(oldp+448,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_8___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+449,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445))));
    bufp->chgBit(oldp+450,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))));
    bufp->chgBit(oldp+451,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)))));
    bufp->chgBit(oldp+452,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_8___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+453,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+454,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_8___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+455,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)))));
    bufp->chgBit(oldp+456,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)))));
    bufp->chgBit(oldp+457,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89)))));
    bufp->chgBit(oldp+458,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421)))));
    bufp->chgBit(oldp+459,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_9___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+460,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+461,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_9___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+462,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_9___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+463,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_9___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+464,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_9___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+465,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs1_sel_BUFX16H7L_A_Y_OR2X8H7L_B_Y_BUFX16H7L_A__DOT__Y)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_9___05Freg_p__DOT__n0))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_12___05FAO222X4H7L_C1_Y_NOR4BX4H7L_B_D_AO221X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv))))));
    bufp->chgBit(oldp+466,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_0___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)))));
    bufp->chgBit(oldp+467,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_0___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))));
    bufp->chgBit(oldp+468,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_12___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+469,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_12___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+470,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_14___05FMUXI2X0P5H7L_A__DOT__YN));
    bufp->chgBit(oldp+471,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+472,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+473,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+474,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+475,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+476,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+477,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_17___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+478,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_17___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+479,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_1___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+480,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_1___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+481,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05FAO221X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+482,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05FAO221X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+483,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05FNAND3X0P5H7L_B_Y_NAND3X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+484,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_22___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05FNAND3X0P5H7L_B_Y_NAND3X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+485,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_22___05FNAND3X0P5H7L_B_Y_NAND3X1H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+486,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_22___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+487,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_25___05FNAND3X0P5H7L_A_Y_NOR2BX1H7L_AN__DOT__Ax));
    bufp->chgBit(oldp+488,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+489,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+490,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))));
    bufp->chgBit(oldp+491,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+492,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+493,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+494,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_31___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+495,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05FAOI221X1H7L_A0__DOT__outA));
    bufp->chgBit(oldp+496,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05FAOI221X1H7L_A0__DOT__outB));
    bufp->chgBit(oldp+497,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_3___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_91))));
    bufp->chgBit(oldp+498,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_3___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))));
    bufp->chgBit(oldp+499,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_3___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+500,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_3___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y))))));
    bufp->chgBit(oldp+501,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_3___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+502,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05FNAND3X0P5H7L_B_Y_NAND3X1P4H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+503,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_3___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05FNAND3X0P5H7L_B_Y_NAND3X1P4H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+504,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_3___05FNAND3X0P5H7L_B_Y_NAND3X1P4H7L_B_A_AOAI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+505,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_3___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+506,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+507,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+508,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+509,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+510,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+511,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+512,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_18___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)))));
    bufp->chgBit(oldp+513,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_18___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+514,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_18___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_18___05FINVX0P5H7L_A_Y_OAO211X0P5H7L_A0_B0_NAND2X0P5H7L_Y__DOT__Y))));
    bufp->chgBit(oldp+515,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_18___05FINVX0P5H7L_A_Y_OAO211X0P5H7L_A0_B0_NAND2X0P5H7L_Y__DOT__Y) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0))));
    bufp->chgBit(oldp+516,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)))));
    bufp->chgBit(oldp+517,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_20___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))));
    bufp->chgBit(oldp+518,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+519,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_20___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+520,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_20___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+521,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_193)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+522,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+523,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+524,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_21___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)))));
    bufp->chgBit(oldp+525,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_21___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+526,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_22___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)))));
    bufp->chgBit(oldp+527,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B1_A2_NAND4BBX0P5H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_22___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+528,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+529,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+530,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_27___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)))));
    bufp->chgBit(oldp+531,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_2___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_2___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_350))) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                     & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_2___05Freg_p__DOT__n0)) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05Freg_p__DOT__n0))))))));
    bufp->chgBit(oldp+532,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+533,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_2___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+534,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_30___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)))));
    bufp->chgBit(oldp+535,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_30___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+536,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+537,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+538,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+539,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+540,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_9___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)))));
    bufp->chgBit(oldp+541,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+542,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+543,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_10___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+544,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)))));
    bufp->chgBit(oldp+545,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)))));
    bufp->chgBit(oldp+546,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_17___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)))));
    bufp->chgBit(oldp+547,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_17___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+548,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_21___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+549,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_24___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)))));
    bufp->chgBit(oldp+550,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_24___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+551,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_25___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)))));
    bufp->chgBit(oldp+552,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_25___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+553,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_27___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+554,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_27___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+555,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_28___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)))));
    bufp->chgBit(oldp+556,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_28___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+557,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_28___05Freg_p__DOT__n0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_28___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0__DOT__A1_inv) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_2___05FAND3X1P4H7L_A__DOT__B)))));
    bufp->chgBit(oldp+558,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv))));
    bufp->chgBit(oldp+559,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_2___05FAND3X1P4H7L_A__DOT__B) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_28___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv)))));
    bufp->chgBit(oldp+560,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+561,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))));
    bufp->chgBit(oldp+562,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+563,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+564,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+565,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)))));
    bufp->chgBit(oldp+566,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)))));
    bufp->chgBit(oldp+567,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))));
    bufp->chgBit(oldp+568,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_29___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+569,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))));
    bufp->chgBit(oldp+570,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_29___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+571,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_NAND4BX1P4H7L_AN_Y_NOR4BBX4H7L_D__DOT__Bx));
    bufp->chgBit(oldp+572,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_NAND4BX1P4H7L_AN_Y_NOR4BBX4H7L_D__DOT__Ax));
    bufp->chgBit(oldp+573,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_NAND4BX1P4H7L_AN_Y_NOR4BBX4H7L_D__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_NAND4BX1P4H7L_AN_Y_NOR4BBX4H7L_D__DOT__Bx)))))));
    bufp->chgBit(oldp+574,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+575,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+576,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+577,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+578,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))));
    bufp->chgBit(oldp+579,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_29___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+580,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_427))));
    bufp->chgBit(oldp+581,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_29___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+582,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b1__05d_reg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_31___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+583,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_4___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+584,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_4___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+585,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_8___05Freg_p__DOT__n0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))))));
    bufp->chgBit(oldp+586,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+587,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))));
    bufp->chgBit(oldp+588,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444))));
    bufp->chgBit(oldp+589,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_11___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+590,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_11___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+591,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_12___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)))));
    bufp->chgBit(oldp+592,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_12___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+593,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_13___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+594,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_13___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_113))));
    bufp->chgBit(oldp+595,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)))));
    bufp->chgBit(oldp+596,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+597,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+598,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+599,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_129)))));
    bufp->chgBit(oldp+600,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_395)))));
    bufp->chgBit(oldp+601,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FAO221X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+602,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FAO221X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+603,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_19___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+604,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_19___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+605,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_19___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+606,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_19___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+607,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_A_AO222X0P5H7L_Y_B0_NOR2X1P4H7L_Y__DOT__A)) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05FAND3X1P4H7L_A__DOT__B) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_19___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+608,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_19___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))));
    bufp->chgBit(oldp+609,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b1__05d_reg_p__DOT__n0) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b0__05d_reg_p__DOT__n0) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_186)))) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_19___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+610,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_19___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+611,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_19___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+612,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_Y_NOR2X0P7H7L_A_B_AO222X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+613,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_19___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+614,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_19___05FNAND3X0P5H7L_A_Y_NAND3X0P5H7L_B_Y_NOR2X0P7H7L_A_B_AO222X0P5H7L_Y__DOT__OUT2));
    bufp->chgBit(oldp+615,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_1___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)))));
    bufp->chgBit(oldp+616,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_1___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_341)))));
    bufp->chgBit(oldp+617,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_24___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+618,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_24___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+619,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_25___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+620,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_25___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)))));
    bufp->chgBit(oldp+621,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_26___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)))));
    bufp->chgBit(oldp+622,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_26___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+623,((1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_223)) 
                                  | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_26___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05FAND3X1P4H7L_A_C_BUFX7H7L_Y_A_AND2X1H7L_Y__DOT__Y)))))));
    bufp->chgBit(oldp+624,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_27___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+625,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_27___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))));
    bufp->chgBit(oldp+626,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+627,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))));
    bufp->chgBit(oldp+628,((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_28___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))));
    bufp->chgBit(oldp+629,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_28___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)))));
    bufp->chgBit(oldp+630,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_28___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+631,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_30___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+632,((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_30___05FAOI33X1P4H7L_B2__DOT__B0)) 
                            & (0x0cU == (0x0cU & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2_sel))))));
    bufp->chgBit(oldp+633,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_6___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)))));
    bufp->chgBit(oldp+634,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_6___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+635,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+636,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))));
    bufp->chgBit(oldp+637,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_10___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+638,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_12___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+639,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_1___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+640,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_25___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+641,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+642,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+643,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_30___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+644,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_30___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+645,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+646,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_0___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+647,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_11___05FAOI221X1P4H7L_B1__DOT__outA));
    bufp->chgBit(oldp+648,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_11___05FAOI221X1P4H7L_B1__DOT__outB));
    bufp->chgBit(oldp+649,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_13___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+650,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_13___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+651,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+652,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+653,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+654,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_1___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+655,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_22___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444))));
    bufp->chgBit(oldp+656,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__C0_inv)) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_22___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+657,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_23___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+658,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_23___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+659,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_23___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+660,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_D_Y_NOR4X6H7L_A_C_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_23___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+661,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_23___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+662,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_23___05Freg_p__DOT__n0))) 
                                  & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_23___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+663,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+664,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_26___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+665,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_26___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+666,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+667,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+668,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+669,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+670,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+671,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+672,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+673,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_4___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+674,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_4___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+675,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+676,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))));
    bufp->chgBit(oldp+677,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+678,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+679,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+680,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+681,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_168)))));
    bufp->chgBit(oldp+682,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_7___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+683,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_10___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+684,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_395)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_10___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+685,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_13___05FAO221X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+686,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_13___05FAO221X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+687,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_17___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439))));
    bufp->chgBit(oldp+688,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y_AND3X1P4H7L_C__DOT__B) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__com_encode_rs2_sel_BUFX7H7L_A_1_Y_OR3X8H7L_C_Y_BUFX16H7L_A__DOT__Y)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_17___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+689,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_21___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439))));
    bufp->chgBit(oldp+690,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_21___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+691,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_21___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+692,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+693,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+694,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+695,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_439))));
    bufp->chgBit(oldp+696,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_25___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+697,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+698,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_25___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89))) 
                                   | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_25___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_421)))) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_25___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_173))) 
                                     | (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05Freg_p__DOT__n0)) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184))))))));
    bufp->chgBit(oldp+699,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+700,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+701,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_25___05Freg_p__DOT__n0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv)))));
    bufp->chgBit(oldp+702,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_25___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_28___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0__DOT__A1_inv))));
    bufp->chgBit(oldp+703,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__C0_inv) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_25___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_28___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0__DOT__A1_inv)))));
    bufp->chgBit(oldp+704,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+705,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05FNAND3X1H7L_B_Y_AND4X0P5H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+706,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+707,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_26___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_341)))));
    bufp->chgBit(oldp+708,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_26___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+709,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_28___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_341)))));
    bufp->chgBit(oldp+710,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_28___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+711,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+712,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_5___05FAO222X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+713,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_5___05FAO222X0P5H7L_B1__DOT__OUT2));
    bufp->chgBit(oldp+714,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_6___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)))));
    bufp->chgBit(oldp+715,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05FAOI33X0P5H7L_B2__DOT__A1)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_6___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+716,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AOI221X4H7L_C0__DOT__outA));
    bufp->chgBit(oldp+717,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_AOI221X4H7L_C0__DOT__outB));
    bufp->chgBit(oldp+718,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+719,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+720,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_9___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_9___05FNAND2X0P5H7L_A__DOT__Y))));
    bufp->chgBit(oldp+721,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_9___05FNAND2X0P5H7L_A__DOT__Y) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0))));
    bufp->chgBit(oldp+722,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_0___05FNAND2X0P5H7L_A_1_Y_NAND3BX0P7H7L_B_C_NOR2BX1P4H7L_AN__DOT__Ax));
    bufp->chgBit(oldp+723,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_10___05Freg_p__DOT__n0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))))));
    bufp->chgBit(oldp+724,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_13___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+725,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+726,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_14___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)))));
    bufp->chgBit(oldp+727,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_26___05FAOI33X0P5H7L_A0__DOT__A2)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_14___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+728,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+729,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+730,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+731,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+732,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+733,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+734,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+735,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+736,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_19___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)))));
    bufp->chgBit(oldp+737,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_19___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+738,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1_Y_NOR4X6H7L_D_A_NOR2X1P4H7L_A_Y_NOR3BX1P4H7L_AN__DOT__AN_bar));
    bufp->chgBit(oldp+739,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_1___05FAO221X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+740,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_1___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+741,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0_Y_AND2X1H7L_A__DOT__Y)))));
    bufp->chgBit(oldp+742,((1U & ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_21___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                         | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                            | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_21___05Freg_p__DOT__n0)))))) 
                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_21___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_21___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)))))));
    bufp->chgBit(oldp+743,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_22___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+744,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_23___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+745,((1U & (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_23___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_23___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))) 
                                   | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_23___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_23___05Freg_p__DOT__n0)) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A))))) 
                                  | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_23___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                            | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_23___05Freg_p__DOT__n0)) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y))))) 
                                     | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_23___05Freg_p__DOT__n0)) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05FAOI33X0P5H7L_B1__DOT__A2)) 
                                              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_23___05Freg_p__DOT__n0)))))))))));
    bufp->chgBit(oldp+746,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_23___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+747,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_23___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+748,((1U & (~ ((~ (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_28___05Freg_p__DOT__n0)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_28___05Freg_p__DOT__n0)) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))) 
                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_28___05Freg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_28___05Freg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))) 
                                         | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_28___05Freg_p__DOT__n0)) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_341)) 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B1_INVX0P5H7L_A__DOT__Y)) 
                                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_28___05Freg_p__DOT__n0)))))) 
                                            | (~ ((
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_28___05Freg_p__DOT__n0)) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_28___05Freg_p__DOT__n0)) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)))))))) 
                                     & ((~ (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_28___05Freg_p__DOT__n0)) 
                                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05Freg_p__DOT__n0)))) 
                                        & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_28___05Freg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0)) 
                                               | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_28___05Freg_p__DOT__n0)))) 
                                           & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_28___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)) 
                                                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_28___05Freg_p__DOT__n0)))))))))));
    bufp->chgBit(oldp+749,((1U & (((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_29___05Freg_p__DOT__n0)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_29___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)))) 
                                   | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_29___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_193)) 
                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_29___05Freg_p__DOT__n0)) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423))))) 
                                  | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_29___05Freg_p__DOT__n0)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_29___05Freg_p__DOT__n0)) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)))) 
                                     | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_29___05Freg_p__DOT__n0)) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)) 
                                           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_29___05Freg_p__DOT__n0)) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))))))));
    bufp->chgBit(oldp+750,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)))));
    bufp->chgBit(oldp+751,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)))));
    bufp->chgBit(oldp+752,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_361)))));
    bufp->chgBit(oldp+753,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+754,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)))));
    bufp->chgBit(oldp+755,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)))));
    bufp->chgBit(oldp+756,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_193)))));
    bufp->chgBit(oldp+757,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_423)))));
    bufp->chgBit(oldp+758,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))));
    bufp->chgBit(oldp+759,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+760,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_29___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+761,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y_B0_AND3X1H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+762,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_29___05Freg_p__DOT__n0)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y_B0_AND3X1H7L_Y__DOT__Y))))));
    bufp->chgBit(oldp+763,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y_B0_AND3X1H7L_Y__DOT__Y)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y_AND3X1P4H7L_C__DOT__B))))));
    bufp->chgBit(oldp+764,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+765,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+766,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_29___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)))));
    bufp->chgBit(oldp+767,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_7___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_29___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+768,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+769,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+770,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_29___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+771,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_29___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+772,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_31___05FAOI33X0P5H7L_A0_Y_AND2X1H7L_B__DOT__Y)))));
    bufp->chgBit(oldp+773,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_31___05FAOI33X0P5H7L_B2_Y_AND2X1H7L_A__DOT__Y)))));
    bufp->chgBit(oldp+774,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_NOR4BBX3H7L_Y__DOT__Bx));
    bufp->chgBit(oldp+775,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_NOR4BBX3H7L_Y__DOT__Ax));
    bufp->chgBit(oldp+776,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_NOR4BBX3H7L_Y__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_8___05FNAND2X0P5H7L_A_1_Y_NAND3X0P5H7L_B_A_NOR4BBX3H7L_Y__DOT__Bx)))))));
    bufp->chgBit(oldp+777,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+778,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_8___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+779,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_8___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+780,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_78)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_8___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+781,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))));
    bufp->chgBit(oldp+782,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_8___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+783,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_8___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+784,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_A_AO222X0P5H7L_Y_B0_NOR2X1P4H7L_Y__DOT__A)) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05FAND3X1P4H7L_A__DOT__B) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_8___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+785,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440))));
    bufp->chgBit(oldp+786,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+787,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+788,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_8___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+789,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_19___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+790,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+791,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+792,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05FNAND3X1H7L_B_Y_NAND4X1P4H7L_C_Y_NOR4X6H7L_B_C_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+793,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+794,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+795,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_10___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+796,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_10___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))));
    bufp->chgBit(oldp+797,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_11___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+798,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_11___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+799,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_13___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+800,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_13___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))));
    bufp->chgBit(oldp+801,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+802,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+803,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_19___05FAO221X1H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+804,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_19___05FAO221X1H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+805,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_1___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+806,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_1___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+807,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_21___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)))));
    bufp->chgBit(oldp+808,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_21___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+809,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_21___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+810,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_21___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+811,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+812,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__B0_inv));
    bufp->chgBit(oldp+813,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05Freg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__B0_inv))));
    bufp->chgBit(oldp+814,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__B0_inv))));
    bufp->chgBit(oldp+815,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+816,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+817,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_25___05FAOI22X1P4H7L_B1_Y_NOR4BBX4H7L_BN__DOT__Ax)) 
                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_25___05FAOI22X1P4H7L_B1_Y_NOR4BBX4H7L_BN__DOT__Bx)))))));
    bufp->chgBit(oldp+818,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_25___05FAOI22X1P4H7L_B1_Y_NOR4BBX4H7L_BN__DOT__Bx));
    bufp->chgBit(oldp+819,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_25___05FAOI22X1P4H7L_B1_Y_NOR4BBX4H7L_BN__DOT__Ax));
    bufp->chgBit(oldp+820,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_26___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+821,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_26___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+822,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+823,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+824,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+825,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+826,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_30___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+827,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_4___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+828,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_4___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+829,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_5___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+830,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_5___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)))));
    bufp->chgBit(oldp+831,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_7___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+832,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_7___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+833,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_8___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)))));
    bufp->chgBit(oldp+834,((1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_196)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_28___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0__DOT__A1_inv)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_8___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+835,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+836,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_0___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+837,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_10___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197))));
    bufp->chgBit(oldp+838,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_12___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+839,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_12___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+840,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_12___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+841,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_12___05FAOI222X1H7L_C0_Y_NOR4BBX4H7L_AN__DOT__Bx));
    bufp->chgBit(oldp+842,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_12___05FAOI222X1H7L_C0_Y_NOR4BBX4H7L_AN__DOT__Ax));
    bufp->chgBit(oldp+843,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_15___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_328)))));
    bufp->chgBit(oldp+844,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_15___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)))));
    bufp->chgBit(oldp+845,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+846,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+847,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_16___05FAOI222X0P5H7L_A0__DOT__outA));
    bufp->chgBit(oldp+848,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_16___05FAOI222X0P5H7L_A0__DOT__outB));
    bufp->chgBit(oldp+849,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+850,((1U & (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_16___05Freg_p__DOT__n0)))) 
                                      & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_16___05Freg_p__DOT__n0))))) 
                                     & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_16___05Freg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))) 
                                        & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_16___05Freg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197)))))))));
    bufp->chgBit(oldp+851,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_17___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+852,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_17___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_328)))));
    bufp->chgBit(oldp+853,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_1___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)))));
    bufp->chgBit(oldp+854,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_1___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_328)))));
    bufp->chgBit(oldp+855,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_23___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+856,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_23___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+857,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_2___05FAOI22X0P5H7L_A0_A1_INVX5H7L_Y__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_23___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+858,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_25___05FAOI221X1H7L_A0__DOT__outA));
    bufp->chgBit(oldp+859,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_25___05FAOI221X1H7L_A0__DOT__outB));
    bufp->chgBit(oldp+860,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+861,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_110)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+862,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_25___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_437)))));
    bufp->chgBit(oldp+863,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_25___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+864,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_28___05FAND3X1P4H7L_A_Y_NOR4X3H7L_A_Y_NOR4BBX4H7L_BN__DOT__Bx));
    bufp->chgBit(oldp+865,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_28___05FAND3X1P4H7L_A_Y_NOR4X3H7L_A_Y_NOR4BBX4H7L_BN__DOT__Ax));
    bufp->chgBit(oldp+866,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+867,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__B0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+868,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+869,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_28___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+870,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+871,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_2___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+872,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_2___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+873,((1U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_3___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_176))) 
                                  | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                         | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05Freg_p__DOT__n0)) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y)))) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_197)))))));
    bufp->chgBit(oldp+874,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+875,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+876,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+877,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_D_Y_NOR4X6H7L_A_C_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+878,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_3___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+879,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+880,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05FAOI222X0P7H7L_B1__DOT__outB));
    bufp->chgBit(oldp+881,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_3___05FAOI222X0P7H7L_B1__DOT__outC));
    bufp->chgBit(oldp+882,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+883,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416))));
    bufp->chgBit(oldp+884,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_6___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B1_A2_NAND4BBX0P5H7L_Y__DOT__Y))))));
    bufp->chgBit(oldp+885,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_6___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_328)))));
    bufp->chgBit(oldp+886,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_26___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)))));
    bufp->chgBit(oldp+887,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_6___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B1_A2_NAND4BBX0P5H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_26___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+888,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+889,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+890,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+891,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_A_D_AO222X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+892,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+893,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_10___05FAOI221X1P4H7L_B1__DOT__outA));
    bufp->chgBit(oldp+894,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_10___05FAOI221X1P4H7L_B1__DOT__outB));
    bufp->chgBit(oldp+895,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_10___05FAOI221X1P4H7L_B1_Y_AND2X1H7L_A_B_AOI222X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+896,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_10___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+897,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_10___05FAOI221X1P4H7L_B1_Y_AND2X1H7L_A_B_AOI222X1P4H7L_Y__DOT__outC));
    bufp->chgBit(oldp+898,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_13___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440))));
    bufp->chgBit(oldp+899,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_13___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))));
    bufp->chgBit(oldp+900,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_13___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))));
    bufp->chgBit(oldp+901,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_13___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357))));
    bufp->chgBit(oldp+902,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+903,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_14___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+904,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_16___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+905,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_16___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+906,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_17___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)))));
    bufp->chgBit(oldp+907,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_17___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)))));
    bufp->chgBit(oldp+908,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+909,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_18___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+910,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)))));
    bufp->chgBit(oldp+911,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_1___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+912,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_21___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)))));
    bufp->chgBit(oldp+913,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_1___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX2H7L_Y__DOT__Y) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_21___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+914,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_22___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+915,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_22___05FAO222X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+916,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_22___05FAO222X0P5H7L_B1__DOT__OUT2));
    bufp->chgBit(oldp+917,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_A_D_AO222X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_22___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+918,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_22___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+919,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_22___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+920,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_24___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+921,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05FAOI33X0P5H7L_A0__DOT__B0) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_24___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+922,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_24___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_105))));
    bufp->chgBit(oldp+923,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_24___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+924,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+925,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+926,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+927,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_24___05FNAND3X0P5H7L_A_Y_NAND4X0P7H7L_D_Y_NOR4X6H7L_D_B_AO222X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+928,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_24___05FNAND3X0P5H7L_A_Y_NAND4X0P7H7L_D_Y_NOR4X6H7L_D_B_AO222X0P5H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+929,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+930,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_26___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+931,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_26___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+932,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_78)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_26___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+933,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_26___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+934,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_26___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+935,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+936,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+937,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_28___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+938,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_28___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)))));
    bufp->chgBit(oldp+939,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_2___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+940,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_2___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)))));
    bufp->chgBit(oldp+941,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_30___05Freg_p__DOT__n0)) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373))) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_30___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_30___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89))) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_30___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_428)))))));
    bufp->chgBit(oldp+942,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_30___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+943,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_136)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_30___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+944,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_31___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+945,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_31___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+946,((1U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_5___05Freg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79)) 
                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_5___05Freg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                                  | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_5___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_89))) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05FAND3X1P4H7L_B__DOT__C) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_5___05Freg_p__DOT__n0))))))));
    bufp->chgBit(oldp+947,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+948,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_78)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_26_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+949,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+950,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+951,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_5___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+952,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_6___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444))));
    bufp->chgBit(oldp+953,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_6___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+954,((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_6___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_6___05Freg_p__DOT__n0) 
                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202)))));
    bufp->chgBit(oldp+955,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+956,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_7___05FAO222X0P5H7L_C1__DOT__OUT1));
    bufp->chgBit(oldp+957,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_7___05FAO222X0P5H7L_C1__DOT__OUT2));
    bufp->chgBit(oldp+958,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449))));
    bufp->chgBit(oldp+959,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_9___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+960,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))));
    bufp->chgBit(oldp+961,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_0___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+962,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_10___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440))));
    bufp->chgBit(oldp+963,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_10___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+964,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_11___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+965,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05FAOI33X0P5H7L_B1__DOT__A2)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_11___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+966,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_12___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440))));
    bufp->chgBit(oldp+967,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_12___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+968,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_13___05FAO221X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+969,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_13___05FAO221X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+970,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440))));
    bufp->chgBit(oldp+971,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_14___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+972,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_16___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)))));
    bufp->chgBit(oldp+973,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05FAOI33X0P5H7L_B1__DOT__A2)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_16___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+974,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_17___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440))));
    bufp->chgBit(oldp+975,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_17___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+976,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+977,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+978,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1_C0_NOR4BX0P5H7L_Y_C_MUXI2X0P5H7L_Y__DOT__YN));
    bufp->chgBit(oldp+979,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_18___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+980,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_11___05FAND3X1P4H7L_A_Y_NOR4X2H7L_D_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_18___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+981,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05FNAND3X1H7L_B_Y_NAND4X1P4H7L_C_Y_NOR4X6H7L_B_C_AO221X0P5H7L_Y__DOT__A1) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_18___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+982,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_1___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+983,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05FAOI33X0P5H7L_B1__DOT__A2)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_1___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+984,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_22___05FAO221X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+985,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_22___05FAO221X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+986,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_23___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135)))));
    bufp->chgBit(oldp+987,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_13___05FAOI33X0P5H7L_B1__DOT__A2)) 
                                  | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_23___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+988,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_26___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+989,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_26___05FAO222X0P5H7L_C0__DOT__OUT1));
    bufp->chgBit(oldp+990,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_26___05FAO222X0P5H7L_C0__DOT__OUT2));
    bufp->chgBit(oldp+991,((1U & (~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_26___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77)) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_26___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445)))) 
                                      & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_449)) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05FAOI33X0P5H7L_A0__DOT__B0) 
                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_26___05Freg_p__DOT__n0)))))) 
                                     & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_26___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432)) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_26___05Freg_p__DOT__n0) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_357)))) 
                                        & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_26___05Freg_p__DOT__n0) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447)) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_26___05Freg_p__DOT__n0) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))))))))));
    bufp->chgBit(oldp+992,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_27___05FAO222X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+993,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_27___05FAO222X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+994,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+995,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_2___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+996,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_2___05FAO222X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+997,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_2___05FAO222X0P5H7L_B1__DOT__OUT2));
    bufp->chgBit(oldp+998,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b2__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b3__05d_reg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_31___05Freg_p__DOT__n0)))) 
                                  & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05Freg_p__DOT__n0) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_30___05FAOI33X1P4H7L_B2__DOT__B0)))))));
    bufp->chgBit(oldp+999,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05Freg_p__DOT__n0) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))));
    bufp->chgBit(oldp+1000,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_3___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+1001,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_3___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+1002,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_3___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+1003,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_4___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+1004,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_25___05FAOI33X0P5H7L_A0__DOT__B0) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1005,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1006,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1007,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_4___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))));
    bufp->chgBit(oldp+1008,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_B_AO222X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+1009,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_B_AO222X0P5H7L_Y__DOT__OUT1));
    bufp->chgBit(oldp+1010,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_4___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1011,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_193)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1012,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1013,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1014,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FAOI222X1P4H7L_C0__DOT__outB));
    bufp->chgBit(oldp+1015,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FAOI222X1P4H7L_C0__DOT__outC));
    bufp->chgBit(oldp+1016,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_6___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_29___05FAO222X0P5H7L_A0_Y_NOR2X1P4H7L_A_B_AO222X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+1017,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_379)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1018,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_6___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+1019,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1020,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_6___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+1021,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_1___05FAO222X0P5H7L_B1__DOT__B0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1022,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1023,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_D_Y_NOR4X6H7L_A_C_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1024,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y_C0_NOR3X0P5H7L_Y_C_MUXI2X0P5H7L_Y__DOT__YN));
    bufp->chgBit(oldp+1025,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_193)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1026,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1027,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1028,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1029,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1030,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_7___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_1___05FAO221X0P5H7L_B1__DOT__B0))));
    bufp->chgBit(oldp+1031,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1032,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_23___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_D_Y_NOR4X6H7L_A_C_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1033,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_7___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1034,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_10___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_447))));
    bufp->chgBit(oldp+1035,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_25___05FAOI33X0P5H7L_A0__DOT__B0) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_10___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1036,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_10___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1037,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_12___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))));
    bufp->chgBit(oldp+1038,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_12___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1039,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1040,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_431)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1041,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_15___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1042,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_15___05FNAND3BX0P5H7L_C_Y_NAND3X0P5H7L_B_A_AOAI211X1H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+1043,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_15___05Freg_p__DOT__n0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_15___05FNAND3BX0P5H7L_C_Y_NAND3X0P5H7L_B_A_AOAI211X1H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+1044,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_15___05FNAND3BX0P5H7L_C_Y_NAND3X0P5H7L_B_A_AOAI211X1H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+1045,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_15___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1046,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_16___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))));
    bufp->chgBit(oldp+1047,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_16___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))));
    bufp->chgBit(oldp+1048,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_17___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+1049,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_17___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))));
    bufp->chgBit(oldp+1050,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_18___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))));
    bufp->chgBit(oldp+1051,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_18___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1052,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_22___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)))));
    bufp->chgBit(oldp+1053,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_22___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)))));
    bufp->chgBit(oldp+1054,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_23___05FAO221X0P5H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+1055,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_23___05FAO221X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+1056,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_23___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)))));
    bufp->chgBit(oldp+1057,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_23___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+1058,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_23___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1059,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_24___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_77))));
    bufp->chgBit(oldp+1060,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_24___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))));
    bufp->chgBit(oldp+1061,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_24___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_314))));
    bufp->chgBit(oldp+1062,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_24___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1063,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_26___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)))));
    bufp->chgBit(oldp+1064,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_26___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)))));
    bufp->chgBit(oldp+1065,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1066,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1067,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1068,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1069,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)))));
    bufp->chgBit(oldp+1070,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_29___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_184)))));
    bufp->chgBit(oldp+1071,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_B_AOI33X1P4H7L_Y__DOT__A2) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_29___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1072,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_29___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))));
    bufp->chgBit(oldp+1073,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_29___05Freg_p__DOT__n0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_C_OAO211X0P5H7L_Y_B0_NAND3BX0P5H7L_Y__DOT__Y))));
    bufp->chgBit(oldp+1074,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_25___05FNOR3BX1P4H7L_AN_Y_NOR4X3H7L_A_Y_NOR4BX4H7L_AN_B_AO221X1P4H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_29___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_Y_NAND4BX1P4H7L_AN_C_OAO211X0P5H7L_Y_B0_NAND3BX0P5H7L_Y__DOT__Y))));
    bufp->chgBit(oldp+1075,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_29___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))));
    bufp->chgBit(oldp+1076,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_20___05FNAND3X0P5H7L_A_Y_NAND3X1P4H7L_B_Y_NOR3BX6H7L_B_AN_AND4X1P4H7L_Y_D_AOI33X0P5H7L_Y__DOT__A2) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_29___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1077,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_2___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))));
    bufp->chgBit(oldp+1078,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_23___05FAOAI211X0P5H7L_A0__DOT__C0_inv)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_2___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1079,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_31___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_432))));
    bufp->chgBit(oldp+1080,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_31___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))));
    bufp->chgBit(oldp+1081,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_31___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1082,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1083,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_3___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1084,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_5___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))));
    bufp->chgBit(oldp+1085,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_22___05FMUX2X0P5H7L_B_Y_NAND3X1H7L_C_Y_NAND4X0P5H7L_D_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_5___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1086,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_7___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_448))));
    bufp->chgBit(oldp+1087,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_7___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+1088,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_8___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)))));
    bufp->chgBit(oldp+1089,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_8___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1090,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_10___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))));
    bufp->chgBit(oldp+1091,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_10___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1092,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_11___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)))));
    bufp->chgBit(oldp+1093,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_11___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)))));
    bufp->chgBit(oldp+1094,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_12___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1095,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_149)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_12___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1096,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_12___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1097,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_14___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_224)))));
    bufp->chgBit(oldp+1098,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_3___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_C_NAND4BBX4H7L_Y__DOT__Y) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_14___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1099,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1100,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1101,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1102,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_16___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+1103,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_17___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))));
    bufp->chgBit(oldp+1104,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05FAOI33X0P5H7L_A0__DOT__B0) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_17___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1105,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_17___05FAOI33X0P5H7L_B2_Y_AND2X1H7L_B__DOT__Y)))));
    bufp->chgBit(oldp+1106,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_17___05FAOI33X1H7L_A0_Y_AND2X1H7L_B__DOT__Y)))));
    bufp->chgBit(oldp+1107,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_20___05FAO222X1P4H7L_B1__DOT__OUT0));
    bufp->chgBit(oldp+1108,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_20___05FAO222X1P4H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+1109,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_415)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1110,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_20___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_18___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_A0_Y_AO221X1P4H7L_C0__DOT__B0))));
    bufp->chgBit(oldp+1111,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_20___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_202))));
    bufp->chgBit(oldp+1112,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_20___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_79))));
    bufp->chgBit(oldp+1113,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_4___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X6H7L_D_A_AO222X0P5H7L_Y_B0_NOR2X1P4H7L_Y__DOT__A)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_3___05FAND3X1P4H7L_A__DOT__B) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_20___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1114,((1U & (~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_20___05Freg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_20___05Freg_p__DOT__n0))))) 
                                       & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_20___05Freg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_20___05Freg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))))) 
                                      & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_20___05Freg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_20___05Freg_p__DOT__n0))))) 
                                         & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_20___05FNAND3X0P5H7L_A_Y_NAND3X1P4H7L_B_Y_NOR3BX6H7L_B_AN_AND4X1P4H7L_Y_D_AOI33X0P5H7L_Y__DOT__A2) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_20___05Freg_p__DOT__n0))) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_20___05Freg_p__DOT__n0) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))))))))));
    bufp->chgBit(oldp+1115,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_20___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_410))));
    bufp->chgBit(oldp+1116,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_20___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1117,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_20___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_95))));
    bufp->chgBit(oldp+1118,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_20___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_413))));
    bufp->chgBit(oldp+1119,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_20___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_401))));
    bufp->chgBit(oldp+1120,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_20___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1121,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_20___05FNAND3X0P5H7L_A_Y_NAND3X1P4H7L_B_Y_NOR3BX6H7L_B_AN_AND4X1P4H7L_Y_D_AOI33X0P5H7L_Y__DOT__A2) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_20___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1122,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_20___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_407))));
    bufp->chgBit(oldp+1123,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1124,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_20___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1125,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)))));
    bufp->chgBit(oldp+1126,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_A0_B0_NAND4BBX0P5H7L_Y__DOT__Y) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_21___05Freg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1127,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05FNAND3X1H7L_A_Y_AND4X1H7L_D_Y_AND4X3H7L_A_D_AOI222X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1128,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_21___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1129,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_21___05FNAND3X1H7L_A_Y_AND4X1H7L_D_Y_AND4X3H7L_A_D_AOI222X1P4H7L_Y__DOT__outC));
    bufp->chgBit(oldp+1130,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_22___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1131,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_22___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+1132,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_22___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1133,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_23___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))));
    bufp->chgBit(oldp+1134,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_23___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1135,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_24___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440))));
    bufp->chgBit(oldp+1136,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1137,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1138,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__B0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_24___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1139,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_24___05Freg_p__DOT__n0))) 
                                   & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_24___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1140,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_27___05FAO221X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+1141,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_27___05FAO221X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+1142,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_27___05FINVX0P5H7L_A_Y_OAI33X1P4H7L_B2_Y_INVX0P5H7L_A__DOT__Y)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_27___05FINVX0P5H7L_A_Y_OAI33X0P7H7L_B2_Y_INVX0P5H7L_A__DOT__Y)) 
                                      | ((~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_27___05Freg_p__DOT__n0)) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)) 
                                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_27___05Freg_p__DOT__n0)))))) 
                                         | (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_27___05Freg_p__DOT__n0)) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_27___05Freg_p__DOT__n0)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_118))))))))));
    bufp->chgBit(oldp+1143,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_28___05FAOI221X1P4H7L_A0__DOT__outA));
    bufp->chgBit(oldp+1144,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_28___05FAOI221X1P4H7L_A0__DOT__outB));
    bufp->chgBit(oldp+1145,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_28___05FAOI221X1P4H7L_A0_Y_AND3X1P4H7L_C__DOT__Y)))));
    bufp->chgBit(oldp+1146,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_2___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1147,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_2___05Freg_p__DOT__n0) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__C0_inv)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1148,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_18___05FNAND3X0P5H7L_B_Y_AND3X1P4H7L_B_A_AOAI211X1P4H7L_Y__DOT__C0_inv)) 
                                   & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_2___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1149,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_2___05FNOR2BX1H7L_AN_Z_AOA211X1P4H7L_B0_C0_AOAI211X1P4H7L_C0__DOT__B0_inv));
    bufp->chgBit(oldp+1150,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_8___05Freg_p__DOT__n0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_2___05FNOR2BX1H7L_AN_Z_AOA211X1P4H7L_B0_C0_AOAI211X1P4H7L_C0__DOT__B0_inv))));
    bufp->chgBit(oldp+1151,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_2___05FNOR2BX1H7L_AN_Z_AOA211X1P4H7L_B0_C0_AOAI211X1P4H7L_C0__DOT__B0_inv))));
    bufp->chgBit(oldp+1152,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_8___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1153,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_2___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1154,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_2___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_13___05FNAND3X1H7L_B_Y_NAND4X1H7L_C_Y_NOR4X6H7L_D_A_AO221X0P5H7L_Y__DOT__B0))));
    bufp->chgBit(oldp+1155,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_4___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_82))));
    bufp->chgBit(oldp+1156,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_4___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1157,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1158,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_8___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_B0_INVX5H7L_A__DOT__A)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_5___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1159,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_446)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1160,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_436)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1161,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_Y_AO221X0P7H7L_C0__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1162,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_6___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_C0_AOI21X0P5H7L_B0_Y_AO221X0P5H7L_C0__DOT__A1))));
    bufp->chgBit(oldp+1163,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1164,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_109))));
    bufp->chgBit(oldp+1165,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_0___05FINVX0P5H7L_A_Y_OAI33X1H7L_B2_B1_BUFX10H7L_A__DOT__Y)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_9___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1166,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_9___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_18___05FINVX0P5H7L_A_Y_OAI221X1P4H7L_B1_A1_INVX5H7L_A__DOT__A)))));
    bufp->chgBit(oldp+1167,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1168,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_148)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_0___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1169,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_11___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444))));
    bufp->chgBit(oldp+1170,(((~ (IData)(((0U != (6U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2_sel))) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_101)))) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_11___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1171,((1U & (~ (((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_11___05Freg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_440)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_13_11___05Freg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_416)))) 
                                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_11___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_25_30___05FAO221X0P5H7L_A0__DOT__B0)))) 
                                      & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_21___05FAOI33X0P5H7L_A0__DOT__B0) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_11___05Freg_p__DOT__n0)))) 
                                         & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_11___05Freg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_444)) 
                                               | ((~ (IData)(
                                                             ((0U 
                                                               != 
                                                               (6U 
                                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs2_sel))) 
                                                              | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_101)))) 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_11___05Freg_p__DOT__n0)))))))))));
    bufp->chgBit(oldp+1172,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_12___05FMUX2X0P5H7L_A_Y) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_417))));
    bufp->chgBit(oldp+1173,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_12___05FMUX2X0P5H7L_A_Y) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_235))));
    bufp->chgBit(oldp+1174,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_13___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445))));
    bufp->chgBit(oldp+1175,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_17___05FAO221X0P5H7L_A0__DOT__B0))));
    bufp->chgBit(oldp+1176,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_14___05FAOI222X0P7H7L_B1__DOT__outA));
    bufp->chgBit(oldp+1177,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_14___05FAOI222X0P7H7L_B1__DOT__outB));
    bufp->chgBit(oldp+1178,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1179,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1180,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05FNAND3X1H7L_B_Y_NAND4X1P4H7L_C_Y_NOR4X6H7L_B_C_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1181,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_14___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1182,((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_14___05Freg_p__DOT__n0))) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_14___05Freg_p__DOT__n0) 
                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366)))));
    bufp->chgBit(oldp+1183,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_1___05FAND3X1P4H7L_B__DOT__C) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_14___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1184,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_14___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_366))));
    bufp->chgBit(oldp+1185,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_75)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1186,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1187,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_305)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1188,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_11___05FNAND3X1H7L_A_Y_NAND4X1H7L_A_Y_NOR4X6H7L_A_D_AO222X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1189,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1190,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_129)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1191,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1192,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_395)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_15___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1193,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_30_16___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_87)))));
    bufp->chgBit(oldp+1194,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)))));
    bufp->chgBit(oldp+1195,((1U & (~ (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_21_16___05Freg_p__DOT__n0) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_151))) 
                                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_31___05FAND3X1P4H7L_B__DOT__C) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_16___05Freg_p__DOT__n0))))) 
                                      & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_5_16___05Freg_p__DOT__n0) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_170))) 
                                         & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b4__05d_reg_p__DOT__n0)) 
                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_10___05FAND3X1P4H7L_A_Y_NOR4X2H7L_B_C_AND3X1P4H7L_Y__DOT__C) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05Freg_p__DOT__n0))))))))));
    bufp->chgBit(oldp+1196,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_16___05FNAND3X1H7L_B_Y_AND4X0P5H7L_B_Y_NOR4BX4H7L_AN_D_AO222X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_15_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1197,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_349)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_27_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1198,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_16___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1199,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_17___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445))));
    bufp->chgBit(oldp+1200,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05FAOI33X0P5H7L_A0__DOT__B0) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_17___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1201,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_26___05FAOI33X0P5H7L_A0__DOT__A2)) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_17___05Freg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_23___05FAOI33X0P5H7L_A0__DOT__A1)))))));
    bufp->chgBit(oldp+1202,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_8_24___05FNAND3X1H7L_A_Y_NAND4X1H7L_B_Y_NOR4X6H7L_B_D_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_17___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1203,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_127)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_17___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1204,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_17___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1205,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_19___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)))));
    bufp->chgBit(oldp+1206,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_30___05FNAND3X0P5H7L_A_C_INVX0P5H7L_Y__DOT__Y)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_10_16___05FAOI33X0P5H7L_A0__DOT__A1)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_19___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1207,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_21___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1208,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_21___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1209,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_420)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_1_25___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1210,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_25___05FAO222X0P5H7L_B1__DOT__OUT1));
    bufp->chgBit(oldp+1211,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_25___05FAO222X0P5H7L_B1__DOT__OUT2));
    bufp->chgBit(oldp+1212,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_27___05Freg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_408)))));
    bufp->chgBit(oldp+1213,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_31_29___05FNAND2X0P5H7L_A_Y_AND2X1H7L_A_B_NOR3BX6H7L_Y_C_NAND2X1H7L_Y_B_AOAI211X0P5H7L_Y__DOT__C0)) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_6___05FMUX2X0P5H7L_A_Y_AND3X1P4H7L_C__DOT__B)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_27___05Freg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1214,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1215,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_167)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_7_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1216,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05FNAND3X1H7L_B_Y_NAND4X1P4H7L_C_Y_NOR4X6H7L_B_C_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1217,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_6___05FNAND3X0P5H7L_B_Y_NAND4X1H7L_A_Y_NOR4X3H7L_A_D_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1218,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_18___05FAO221X0P5H7L_B1__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_4_27___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1219,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_27___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_20_13___05FNAND3X1H7L_A_Y_NAND4X1P4H7L_C_Y_NOR4X3H7L_D_A_AO222X0P5H7L_Y__DOT__C0))));
    bufp->chgBit(oldp+1220,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_115)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1221,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_138)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1222,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_28___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_C0_AOI21X0P5H7L_B0_Y_AO221X0P5H7L_C0__DOT__A1))));
    bufp->chgBit(oldp+1223,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_3___05FNAND3X0P5H7L_A_Y_OAI211X1P4H7L_B0_C0_AOAI211X0P5H7L_Y_C0_AOA211X1P4H7L_C0_Y_AO221X0P5H7L_C0__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_16_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1224,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_2___05FINVX0P5H7L_A_Y_NOR3X0P5H7L_B_Y_AO221X0P7H7L_C0__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1225,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_28___05FNAND3X1H7L_B_Y_NAND4X1P4H7L_C_Y_NOR4X6H7L_B_C_AO221X0P5H7L_Y__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_11_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1226,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_222)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_23_28___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1227,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_6_28___05Freg_p__DOT__n0) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1228,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_9___05FNAND3X0P5H7L_A_Y_NAND3X0P7H7L_B_A_AOAI211X0P5H7L_Y__DOT__C0_inv)) 
                                   & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_28___05Freg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rs1_sel__05b2__05d_reg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1229,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_2_28___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1230,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_2___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1231,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__A1) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_2___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1232,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_2___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1233,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_424)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_12_22___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1234,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_22___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1235,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_395)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_28_22___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1236,((((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_373)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_3_2___05Freg_p__DOT__n0)) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_Y_AO221X0P5H7L_C0__DOT__A1) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_2___05Freg_p__DOT__n0)) 
                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_2___05Freg_p__DOT__n0))))));
    bufp->chgBit(oldp+1237,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_81)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_14_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1238,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_23___05FINVX0P5H7L_A_Y_OAI221X0P5H7L_A0_A1_INVX5H7L_A__DOT__A)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_22_6___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1239,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_7___05Freg_p__DOT__n0) 
                             & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_445))));
    bufp->chgBit(oldp+1240,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_19_26___05FAOI33X0P5H7L_A0__DOT__B0) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_csr_sel__05b0__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_17_7___05Freg_p__DOT__n0)))));
    bufp->chgBit(oldp+1241,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_18_7___05Freg_p__DOT__n0)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_24_4___05FINVX0P5H7L_A_Y_OAOI211X0P5H7L_A0_C0_AOI21X0P5H7L_B0_Y_AO221X0P5H7L_C0__DOT__A1))))));
    bufp->chgBit(oldp+1242,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_9___05FAO222X0P5H7L_A0__DOT__OUT0));
    bufp->chgBit(oldp+1243,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_9_9___05FAO222X0P5H7L_A0__DOT__OUT1));
    bufp->chgBit(oldp+1244,(((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_93)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__reg_29_9___05Freg_p__DOT__n0))));
    bufp->chgBit(oldp+1245,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_fire_ICGX0P5H7L_E__DOT__E));
    bufp->chgBit(oldp+1246,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p__DOT__CK));
    bufp->chgBit(oldp+1247,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__E));
    bufp->chgBit(oldp+1248,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1249,((1U & (~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0))) 
                                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_0___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1)))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1250,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1251,((1U ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y) 
                                   ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1252,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1253,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1254,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_NAND2BX0P5H7L_AN_Y_NAND2X0P5H7L_B__DOT__Y) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1255,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b10__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_NAND2BX0P5H7L_AN_Y_NAND2X0P5H7L_B__DOT__Y) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
                                      | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                                          ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1256,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1257,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p__DOT__n0) 
                                      ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y)))))));
    bufp->chgBit(oldp+1258,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p__DOT__n0) 
                             ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y)))));
    bufp->chgBit(oldp+1259,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y))));
    bufp->chgBit(oldp+1260,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_NAND2X0P5H7L_B__DOT__Y) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1261,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b11__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_NAND2X0P5H7L_B__DOT__Y) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
                                      | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p__DOT__n0) 
                                             ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__n0) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y)))) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1262,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p_D_AOI211X0P5H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1263,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1))))));
    bufp->chgBit(oldp+1264,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0) 
                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1))));
    bufp->chgBit(oldp+1265,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX1P4H7L_Y_AN_NAND2BX1P4H7L_AN_Y_NAND2X1P4H7L_B__DOT__Y) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1266,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b12__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX1P4H7L_Y_AN_NAND2BX1P4H7L_AN_Y_NAND2X1P4H7L_B__DOT__Y) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
                                      | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0) 
                                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1))) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1267,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1268,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1))) 
                                   ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1269,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1))) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1270,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1))))));
    bufp->chgBit(oldp+1271,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1272,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_B0_NOR2X0P5H7L_Y__DOT__A) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1273,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_B0_NOR2X0P5H7L_Y__DOT__A) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
                                      | (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1))) 
                                          ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1274,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b14__05d_reg_p_D_AOI211X0P5H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1275,((1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                          | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_245)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b14__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1276,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_245)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))) 
                                   ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b14__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1277,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                      | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_245)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))))));
    bufp->chgBit(oldp+1278,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_245)))));
    bufp->chgBit(oldp+1279,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)) 
                                      | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_245)))))));
    bufp->chgBit(oldp+1280,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_NAND2BX0P5H7L_AN_Y_NAND2X0P5H7L_B__DOT__Y) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1281,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_NAND2BX0P5H7L_AN_Y_NAND2X0P5H7L_B__DOT__Y) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
                                      | ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_245)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))) 
                                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b14__05d_reg_p__DOT__n0))) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1282,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b15__05d_reg_p_D_AOI211X0P5H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1283,((1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                          | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b15__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1284,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))) 
                                   ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b15__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1285,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                      | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))))));
    bufp->chgBit(oldp+1286,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+1287,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
    bufp->chgBit(oldp+1288,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)) 
                                      | (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))))));
    bufp->chgBit(oldp+1289,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_NAND2X1P4H7L_B__DOT__Y) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1290,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b15__05d_reg_p_D_NAND3X0P5H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_NAND2X1P4H7L_B__DOT__Y) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
                                      | ((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))) 
                                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b15__05d_reg_p__DOT__n0))) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1291,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1292,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__A1N));
    bufp->chgBit(oldp+1293,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y_A1N_MUX2X1P4H7L_B_Y));
    bufp->chgBit(oldp+1294,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__B0_bar)))));
    bufp->chgBit(oldp+1295,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1296,((1U & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_249)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1297,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1298,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y_A1_AOI31X0P5H7L_A1__DOT__outA))))));
    bufp->chgBit(oldp+1299,((1U & (~ ((~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_249)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p__DOT__n0))) 
                                      & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p__DOT__n0)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_249))))))));
    bufp->chgBit(oldp+1300,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p__DOT__n0)) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_249))))));
    bufp->chgBit(oldp+1301,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1302,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1303,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax))))));
    bufp->chgBit(oldp+1304,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax)))));
    bufp->chgBit(oldp+1305,((1U & ((IData)(vlSelfRef.reset) 
                                   | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1306,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y_A2_OAI21X0P5H7L_A1_Y_AOAI211X1P4H7L_A0__DOT__C0_inv))))));
    bufp->chgBit(oldp+1307,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b18__05d_reg_p__DOT__D) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1308,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1309,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__OUT0)) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1310,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1311,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_B0_NAND2X0P5H7L_Y__DOT__A) 
                                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y__DOT__A0_inv)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__Y)))))));
    bufp->chgBit(oldp+1312,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_B0_NAND2X0P5H7L_Y__DOT__A) 
                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1313,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b1__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1314,((1U & (~ (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B))) 
                                       & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_1___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1)))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1315,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1316,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0)))));
    bufp->chgBit(oldp+1317,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0));
    bufp->chgBit(oldp+1318,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p__DOT__n0)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0)))))));
    bufp->chgBit(oldp+1319,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__A1_inv)))));
    bufp->chgBit(oldp+1320,((1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0)) 
                                       | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__A1_inv))) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_OAI21X0P5H7L_A1__DOT__B0))))));
    bufp->chgBit(oldp+1321,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_OAI21X0P5H7L_A1__DOT__B0));
    bufp->chgBit(oldp+1322,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__A0_inv)))));
    bufp->chgBit(oldp+1323,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1324,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))))));
    bufp->chgBit(oldp+1325,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1326,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1327,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__C0_inv)))));
    bufp->chgBit(oldp+1328,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1329,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1330,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1331,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))))));
    bufp->chgBit(oldp+1332,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1333,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1334,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_251)))));
    bufp->chgBit(oldp+1335,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0)) 
                                      | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_251)))))));
    bufp->chgBit(oldp+1336,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1337,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1338,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_NAND2BX0P5H7L_AN_Y_NAND2X0P5H7L_B__DOT__Y) 
                                      & (~ (IData)(vlSelfRef.reset)))))));
    bufp->chgBit(oldp+1339,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                         & (~ ((IData)(vlSelfRef.reset) 
                                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0))))))))));
    bufp->chgBit(oldp+1340,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0)))));
    bufp->chgBit(oldp+1341,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0))))))));
    bufp->chgBit(oldp+1342,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_NAND2BX0P5H7L_AN_Y_NAND2X0P5H7L_B__DOT__Y) 
                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1343,(((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_NAND2BX0P5H7L_AN_Y_NAND2X0P5H7L_B__DOT__Y) 
                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                         & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0)))))))));
    bufp->chgBit(oldp+1344,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1345,((1U & (~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0))))) 
                                      & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))))))));
    bufp->chgBit(oldp+1346,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))));
    bufp->chgBit(oldp+1347,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_297)))));
    bufp->chgBit(oldp+1348,((1U & (~ ((IData)(vlSelfRef.reset) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1349,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_csr_w_pc__05b22__05d_reg_p__DOT__D) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1350,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1351,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p__DOT__n0) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1352,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1353,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y_A1_AOI31X0P5H7L_A1__DOT__outA))))));
    bufp->chgBit(oldp+1354,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p__DOT__n0) 
                                          & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA)))) 
                                      & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p__DOT__n0)) 
                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0) 
                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0)))))))))));
    bufp->chgBit(oldp+1355,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_297))))));
    bufp->chgBit(oldp+1356,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p__DOT__n0)) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0) 
                                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                            & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0)))))))));
    bufp->chgBit(oldp+1357,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B));
    bufp->chgBit(oldp+1358,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1359,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1360,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1361,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1362,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))))));
    bufp->chgBit(oldp+1363,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1364,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1365,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y_A2_OAI21X0P5H7L_A1_Y_AOAI211X1P4H7L_A0__DOT__C0_inv)))));
    bufp->chgBit(oldp+1366,((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))) 
                             | (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y_A2_OAI21X0P5H7L_A1_Y_AOAI211X1P4H7L_A0__DOT__C0_inv)))));
    bufp->chgBit(oldp+1367,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1368,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1369,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1370,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_254)))));
    bufp->chgBit(oldp+1371,((1U & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_254)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_297))))));
    bufp->chgBit(oldp+1372,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1373,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1374,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1375,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1376,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))))));
    bufp->chgBit(oldp+1377,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p__DOT__n0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1378,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p__DOT__n0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1379,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_NAND2X1P4H7L_B__DOT__Y));
    bufp->chgBit(oldp+1380,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_NOR2X0P5H7L_B__DOT__B));
    bufp->chgBit(oldp+1381,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_NOR2X0P5H7L_B__DOT__B))))));
    bufp->chgBit(oldp+1382,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_OR2X0P5H7L_Y_B_NAND4X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1383,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1384,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1385,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI21X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1386,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1387,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))))));
    bufp->chgBit(oldp+1388,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI21X1P4H7L_Y__DOT__outA))) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p__DOT__n0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI21X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1389,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p__DOT__n0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI21X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1390,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)))));
    bufp->chgBit(oldp+1391,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)))))));
    bufp->chgBit(oldp+1392,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X1P4H7L_Y_D_OR2X0P5H7L_Y_B_NAND4X1P4H7L_Y__DOT__Y) 
                                   | ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_254))) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_258))))));
    bufp->chgBit(oldp+1393,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI21X1P4H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1394,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+1395,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y)))))));
    bufp->chgBit(oldp+1396,(((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)) 
                                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y)))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p__DOT__n0))));
    bufp->chgBit(oldp+1397,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax)) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1)) 
                                         | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A0_NAND4X0P5H7L_Y_D_AND4X6H7L_Y__DOT__Y))))))));
    bufp->chgBit(oldp+1398,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+1399,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_254))))));
    bufp->chgBit(oldp+1400,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1401,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1402,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A0_OAI31X1H7L_A1_B0_NAND2X0P5H7L_Y__DOT__A) 
                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1403,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A0_OAI31X1H7L_A1_B0_NAND2X0P5H7L_Y__DOT__A) 
                                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_259)))))));
    bufp->chgBit(oldp+1404,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p__DOT__n0) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A1_AOI31X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1405,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1));
    bufp->chgBit(oldp+1406,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_258)))));
    bufp->chgBit(oldp+1407,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_260)))));
    bufp->chgBit(oldp+1408,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A1_AOI31X1P4H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1409,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A1_AOI31X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1410,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p__DOT__n0)) 
                                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A1_AOI31X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1411,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1412,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A0_OAI31X1H7L_A1_B0_NAND2X0P5H7L_Y__DOT__A) 
                                      & (~ (IData)(vlSelfRef.reset)))))));
    bufp->chgBit(oldp+1413,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1414,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1415,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1416,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_AOI31X2H7L_A1__DOT__outA))))));
    bufp->chgBit(oldp+1417,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p__DOT__n0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1418,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p__DOT__n0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1419,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax)) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_251)) 
                                      | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_254)) 
                                         | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0)))))))));
    bufp->chgBit(oldp+1420,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1421,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_265)))))));
    bufp->chgBit(oldp+1422,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1423,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1424,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1425,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1426,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))))));
    bufp->chgBit(oldp+1427,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1428,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1429,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X3H7L_Y_D_OR3X1H7L_Y_A_NAND4X0P7H7L_Y__DOT__Y) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_263)))))));
    bufp->chgBit(oldp+1430,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_263))))));
    bufp->chgBit(oldp+1431,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1432,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__CK));
    bufp->chgBit(oldp+1433,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b2__05d_reg_p_D_AND2X1H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1434,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_NAND2X0P5H7L_A_1_Y_NAND2X0P5H7L_B__DOT__Y) 
                                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b2__05d_reg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1435,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D_NAND2X0P5H7L_Y_B_AND2X1H7L_Y_B_AOI21X0P5H7L_Y_A0_NAND2X0P5H7L_A_1_Y_NAND2X0P5H7L_B__DOT__Y) 
                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1436,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1437,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1438,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1439,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA))))));
    bufp->chgBit(oldp+1440,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p__DOT__n0) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA)))))));
    bufp->chgBit(oldp+1441,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p__DOT__n0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1442,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0));
    bufp->chgBit(oldp+1443,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X3H7L_Y_D_OR3X1H7L_Y_A_NAND4X0P7H7L_Y__DOT__Y) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_263)) 
                                      | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0))))))));
    bufp->chgBit(oldp+1444,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A2_OR4X3H7L_Y_D_OR3X1H7L_Y_A_NAND4X0P7H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1445,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_263)))));
    bufp->chgBit(oldp+1446,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A1_AOI31X1P4H7L_Y__DOT__outA)) 
                                      | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_263)))))));
    bufp->chgBit(oldp+1447,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0)) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A1_AOI31X1P4H7L_Y__DOT__outA)) 
                                         | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_263))))))));
    bufp->chgBit(oldp+1448,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1449,((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1450,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1451,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1452,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A0_inv))))));
    bufp->chgBit(oldp+1453,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A1_AOI21X0P5H7L_B0__DOT__OUT0)))));
    bufp->chgBit(oldp+1454,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A1_AOI21X0P5H7L_B0__DOT__OUT0)) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1455,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p__DOT__n0) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0))))));
    bufp->chgBit(oldp+1456,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__C0));
    bufp->chgBit(oldp+1457,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A0_inv)))));
    bufp->chgBit(oldp+1458,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A0_NOR3X0P5H7L_Y_C_NAND4X0P5H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1459,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A1_AOI31X1P4H7L_Y__DOT__outA)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A0_NOR3X0P5H7L_Y_C_NAND4X0P5H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+1460,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv)))));
    bufp->chgBit(oldp+1461,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A1_AOI21X0P5H7L_B0__DOT__OUT0))))));
    bufp->chgBit(oldp+1462,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN__DOT__AN_bar)))));
    bufp->chgBit(oldp+1463,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__Y))));
    bufp->chgBit(oldp+1464,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN__DOT__AN_bar) 
                                      | ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv)) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A1_AOI21X0P5H7L_B0__DOT__OUT0))) 
                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__Y))))))));
    bufp->chgBit(oldp+1465,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b3__05d_reg_p_D_AND2X1H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1466,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_NAND2X0P5H7L_B__DOT__Y) 
                                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                         | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b2__05d_reg_p__DOT__n0) 
                                               ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b3__05d_reg_p__DOT__n0)))))))));
    bufp->chgBit(oldp+1467,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b2__05d_reg_p__DOT__n0) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b3__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1468,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b2__05d_reg_p__DOT__n0) 
                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b3__05d_reg_p__DOT__n0))));
    bufp->chgBit(oldp+1469,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b3__05d_reg_p_D_NAND2X1P4H7L_Y_B_AND2X1H7L_Y_B_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_NAND2X0P5H7L_B__DOT__Y) 
                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1470,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p_D_AND2X1H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1471,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p_D_AND2X1H7L_Y_B_OAI21X0P5H7L_Y_B0_NAND2X0P5H7L_Y__DOT__A) 
                                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                         | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p__DOT__n0) 
                                               ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p_D_AND2X1H7L_Y_B_OAI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y)))))))));
    bufp->chgBit(oldp+1472,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p__DOT__n0) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p_D_AND2X1H7L_Y_B_OAI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y))))));
    bufp->chgBit(oldp+1473,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p__DOT__n0) 
                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p_D_AND2X1H7L_Y_B_OAI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y))));
    bufp->chgBit(oldp+1474,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p_D_AND2X1H7L_Y_B_OAI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1475,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p_D_AND2X1H7L_Y_B_OAI21X0P5H7L_Y_B0_NAND2X0P5H7L_Y__DOT__A) 
                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1476,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1477,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y_B));
    bufp->chgBit(oldp+1478,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p__DOT__n0) 
                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))));
    bufp->chgBit(oldp+1479,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b5__05d_reg_p_D_AND2X1H7L_Y_B_MUX2X0P5H7L_Y_B_XOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1480,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b6__05d_reg_p_D_AND2X1H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1481,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_NAND2X0P5H7L_B__DOT__Y) 
                                          & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                         | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b6__05d_reg_p__DOT__n0) 
                                               ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D)))))))));
    bufp->chgBit(oldp+1482,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b6__05d_reg_p__DOT__n0) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D))))));
    bufp->chgBit(oldp+1483,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b6__05d_reg_p__DOT__n0) 
                             ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D))));
    bufp->chgBit(oldp+1484,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D));
    bufp->chgBit(oldp+1485,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_NAND2X0P5H7L_A_Y_NAND2X0P5H7L_B__DOT__Y) 
                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1486,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1487,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y)))));
    bufp->chgBit(oldp+1488,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y));
    bufp->chgBit(oldp+1489,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1490,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv)))));
    bufp->chgBit(oldp+1491,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv)) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                         | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y))))))));
    bufp->chgBit(oldp+1492,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b8__05d_reg_p_D_AOI211X1P4H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1493,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p__DOT__n0) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))) 
                                   ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b8__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1494,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p__DOT__n0) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b8__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1495,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p__DOT__n0) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))))));
    bufp->chgBit(oldp+1496,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))));
    bufp->chgBit(oldp+1497,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b8__05d_reg_p_D_AOI211X1P4H7L_Y_B0_NOR2X0P5H7L_Y__DOT__A) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1498,((1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b8__05d_reg_p_D_AOI211X1P4H7L_Y_B0_NOR2X0P5H7L_Y__DOT__A) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
                                      | (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p__DOT__n0) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))) 
                                          ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b8__05d_reg_p__DOT__n0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))))));
    bufp->chgBit(oldp+1499,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p__DOT__D));
    bufp->chgBit(oldp+1500,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))));
    bufp->chgBit(oldp+1501,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND3X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+1502,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D)))));
    bufp->chgBit(oldp+1503,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv)))));
    bufp->chgBit(oldp+1504,((1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv)) 
                                      & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                         | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y))))))));
    bufp->chgBit(oldp+1505,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_valid_reg_p__DOT__CK));
    bufp->chgBit(oldp+1506,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_fire_ICGX0P5H7L_E__DOT__E)))));
    bufp->chgBit(oldp+1507,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_r_ready_reg_p__DOT__CK));
    bufp->chgBit(oldp+1508,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y)))));
    bufp->chgBit(oldp+1509,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_INVX0P5H7L_A__DOT__Y));
    bufp->chgBit(oldp+1510,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_NAND2X0P5H7L_B_Y_ICGX0P5H7L_E__DOT__E));
    bufp->chgBit(oldp+1511,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag_reg_p__DOT__n0));
    bufp->chgBit(oldp+1512,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_fire_NOR2BX1H7L_B__DOT__Ax)))));
    bufp->chgBit(oldp+1513,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag_reg_p__DOT__CK));
    bufp->chgBit(oldp+1514,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag_reg_p_CK_ICGX0P5H7L_ECK__DOT__E));
    bufp->chgBit(oldp+1515,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag_reg_p_D_INVX0P5H7L_A__DOT__Y)))));
    bufp->chgBit(oldp+1516,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag_reg_p_D_INVX0P5H7L_A__DOT__Y));
    bufp->chgBit(oldp+1517,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag_reg_p__DOT__n0));
    bufp->chgBit(oldp+1518,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__u_vaild_0_reg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag_reg_p__DOT__n0))));
    bufp->chgBit(oldp+1519,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag_reg_p_D_AND2X1H7L_Y__DOT__Y));
    bufp->chgBit(oldp+1520,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__E) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__u_vaild_0_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1521,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_fire_ICGX0P5H7L_E__DOT__P0001));
    bufp->chgBit(oldp+1522,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_fire_NOR2BX1H7L_B__DOT__Ax));
    bufp->chgBit(oldp+1523,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b0__05d_reg_p_CK_ICGX0P5H7L_ECK__DOT__P0001));
    bufp->chgBit(oldp+1524,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_0___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1)))) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))));
    bufp->chgBit(oldp+1525,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_NAND3BX1P4H7L_Y_C_AOA211X4H7L_Y_C0_AND2X4H7L_Y_B_AOI21BX0P5H7L_Y_B0N_AOI21BX0P7H7L_Y__DOT__A0))) 
                                   & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_0___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1)))))));
    bufp->chgBit(oldp+1526,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y)) 
                              ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__n0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1527,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p__DOT__n0) 
                                 ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p__DOT__n0) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b10__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_INVX0P5H7L_A__DOT__Y)))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1528,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0) 
                                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1529,((((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b12__05d_reg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__A1))) 
                              ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p__DOT__n0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1530,(((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                     | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_245)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))) 
                                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b14__05d_reg_p__DOT__n0))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1531,(((~ ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b13__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XOR2X1P4H7L_Y_B_NAND4X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                     | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_268)))) 
                                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b15__05d_reg_p__DOT__n0))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1532,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__B0_bar));
    bufp->chgBit(oldp+1533,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__A1N) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__B0_bar))));
    bufp->chgBit(oldp+1534,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y__DOT__B0_bar))));
    bufp->chgBit(oldp+1535,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b16__05d_reg_p_D_AOI2BB1X0P5H7L_Y_A1N_MUX2X1P4H7L_B__DOT__A) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1536,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y_A1_AOI31X0P5H7L_A1__DOT__outA));
    bufp->chgBit(oldp+1537,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_249)))));
    bufp->chgBit(oldp+1538,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b17__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1539,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax))) 
                                   | ((IData)(vlSelfRef.reset) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1540,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_A0_NAND2BX0P5H7L_Y__DOT__Ax));
    bufp->chgBit(oldp+1541,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1542,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+1543,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y__DOT__A0_inv) 
                             & ((~ (IData)(vlSelfRef.reset)) 
                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__Y))))));
    bufp->chgBit(oldp+1544,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_B0_NAND2X0P5H7L_Y__DOT__A) 
                             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))));
    bufp->chgBit(oldp+1545,(((~ (IData)(vlSelfRef.reset)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_B0_NAND2X0P5H7L_Y__DOT__A) 
                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))))));
    bufp->chgBit(oldp+1546,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y__DOT__A0_inv)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A1_AO31X0P5H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+1547,((1U & (((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B))) 
                                    & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_1___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1)))) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))));
    bufp->chgBit(oldp+1548,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b6__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2X0P5H7L_Y_A_AND2X1H7L_B_A_AND2X1H7L_A__DOT__B))) 
                                   & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_1___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1)))))));
    bufp->chgBit(oldp+1549,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__A1_inv));
    bufp->chgBit(oldp+1550,(((~ (IData)(vlSelfRef.reset)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__A1_inv)))));
    bufp->chgBit(oldp+1551,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_OAI21X0P5H7L_A1__DOT__B0)))));
    bufp->chgBit(oldp+1552,((1U & ((~ (IData)(vlSelfRef.reset)) 
                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_OAI21X0P5H7L_A1__DOT__B0))))));
    bufp->chgBit(oldp+1553,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__A1_inv))))));
    bufp->chgBit(oldp+1554,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__A0_inv));
    bufp->chgBit(oldp+1555,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))));
    bufp->chgBit(oldp+1556,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__C0_inv));
    bufp->chgBit(oldp+1557,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__C0_inv) 
                             & (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p__DOT__n0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y_A1_NAND2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__A0_inv)))));
    bufp->chgBit(oldp+1558,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1559,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p_D_OAOI211X0P5H7L_Y_B0_OAOI211X1P4H7L_Y__DOT__C0_inv) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b20__05d_reg_p__DOT__n0))))));
    bufp->chgBit(oldp+1560,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mepc_20___05FNAND2X0P5H7L_A_Y_NAND2X0P5H7L_A__DOT__Y) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1))) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y) 
                                | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_48)))));
    bufp->chgBit(oldp+1561,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA));
    bufp->chgBit(oldp+1562,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1563,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b21__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1564,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_NAND2BX0P5H7L_AN_Y_NAND2X0P5H7L_B__DOT__Y) 
                                       & (~ (IData)(vlSelfRef.reset)))) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))));
    bufp->chgBit(oldp+1565,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1566,((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1567,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0))))));
    bufp->chgBit(oldp+1568,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__B) 
                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__A0)))))));
    bufp->chgBit(oldp+1569,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b22__05d_reg_p_D_NAND2X1P4H7L_Y_A_NAND2BX0P5H7L_Y_AN_NAND2BX0P5H7L_AN_Y_NAND2X0P5H7L_B__DOT__Y) 
                             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))));
    bufp->chgBit(oldp+1570,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1571,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y_A1_AOI31X0P5H7L_A1__DOT__outA));
    bufp->chgBit(oldp+1572,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p__DOT__n0)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b22__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1573,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b23__05d_reg_p_D_AOI31X0P5H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1574,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA));
    bufp->chgBit(oldp+1575,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1576,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))));
    bufp->chgBit(oldp+1577,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA)))));
    bufp->chgBit(oldp+1578,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))))));
    bufp->chgBit(oldp+1579,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p__DOT__n0) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b18__05d_reg_p_D_OAI211X1P4H7L_Y_C0_OAI211X1P4H7L_Y__DOT__outA))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1580,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y_A2_OAI21X0P5H7L_A1_Y_AOAI211X1P4H7L_A0__DOT__C0_inv));
    bufp->chgBit(oldp+1581,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b24__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1582,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA));
    bufp->chgBit(oldp+1583,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1584,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b25__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1585,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA));
    bufp->chgBit(oldp+1586,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI21X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1587,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b26__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1588,((1U & ((~ ((~ (IData)(vlSelfRef.reset)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_259)))));
    bufp->chgBit(oldp+1589,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b27__05d_reg_p_D_OAI32X1P4H7L_Y_A0_OAI31X1H7L_A1_B0_NAND2X0P5H7L_Y__DOT__A) 
                                       & (~ (IData)(vlSelfRef.reset)))) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)))));
    bufp->chgBit(oldp+1590,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_259)))));
    bufp->chgBit(oldp+1591,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_A1_AOI31X2H7L_A1__DOT__outA));
    bufp->chgBit(oldp+1592,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b28__05d_reg_p_D_AOI31X2H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1593,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA));
    bufp->chgBit(oldp+1594,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1595,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b29__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1596,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b2__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1597,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_AOI31X1P4H7L_A1__DOT__outA));
    bufp->chgBit(oldp+1598,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_A1_OAI31X1P4H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1599,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b30__05d_reg_p_D_AOI31X1P4H7L_Y_B0_OAI21X0P5H7L_Y__DOT__outA));
    bufp->chgBit(oldp+1600,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__Y)))));
    bufp->chgBit(oldp+1601,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p__DOT__n0) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0))));
    bufp->chgBit(oldp+1602,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__C0)))));
    bufp->chgBit(oldp+1603,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_A0_AND3X0P5H7L_Y__DOT__Y)) 
                             & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__C0)) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p__DOT__n0) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b19__05d_reg_p_D_OAOI211X1P4H7L_Y_A0_AOI21X0P5H7L_Y__DOT__OUT0))))));
    bufp->chgBit(oldp+1604,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+1605,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__C0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+1606,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A0_inv));
    bufp->chgBit(oldp+1607,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv));
    bufp->chgBit(oldp+1608,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A0_inv) 
                             & ((~ (IData)(vlSelfRef.reset)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y__DOT__A1_inv)))));
    bufp->chgBit(oldp+1609,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN__DOT__AN_bar));
    bufp->chgBit(oldp+1610,(((~ (IData)(vlSelfRef.reset)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN__DOT__AN_bar))));
    bufp->chgBit(oldp+1611,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_A1_AOI21X0P5H7L_B0__DOT__OUT0));
    bufp->chgBit(oldp+1612,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1613,(((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__csr_1__DOT__mtvec_31___05FNAND2X0P5H7L_B_Y_NAND2X0P5H7L_B__DOT__Y) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b9__05d_reg_p_D___VhshVKtmqCQfPvbcwRt2f0BfLUWUHSiBBjAtTffCyiN9__DOT__A1))) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b31__05d_reg_p_D_OAI21X1P4H7L_Y_A0_INVX0P5H7L_A__DOT__A) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0dfZZnITJDrBFdBXWBsWDeBd3enFcaW2LAir2Ilh__DOT__Y)))));
    bufp->chgBit(oldp+1614,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b2__05d_reg_p__DOT__n0) 
                                         ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b3__05d_reg_p__DOT__n0)))))));
    bufp->chgBit(oldp+1615,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p__DOT__n0) 
                                         ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b4__05d_reg_p_D_AND2X1H7L_Y_B_OAI21X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND2X1H7L_Y__DOT__Y)))))));
    bufp->chgBit(oldp+1616,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b6__05d_reg_p__DOT__n0) 
                                         ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b11__05d_reg_p_D_AOI211X1P4H7L_Y_A1_XNOR2X1P4H7L_Y_B_AND4X1P4H7L_Y__DOT__D)))))));
    bufp->chgBit(oldp+1617,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                             & ((~ (IData)(vlSelfRef.reset)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y)))));
    bufp->chgBit(oldp+1618,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+1619,(((~ (IData)(vlSelfRef.reset)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+1620,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y))))));
    bufp->chgBit(oldp+1621,((((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p__DOT__n0) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b7__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_XNOR2X0P5H7L_Y_B_AND3X1P4H7L_Y__DOT__Y))) 
                              ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b8__05d_reg_p__DOT__n0)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B))));
    bufp->chgBit(oldp+1622,(((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B) 
                             & ((~ (IData)(vlSelfRef.reset)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y)))));
    bufp->chgBit(oldp+1623,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv));
    bufp->chgBit(oldp+1624,(((~ (IData)(vlSelfRef.reset)) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y__DOT__B0_inv))));
    bufp->chgBit(oldp+1625,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b31__05d_reg_p_D_OAOI211X0P5H7L_Y_C0_OAOI211X0P5H7L_Y_B0_NOR3BX1P4H7L_AN_C_AND4X0P5H7L_Y__DOT__B)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_payload_addr__05b9__05d_reg_p_D_OAOI211X0P5H7L_Y_A1_INVX0P5H7L_A__DOT__Y))))));
    bufp->chgBit(oldp+1626,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__axi4lite_ar_valid_reg_p_CK_ICGX0P5H7L_ECK__DOT__P0001));
    bufp->chgBit(oldp+1627,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__npc_flag_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1628,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__com_encode_nPC_vaild_NAND2BX0P5H7L_B_Y_NAND2X0P5H7L_B_Y_ICGX0P5H7L_E__DOT__P0001));
    bufp->chgBit(oldp+1629,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__u_vaild_0_reg_p__DOT__n0)))));
    bufp->chgBit(oldp+1630,(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1__DOT__flag_reg_p_CK_ICGX0P5H7L_ECK__DOT__P0001));
    bufp->chgBit(oldp+1631,(((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_b_ready_reg_p__DOT__n0)) 
                                 | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_w_valid_NOR2BX1P4H7L_Z_B_INVX1P4H7L_A__DOT__Y)))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid))));
    bufp->chgBit(oldp+1632,(((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_b_ready_reg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_b_payload_resp_AND4X0P5H7L_B_C_AND2X1H7L_Y_A_AND2X1H7L_A_B_AO31X4H7L_A2__DOT__Y))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid))));
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000118U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
